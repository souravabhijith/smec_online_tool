cmake_minimum_required (VERSION 2.6)

# name project
project ("SampleProject")

# path variables
set(SRC_DIR src)
set(TEST_DIR test)
set(MAIN_DIR ./)
set(BUILD_DIR build)
set(UNITY_SOURCE_DIR ./unity)

# create/find the required libraries
add_library(unity STATIC ${UNITY_SOURCE_DIR}/unity.c)
target_include_directories(unity PUBLIC ${UNITY_SOURCE_DIR})

enable_testing()

# main executable for debugging
add_executable(${BUILD_DIR}/SampleProjectMain ${SRC_DIR}/SampleProjectMain.c)

# test executables
add_executable(${BUILD_DIR}/ATest_helloWorld ${TEST_DIR}/ATest.c)
target_include_directories(${BUILD_DIR}/ATest_helloWorld PUBLIC ${UNITY_SOURCE_DIR} ${SRC_DIR})
target_link_libraries(${BUILD_DIR}/ATest_helloWorld unity)
add_test(ATest_helloWorld ${BUILD_DIR}/ATest)

add_executable(${BUILD_DIR}/BTest ${TEST_DIR}/BTest.c)
target_include_directories(${BUILD_DIR}/BTest PUBLIC ${UNITY_SOURCE_DIR} ${SRC_DIR})
target_link_libraries(${BUILD_DIR}/BTest unity)
add_test(BTest_sum ${BUILD_DIR}/BTest sum)
add_test(BTest_subtract ${BUILD_DIR}/BTest subtract)
add_test(BTest_mul ${BUILD_DIR}/BTest mul)
add_test(BTest_divide ${BUILD_DIR}/BTest divide)
