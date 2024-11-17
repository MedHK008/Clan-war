cmake_minimum_required(VERSION 3.10)
project(ClanWar)

set(CMAKE_CXX_STANDARD 20)

include_directories(headers)

file(GLOB SOURCES "source/*.cpp")

add_executable(
    ClanWar
    main.cpp
    ${SOURCES}
)