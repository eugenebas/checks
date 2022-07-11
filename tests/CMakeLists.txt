cmake_minimum_required(VERSION 3.22.1)
project(checks_tests)

add_executable(checks_c_tests test.c)
target_link_libraries(checks_c_tests checks)
add_test(checks_c_tests checks_c_tests)

add_executable(checks_cpp_tests test.cpp)
target_link_libraries(checks_cpp_tests checks)
add_test(checks_cpp_tests checks_cpp_tests)
