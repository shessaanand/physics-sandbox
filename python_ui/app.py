import os
import sys
sys.path.insert(0, os.path.abspath(os.path.join(os.path.dirname(__file__), "..")))

import physics_bindings

world = physics_bindings.PhysicsWorld()
body = physics_bindings.RigidBody(1.0)
world.addBody(body)

for i in range(10):
    world.step(0.016)
    print(f"Step {i}: ({body.position.x}, {body.position.y})")