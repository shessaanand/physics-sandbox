#pragma once

#include <vector>
#include "physics/RigidBody.hpp"

class PhysicsWorld{
public:
    std::vector<RigidBody> bodies;

    PhysicsWorld();

    void addBody(const RigidBody& body);
    void step(float dt);
};