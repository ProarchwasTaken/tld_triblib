cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_COMPILER clang++)

project(
  "tribcore"
  VERSION 1.0.0
  DESCRIPTION "A library of shared code for multiple projects made by me."
  LANGUAGES CXX
)

include_directories("include")

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(RAYLIB -lraylib -lopengl32 -lgdi32 -lwinmm)

set(SOURCE_FILES
  "src/globals.cpp"
  "src/base/actor.cpp"
  "src/base/dynamic_actor.cpp"
  "src/utils/animation.cpp"
)

add_library("tribcore" STATIC ${SOURCE_FILES})
