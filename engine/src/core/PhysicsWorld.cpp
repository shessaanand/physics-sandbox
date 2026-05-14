#include "core/PhysicsWorld.hpp"

PhysicsWorld::PhysicsWorld()
    : gravity(0.0f, -9.81f) {}

void PhysicsWorld::addBody(std::shared_ptr<RigidBody> body) {
    bodies.push_back(body);
}

void PhysicsWorld::step(float dt) {
    for (auto& body : bodies) {
        body->applyForce(gravity * body->mass);
        body->integrate(dt);
    }
}