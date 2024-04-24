//
// Created by NeSai on 23.04.2024.
//

#include "RubixCube.hpp"

#include <GL/gl.h>

RubixCube::RubixCube() {

    rotation.fill(0.0f);

    for (int x = 0; x < 3; x++)
        for (int y = 0; y < 3; y++)
            for (int z = 0; z < 3; z++)
                cubes[9*x + 3*y + z].position = { x-1, y-1, z-1 };
}

void RubixCube::Draw() const {

    glPushMatrix();

    glRotatef(rotation[0], 1,0,0);
    glRotatef(rotation[1], 0,1,0);
    glRotatef(rotation[2], 0,0,1);

    for (Cube c : cubes)
        c.Draw();

    glPopMatrix();
}
