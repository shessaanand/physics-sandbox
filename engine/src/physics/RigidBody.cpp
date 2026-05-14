#include "physics/RigidBody.hpp"

RigidBody::RigidBody() 
    : position(0.0f,0.0f),
      velocity(0.0f,0.0f){}

void RigidBody::integrate(float dt){
    position=position+Vec2(velocity.x * dt, velocity.y * dt);
}