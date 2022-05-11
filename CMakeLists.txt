cmake_minimum_required(VERSION 3.22)
project(Practice)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

include_directories(include)

enable_testing()

add_executable(TestContainer test/TestContainer.cpp)

add_test(NAME TestContainer COMMAND TestContainer)