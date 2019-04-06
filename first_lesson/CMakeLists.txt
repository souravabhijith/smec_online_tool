cmake_minimum_required (VERSION 2.6)

# name project
project ("first lesson")

# path variables
set(SRC_DIR src)
set(TEST_DIR test)
set(MAIN_DIR ./..)
set(BUILD_DIR build)
set(UNITY_SOURCE_DIR ../unity_test_framework)

# create/find the required libraries
add_library(unity STATIC ${UNITY_SOURCE_DIR}/unity.c)
target_include_directories(unity PUBLIC ${UNITY_SOURCE_DIR})

enable_testing()

# main executable for debugging
add_executable(first_lesson ${SRC_DIR}/main.c)

# test executables
add_executable(Test_helloworld ${TEST_DIR}/Test_helloworld.c)
target_include_directories(Test_helloworld PUBLIC ${UNITY_SOURCE_DIR} ${SRC_DIR})
target_link_libraries(Test_helloworld unity)
add_test(Test_helloworld Test_helloworld)

add_executable(Test_simple_program ${TEST_DIR}/Test_simple_program.c)
target_include_directories(Test_simple_program PUBLIC ${UNITY_SOURCE_DIR} ${SRC_DIR})
target_link_libraries(Test_simple_program unity)
add_test(Test_simple_program Test_simple_program)
