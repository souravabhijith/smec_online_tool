cmake_minimum_required (VERSION 2.6)

project("SMEC Online Tool")

add_library(unity STATIC Unity/src/unity.c)
target_include_directories(unity PUBLIC Unity/src)

add_subdirectory(first_lesson)