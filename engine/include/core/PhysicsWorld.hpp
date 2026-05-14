#pragma once

#include <memory>
#include <vector>
#include "physics/RigidBody.hpp"

class PhysicsWorld {
public:
    std::vector<std::shared_ptr<RigidBody>> bodies;

    Vec2 gravity;
    PhysicsWorld();

    void addBody(std::shared_ptr<RigidBody> body);
    void step(float dt);
};