cmake_minimum_required(VERSION 3.17)
project(Ejemplo_DIP2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejemplo_DIP2 main.cpp Hospital.cpp Hospital.h IVaccination.h Johnson.h Johnson.cpp PfizerBioNTech.h PfizerBioNTech.cpp
        Moderna.h Moderna.cpp)