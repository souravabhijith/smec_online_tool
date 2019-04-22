cmake_minimum_required (VERSION 2.6)

# name project
project ("first lesson")

# path variables
set(SRC_DIR src)
set(TEST_DIR test)
set(MAIN_DIR ./)
set(BUILD_DIR build)
set(UNITY_SOURCE_DIR ./unity_test_framework)

# create/find the required libraries
add_library(unity STATIC ${UNITY_SOURCE_DIR}/unity.c)
target_include_directories(unity PUBLIC ${UNITY_SOURCE_DIR})

enable_testing()

# main executable for debugging
add_executable(${BUILD_DIR}/first_lesson ${SRC_DIR}/main.c)

# test executables
add_executable(${BUILD_DIR}/Test_helloworld ${TEST_DIR}/Test_helloworld.c)
target_include_directories(${BUILD_DIR}/Test_helloworld PUBLIC ${UNITY_SOURCE_DIR} ${SRC_DIR})
target_link_libraries(${BUILD_DIR}/Test_helloworld unity)
add_test(Test_helloworld ${BUILD_DIR}/Test_helloworld)

add_executable(${BUILD_DIR}/Test_simple_program ${TEST_DIR}/Test_simple_program.c)
target_include_directories(${BUILD_DIR}/Test_simple_program PUBLIC ${UNITY_SOURCE_DIR} ${SRC_DIR})
target_link_libraries(${BUILD_DIR}/Test_simple_program unity)
add_test(Test_simple_program_sum ${BUILD_DIR}/Test_simple_program sum)
add_test(Test_simple_program_subtract ${BUILD_DIR}/Test_simple_program subtract)
add_test(Test_simple_program_mul ${BUILD_DIR}/Test_simple_program mul)
add_test(Test_simple_program_divide ${BUILD_DIR}/Test_simple_program divide)
