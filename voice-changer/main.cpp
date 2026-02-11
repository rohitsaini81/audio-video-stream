#include <SoundTouch.h>
#include <iostream>
#include <portaudio.h>
#include <thread>
#include <atomic>

#include "DspFilters/Biquad.h"
#include "DspFilters/Butterworth.h"
#include "DspFilters/Common.h"
#include "DspFilters/Filter.h"
#include "./func.h"

#define SAMPLE_RATE 44100
#define FRAMES_PER_BUFFER 512

std::atomic<bool> running(true);



float currentPitch = 1.0f;
float currentTempo = 1.0f;
float currentRate = 1.0f;



void controlLoop() {
    char key;
    while (running) {
        key = std::cin.get();

        
        if (key == '1') {
          currentPitch += 0.1f;
          soundTouch.setPitch(currentPitch);
          std::cout << "Pitch increased to " << currentPitch << "\n";
      }
      if (key == '2') {
          currentPitch -= 0.1f;
          soundTouch.setPitch(currentPitch);
          std::cout << "Pitch decreased to " << currentPitch << "\n";
      }
      
        if (key == '3') {
          currentTempo += 0.1f;
          soundTouch.setTempo(currentTempo);
          std::cout << "Tempo increased to " << currentTempo << "\n";
      }
      if (key == '4') {
          currentTempo -= 0.1f;
          soundTouch.setTempo(currentTempo);
          std::cout << "Tempo decreased to " << currentTempo << "\n";
      }
      
        if (key == '5') {
          currentRate += 0.1f;
          soundTouch.setRate(currentRate);
          std::cout << "Rate increased to " << currentRate << "\n";
      }
      if (key == '6') {
          currentRate -= 0.1f;
          soundTouch.setRate(currentRate);
          std::cout << "Rate decreased to " << currentRate << "\n";
      }
      
        if (key == 'q' || key == 'Q') {
            running = false;
            std::cout << "Exiting...\n";
        }
        if (key == 'p' || key == 'P') {
            currentPitch += 0.1f;
            soundTouch.setPitch(currentPitch);
            std::cout << "Pitch: " << currentPitch << "\n";
        }
        if (key == 't' || key == 'T') {
            currentTempo += 0.1f;
            soundTouch.setTempo(currentTempo);
            std::cout << "Tempo: " << currentTempo << "\n";
        }
        if (key == 'r' || key == 'R') {
            currentRate += 0.1f;
            soundTouch.setRate(currentRate);
            std::cout << "Rate: " << currentRate << "\n";
        }
        if (key == 'h' || key == 'H') {
            std::cout << "Controls:\n"
                      << "  p/P: Pitch +/-\n"
                      << "  t/T: Tempo +/-\n"
                      << "  r/R: Rate +/-\n"
                      << "  q  : Quit\n";
        }
        if (key == 's' || key == 'S') {
            std::cout << "Current settings:\n"
                      << "  Pitch: " << currentPitch << "\n"
                      << "  Tempo: " << currentTempo << "\n"
                      << "  Rate: " << currentRate << "\n";
        }
      









    }
}

int main() {

  currentPitch = 2.2f;
currentTempo = 1.05f;
currentRate = 1.0f;

soundTouch.setPitch(currentPitch);
soundTouch.setTempo(currentTempo);
soundTouch.setRate(currentRate);



    std::cout << "Voice Changer\n";
    Pa_Initialize();
    int numDevices = Pa_GetDeviceCount();
    const PaDeviceInfo *deviceInfo;

    for (int i = 0; i < numDevices; i++) {
        deviceInfo = Pa_GetDeviceInfo(i);
        if (deviceInfo->maxInputChannels > 0) {
            std::cout << "Input Device #" << i << ": " << deviceInfo->name << "\n";
        }
    }

    soundTouch.setSampleRate(SAMPLE_RATE);
    soundTouch.setChannels(1);
    soundTouch.setPitch(1.0f);
    soundTouch.setTempo(1.0f);
    soundTouch.setRate(1.0f);

    setupFilters(SAMPLE_RATE);

    PaStream *stream;
    Pa_OpenDefaultStream(&stream, 1, 1, paFloat32, SAMPLE_RATE, FRAMES_PER_BUFFER, audioCallback, nullptr);
    Pa_StartStream(stream);

    std::cout << "Voice changer running...\n";
    std::cout << "Controls:\n"
              << "  p/P: Pitch +/-\n"
              << "  t/T: Tempo +/-\n"
              << "  r/R: Rate +/-\n"
              << "  q  : Quit\n";

    std::thread controlThread(controlLoop);
    controlThread.join();

    Pa_StopStream(stream);
    Pa_CloseStream(stream);
    Pa_Terminate();

    return 0;
}
