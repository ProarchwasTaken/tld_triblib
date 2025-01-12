// globals.cpp
#include <vector>
#include "data/data_sound.h"
#include "globals.h"

using std::vector, std::mt19937, std::random_device;


double PAUSE_PENALTY = 0;

namespace settings {
  float sfx_volume = 1.0;
  float bgm_volume = 1.0;
}

namespace audio {
  vector<SoundMetaData> sfx_metadata;
  vector<MusicMetaData> bgm_metadata;

  Music music_stream;
  MusicMetaData *stream_data = NULL;
  VolumeLerpData bgm_vol_lerp;
}

namespace RNG {
  mt19937 generator(random_device{}());
}

