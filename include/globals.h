// globals.h
#pragma once
#include <vector>
#include <random>
#include "base/generics.h"
#include "data/data_sound.h"
#include "data/data_music.h"


extern double PAUSE_PENALTY;
#define CURRENT_TIME (GetTime() - PAUSE_PENALTY)

namespace settings {
  extern float sfx_volume; 
  extern float bgm_volume;
}

namespace audio {
  extern std::vector<SoundMetaData> sfx_metadata;
  extern std::vector<MusicMetaData> bgm_metadata;

  extern Music music_stream;
  extern MusicMetaData *stream_data;
  extern VolumeLerpData bgm_vol_lerp;
}

namespace RNG {
  extern std::mt19937 generator;
}

namespace Dynamic {
  extern dynamic_list queue;
}

