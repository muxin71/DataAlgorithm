cmake_minimum_required(VERSION 3.15)
project(YourProjectName)

add_executable(PalindromicTests palindromic_test.cpp palindromic.cpp)

target_compile_options(PalindromicTests PRIVATE --coverage -pthread)

target_link_libraries(PalindromicTests gtest gtest_main pthread)

target_link_options(PalindromicTests PRIVATE --coverage)
