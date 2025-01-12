cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(
  "tribcore"
  VERSION 1.0.0
  DESCRIPTION "A library of shared code for multiple projects made by me."
  LANGUAGES CXX
)

include_directories("include")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(SOURCE_FILES
  "src/globals.cpp"
  "src/base/actor.cpp"
  "src/base/dynamic_actor.cpp"
  "src/system/audio.cpp"
  "src/utils/animation.cpp"
  "src/utils/sound.cpp"
  "src/utils/music.cpp"
  "src/utils/dynamic.cpp"
  "src/utils/sprite.cpp"
  "src/utils/text.cpp"
)

set(HEADER_FILES
  "include/globals.h"
  "include/base/actor.h"
  "include/base/dynamic_actor.h"
  "include/base/generics.h"
  "include/base/scene.h"
  "include/data/data_music.h"
  "include/data/data_sound.h"
  "include/data/data_sprites.h"
  "include/sys_audio.h"
  "include/utils_animation.h"
  "include/utils_sound.h"
  "include/utils_music.h"
  "include/utils_dynamic.h"
  "include/utils_sprite.h"
  "include/utils_text.h"
)

add_library("tribcore" STATIC ${HEADER_FILES} ${SOURCE_FILES})
