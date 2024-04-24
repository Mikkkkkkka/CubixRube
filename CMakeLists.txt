cmake_minimum_required(VERSION 3.28)
project(CubixRube)

set(CMAKE_CXX_STANDARD 20)

add_executable(CubixRube main.cpp
        cube.hpp
        cube.cpp
        WindowManager.hpp
        WindowManager.cpp
        RubixCube.hpp
        RubixCube.cpp)

target_link_libraries(CubixRube opengl32 freeglut)
