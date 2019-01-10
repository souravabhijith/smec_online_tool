cmake_minimum_required (VERSION 2.6)

project ("first lesson")
enable_testing()
add_executable(first_lesson Test_helloworld.c ../../Unity/src/unity.c)
