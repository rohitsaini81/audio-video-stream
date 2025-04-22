cmake_minimum_required(VERSION 3.10)
project(VoiceChanger)

set(CMAKE_CXX_STANDARD 17)

# Add PortAudio
add_subdirectory(external/portaudio)

# Add SoundTouch
add_subdirectory(external/soundtouch)

# Add the necessary include directories
include_directories(
    external/portaudio/include
    external/soundtouch/include
    external/DSPFilters/shared/DSPFilters/include
)

# Create the executable first
add_executable(voice_changer main.cpp)

# Add the necessary source files for the DSP library to the executable target


target_sources(voice_changer PRIVATE
    external/DSPFilters/shared/DSPFilters/source/Biquad.cpp
    external/DSPFilters/shared/DSPFilters/source/Butterworth.cpp
    external/DSPFilters/shared/DSPFilters/source/Cascade.cpp
    external/DSPFilters/shared/DSPFilters/source/PoleFilter.cpp
    # Add any other necessary DSP files here
)

# Link external libraries (PortAudio, SoundTouch)
target_link_libraries(voice_changer
    portaudio
    SoundTouch
)

# Link DSPFilters to the project (if DSPFilters are a separate library, link them too)
# If your DSP code is part of your project, no need to add a separate target.
# If DSPFilters should be linked as a separate library, uncomment this:
# target_link_libraries(voice_changer DSPFilters)

