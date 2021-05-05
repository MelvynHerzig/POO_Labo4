cmake_minimum_required(VERSION 3.17)
project(POO_Labo4)

set(CMAKE_CXX_STANDARD 11)

add_executable(POO_Labo4 main.cpp Display/StandardDisplay.cpp Display/StandardDisplay.h Display/WindowsDisplay.cpp Display/WindowsDisplay.h Display/LinuxDisplay.cpp Display/LinuxDisplay.h Display/AbstractDisplay.cpp Display/AbstractDisplay.h Input/KeyListener.cpp Input/KeyListener.h Input/Event.cpp Input/Event.h)