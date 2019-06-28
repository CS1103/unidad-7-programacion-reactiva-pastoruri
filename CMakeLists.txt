cmake_minimum_required(VERSION 3.13.4)
project(viernes)

set(CMAKE_CXX_STANDARD 14)

set(SFML_INCLUDE_DIR "/home/utec/Escritorio/SFML-2.5.1/include/SFML")
set(SFML_LIBRARY_DIR "/home/utec/Escritorio/SFML-2.5.1/lib")
set(SFML_DIR "/home/utec/Escritorio/SFML-2.5.1/lib/cmake/SFML")

link_directories(SFML_LIBRARY_DIR)
include_directories(SFML_INCLUDE_DIR)

find_package(SFML 2.5.1 COMPONENTS system window graphics network audio)

if(SFML_FOUND)
    message(STATUS "SFML_INCLUDE_DIR: ${SFML_INCLUDE_DIR}")
    message(STATUS "SFML_LIBRARIES: ${SFML_LIBRARIES}")
    message(STATUS "SFML_VERSION: ${SFML_VERSION}")
endif()

add_executable(viernes main.cpp Component.h Window.h Event.h Circle.h Rectangle.h)
target_link_libraries (viernes sfml-graphics sfml-window sfml-system)