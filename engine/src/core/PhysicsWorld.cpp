#include "core/PhysicsWorld.hpp"
PhysicsWorld::PhysicsWorld(){}

void PhysicsWorld::addBody(const RigidBody& body){
    bodies.push_back(body);
}
void PhysicsWorld::step(float dt){
    for (auto& body:bodies){
        body.integrate(dt);
    }
}