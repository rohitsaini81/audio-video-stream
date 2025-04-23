#include "func.h" // To match declarations
#include <portaudio.h> // For PaStreamCallback, etc.
#include <DspFilters/Dsp.h> // Or wherever Dsp::SimpleFilter is from
#include <SoundTouch.h> // For soundTouch (if declared globally)





#include "func.h"

// Declare filters
Dsp::SimpleFilter<Dsp::Butterworth::HighPass<2>, 1>* highPassFilter;
Dsp::SimpleFilter<Dsp::Butterworth::BandPass<2>, 1>* bandPassFilter;

// Define global SoundTouch instance
soundtouch::SoundTouch soundTouch;


void setupFilters(double sampleRate) {
    // HighPass filter setup
    highPassFilter = new Dsp::SimpleFilter<Dsp::Butterworth::HighPass<2>, 1>();
    highPassFilter->setup(2, sampleRate, 120.0); // Order, sampleRate, cutoff
  
    // BandPass filter setup
    bandPassFilter = new Dsp::SimpleFilter<Dsp::Butterworth::BandPass<2>, 1>();
    bandPassFilter->setup(2, sampleRate, 3000.0,
                          1000.0); // Order, sampleRate, center freq, width
  }

  


int audioCallback(const void *input, void *output,
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