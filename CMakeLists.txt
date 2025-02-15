cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)

project(
  "triblib"
  VERSION 1.0.0
  DESCRIPTION "A library of shared code for multiple projects made by me."
  LANGUAGES CXX
)

include_directories("include/triblib")

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
  "include/triblib/globals.h"
  "include/triblib/base/actor.h"
  "include/triblib/base/dynamic_actor.h"
  "include/triblib/base/generics.h"
  "include/triblib/base/scene.h"
  "include/triblib/data/data_music.h"
  "include/triblib/data/data_sound.h"
  "include/triblib/data/data_sprites.h"
  "include/triblib/sys_audio.h"
  "include/triblib/utils/animation.h"
  "include/triblib/utils/sound.h"
  "include/triblib/utils/music.h"
  "include/triblib/utils/dynamic.h"
  "include/triblib/utils/sprite.h"
  "include/triblib/utils/text.h"
)

add_library("triblib" ${HEADER_FILES} ${SOURCE_FILES})
target_include_directories("triblib" PUBLIC "include")
