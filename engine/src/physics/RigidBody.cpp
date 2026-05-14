#include "physics/RigidBody.hpp"

RigidBody::RigidBody(float bodyMass)
    : position(0.0f, 0.0f),
      velocity(0.0f, 0.0f),
      accumulatedForce(0.0f, 0.0f),
      mass(bodyMass),
      inverseMass(1.0f / bodyMass) {}

void RigidBody::applyForce(const Vec2& force) {
    accumulatedForce += force;
}

void RigidBody::integrate(float dt) {
    Vec2 acceleration = accumulatedForce * inverseMass;

    velocity += acceleration * dt;

    position += velocity * dt;

    clearForces();
}

void RigidBody::clearForces() {
    accumulatedForce = Vec2(0.0f, 0.0f);
}