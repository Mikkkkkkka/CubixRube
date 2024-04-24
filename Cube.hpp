//
// Created by NeSai on 23.04.2024.
//

#ifndef CUBE_HPP
#define CUBE_HPP

#define WHITE   1.0f, 1.0f, 1.0f
#define YELLOW   1.0f, 1.0f, 0.0f
#define GREEN   0.0f, 1.0f, 0.0f
#define BLUE    0.0f, 0.0f, 1.0f
#define RED     1.0f, 0.0f, 0.0f
#define ORANGE  1.0f, 0.7f, 0.0f

#include <array>

using std::array;

class Cube {

    float _edgeLen;

    void DrawFace() const;

public:

    array<int, 3> position;
    array<float, 3> rotation;

    Cube();
    Cube(array<int, 3>, array<float, 3>, float);
    ~Cube() = default;

    void Draw() const;
};

#endif //CUBE_HPP
