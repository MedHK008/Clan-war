cmake_minimum_required(VERSION 3.10)
project(ClanWar)

set(CMAKE_CXX_STANDARD 20)
set(SFML_DIR "C:/SFML-2.6.2/lib/cmake/SFML")

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)
include_directories(headers)

file(GLOB SOURCES "source/*.cpp")

add_executable(
    ClanWar
    main.cpp
    ${SOURCES}
)

target_link_libraries(ClanWar sfml-graphics sfml-window sfml-system)