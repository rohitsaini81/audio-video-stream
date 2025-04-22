#include <SoundTouch.h>
#include <iostream>
#include <portaudio.h>

#include "DspFilters/Biquad.h"
#include "DspFilters/Butterworth.h"

#include "DspFilters/Common.h"
#include "DspFilters/Filter.h"

// Use the Butterworth versions of the filters
Dsp::SimpleFilter<Dsp::Butterworth::HighPass<2>, 1> *highPassFilter = nullptr;

Dsp::SimpleFilter<Dsp::Butterworth::BandPass<2>, 1> *bandPassFilter = nullptr;

using namespace soundtouch;

#define SAMPLE_RATE 44100
#define FRAMES_PER_BUFFER 512

// Define a processor object
SoundTouch soundTouch;

void setupFilters(double sampleRate) {
  // HighPass filter setup
  highPassFilter = new Dsp::SimpleFilter<Dsp::Butterworth::HighPass<2>, 1>();
  highPassFilter->setup(2, sampleRate, 120.0); // Order, sampleRate, cutoff

  // BandPass filter setup
  bandPassFilter = new Dsp::SimpleFilter<Dsp::Butterworth::BandPass<2>, 1>();
  bandPassFilter->setup(2, sampleRate, 3000.0,
                        1000.0); // Order, sampleRate, center freq, width
}

// Audio callback
static int audioCallback(const void *input, void *output,
                         unsigned long frameCount,
                         const PaStreamCallbackTimeInfo *timeInfo,
                         PaStreamCallbackFlags statusFlags, void *userData) {
  float *in = (float *)input;
  float *out = (float *)output;

  soundTouch.putSamples(in, frameCount);
  int numReceived = soundTouch.receiveSamples(out, frameCount);

  // Apply DSP filters to the audio (high-pass + band-pass)
  for (unsigned long i = 0; i < frameCount; i++) {
    // Create pointers for each sample
    float *samplePointer = &out[i];

    // Apply high-pass filter
    highPassFilter->process(1, &samplePointer);

    // Apply band-pass filter
    bandPassFilter->process(1, &samplePointer);
  }

  // If not enough processed samples, fill with zero
  for (unsigned long i = numReceived; i < frameCount; i++) {
    out[i] = 0;
  }

  return paContinue;
}

int main() {
  Pa_Initialize();
  int numDevices = Pa_GetDeviceCount();
  const PaDeviceInfo *deviceInfo;

  // Show available input devices
  for (int i = 0; i < numDevices; i++) {
    deviceInfo = Pa_GetDeviceInfo(i);
    if (deviceInfo->maxInputChannels > 0) {
      std::cout << "Input Device #" << i << ": " << deviceInfo->name << "\n";
    }
  }

  // Setup SoundTouch (pitch, tempo)
  soundTouch.setSampleRate(SAMPLE_RATE);
  soundTouch.setChannels(1);
  soundTouch.setPitch(2.2f);  // Raise pitch (female voice effect)
  soundTouch.setTempo(1.05f); // Slight tempo increase (natural speed)
  soundTouch.setRate(1.0f);   // Keep the rate the same

  // Setup filters
  setupFilters(SAMPLE_RATE);

  // Open audio stream
  PaStream *stream;
  Pa_OpenDefaultStream(&stream, 1, 1, paFloat32, SAMPLE_RATE, FRAMES_PER_BUFFER,
                       audioCallback, nullptr);
  Pa_StartStream(stream);

  std::cout << "Voice changer running... Press Enter to stop.\n";
  std::cin.get();

  Pa_StopStream(stream);
  Pa_CloseStream(stream);
  Pa_Terminate();

  return 0;
}
