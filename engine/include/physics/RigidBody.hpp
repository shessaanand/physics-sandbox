#pragma once

#include "math/Vec2.hpp"

class RigidBody {
public:
    Vec2 position;
    Vec2 velocity;
    Vec2 accumulatedForce;

    float mass;
    float inverseMass;

    RigidBody(float bodyMass = 1.0f);

    void applyForce(const Vec2& force);

    void integrate(float dt);

    void clearForces();
};