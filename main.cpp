#include <iostream>
#include "RubixCube.hpp"
#include "WindowManager.hpp"
#include <GL/freeglut.h>

int main(int argc, char** argv) {

    RubixCube cube;
    WindowManager window(argc, argv, cube);
    window.Init();

    return 0;
}
