cmake_minimum_required(VERSION 2.6)
project(etape6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")

set(SOURCE_FILES Edge.cpp State.cpp FSA.cpp Matcher.cpp ExpressionParser.cpp main.cpp)
add_executable(../test_improved_pattern ${SOURCE_FILES})