cmake_minimum_required(VERSION 3.22)
project(meme)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED true)

find_package(GTest CONFIG REQUIRED)

include_directories(include)

enable_testing()

add_executable(TestContainer test/TestContainer.cpp)

target_link_libraries(TestContainer PRIVATE GTest::gtest GTest::gtest_main)

add_test(NAME TestContainer COMMAND TestContainer)