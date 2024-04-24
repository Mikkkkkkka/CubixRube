//
// Created by NeSai on 23.04.2024.
//

#include "Cube.hpp"

#include <GL/freeglut_std.h>

Cube::Cube() {

    position.fill(0);
    rotation.fill(0);
    _edgeLen = 1;
}

Cube::Cube(array<int, 3> _position, array<float, 3> _rotation, float edgeLen) {

    position = _position;
    rotation = _rotation;
    _edgeLen = edgeLen;
}

void Cube::DrawFace() const {

    float halfLen = (_edgeLen/2);
    glBegin(GL_QUADS);
        glVertex2f(-halfLen, -halfLen);
        glVertex2f(-halfLen, halfLen);
        glVertex2f(halfLen, halfLen);
        glVertex2f(halfLen, -halfLen);
    glEnd();
}


void Cube::Draw() const {

    glPushMatrix();

    glTranslated(position[0], position[1], position[2]);
    glRotatef(rotation[0], 1, 0, 0);
    glRotatef(rotation[1], 0, 1, 0);
    glRotatef(rotation[2], 0, 0, 1);

    glPushMatrix();
    glTranslatef(0.0f, (_edgeLen / 2), 0.0f);
    glRotatef(90, 1.0f, 0.0f, 0.0f);
    glColor3f(WHITE);
    DrawFace();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, -(_edgeLen / 2), 0.0f);
    glRotatef(-90, 1.0f, 0.0f, 0.0f);
    glColor3f(YELLOW);
    DrawFace();
    glPopMatrix();

    glPushMatrix();
    glTranslatef((_edgeLen / 2), 0.0f, 0.0f);
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glColor3f(RED);
    DrawFace();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-(_edgeLen / 2), 0.0f, 0.0f);
    glRotatef(-90, 0.0f, 1.0f, 0.0f);
    glColor3f(ORANGE);
    DrawFace();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, -(_edgeLen / 2));
    glRotatef(180.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(BLUE);
    DrawFace();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.0f, 0.0f, (_edgeLen / 2));
    glRotatef(0.0f, 1.0f, 0.0f, 0.0f);
    glColor3f(GREEN);
    DrawFace();
    glPopMatrix();

    glPopMatrix();
}
