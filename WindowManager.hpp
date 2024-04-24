//
// Created by NeSai on 23.04.2024.
//

#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include "RubixCube.hpp"

class WindowManager {

    int argc;
    char** argv;
    static RubixCube cube;

public:

    WindowManager(int, char**, const RubixCube&);
    ~WindowManager() = default;

    void Init();
    static void Display();
    static void ManageInput(int, int, int);
};

#endif //GRAPHICS_HPP
