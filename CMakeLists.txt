cmake_minimum_required(VERSION 3.24)
project(Herencia)

set(CMAKE_CXX_STANDARD 17)

add_executable(Herencia ej_alumnos.cpp persona.cpp persona.h alumnos.cpp alumnos.h materia.cpp materia.h docente.cpp docente.h)
