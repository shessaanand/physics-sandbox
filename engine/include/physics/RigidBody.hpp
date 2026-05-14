#pragma once

#include "math/Vec2.hpp"

class RigidBody {
public:
    Vec2 position;
    Vec2 velocity;

    RigidBody();

    void integrate(float dt);
};