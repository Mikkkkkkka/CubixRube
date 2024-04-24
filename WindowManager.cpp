//
// Created by NeSai on 23.04.2024.
//

#include "WindowManager.hpp"
#include <GL/freeglut.h>

RubixCube WindowManager::cube;

WindowManager::WindowManager(int argc, char **argv, const RubixCube& cube) {

    this->argc = argc;
    this->argv = argv;
    WindowManager::cube = cube;
}

void WindowManager::Init() {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowSize(512, 512);
    glutInitWindowPosition(200, 200);
    glutCreateWindow("CubixRube");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(Display);
    glutSpecialFunc(ManageInput);

    glutMainLoop();
}

void WindowManager::Display() {

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    // glOrtho(-5,5, -5,5, -5,5); // Чтоб не занимал весь экран
    glFrustum(-0.1f,0.1f, -0.1f,0.1f, 0.2f, 20.0f); // Перспектива, все дела
    glTranslatef(0.0f, 0.25f, -6.0f); // Ппередвигаем на удобно место
    glRotated(40, 1, 0, 0); // Наклоняем, чтобы бол видно верхнюю грань

    cube.Draw(); // Рисуем кубик
    glutSwapBuffers();
}

void WindowManager::ManageInput(int keyCode, int x, int y) {

    if (keyCode == GLUT_KEY_LEFT)
        cube.rotation[1] += 5;
    if (keyCode == GLUT_KEY_RIGHT)
        cube.rotation[1] -= 5;

    glutPostRedisplay(); // Вызвает Display чтобы отобразить изменения
}

