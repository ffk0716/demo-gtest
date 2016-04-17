cmake_minimum_required(VERSION 3.5)


enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(foo-ut foo-unittest.cxx foo.cxx)
target_link_libraries(foo-ut ${GTEST_BOTH_LIBRARIES})
add_test(test-foo-ut foo-ut)
