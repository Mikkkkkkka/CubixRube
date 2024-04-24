//
// Created by NeSai on 23.04.2024.
//

#ifndef RUBIXCUBE_HPP
#define RUBIXCUBE_HPP

#include <array>
#include "Cube.hpp"

using std::array;

class RubixCube {

    array<Cube, 27> cubes;

public:

    array<float, 3> rotation{};

    RubixCube();
    ~RubixCube() = default;

    void Draw() const;
};


#endif //RUBIXCUBE_HPP
