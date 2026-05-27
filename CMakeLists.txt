cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(OpenSSL REQUIRED)
find_package(ZLIB REQUIRED)

file(GLOB SRCS "src/*.cpp")

add_executable(test ${SRCS})

target_include_directories(test PRIVATE include/)

target_compile_options(test PRIVATE -Wall -Wextra)
