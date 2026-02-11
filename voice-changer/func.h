#pragma once

#include <portaudio.h>
#include <SoundTouch.h>  // Make sure this path matches your system/setup

void setupFilters(double sampleRate);

int audioCallback(const void *input, void *output,
    unsigned long frameCount,
    const PaStreamCallbackTimeInfo *timeInfo,
    PaStreamCallbackFlags statusFlags, void *userData);

// External SoundTouch instance
extern soundtouch::SoundTouch soundTouch;
