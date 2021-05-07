cmake_minimum_required(VERSION 3.17)
project(POO_Labo4)

set(CMAKE_CXX_STANDARD 11)

add_executable(POO_Labo4 main.cpp Field.cpp Field.h Entities/Humanoid.cpp Entities/Humanoid.h Entities/Vampire.cpp Entities/Vampire.h Entities/Buffy.cpp Entities/Buffy.h Actions/Action.h Entities/Human.cpp Entities/Human.h Entities/HumanoidType.h Entities/Position.cpp Entities/Position.h Entities/IKillable.h Actions/Move.cpp Actions/Move.h Actions/Kill.cpp Actions/Kill.h Actions/Bite.cpp Actions/Bite.h Actions/Stay.cpp Actions/Stay.h)