#include <pybind11/pybind11.h>

#include "math/Vec2.hpp"
#include "physics/RigidBody.hpp"
#include "core/PhysicsWorld.hpp"

namespace py = pybind11;

PYBIND11_MODULE(physics_bindings, m) {
    py::class_<Vec2>(m, "Vec2")
        .def(py::init<float, float>())
        .def_readwrite("x", &Vec2::x)
        .def_readwrite("y", &Vec2::y);

    py::class_<RigidBody>(m, "RigidBody")
        .def(py::init<>())
        .def_readwrite("position", &RigidBody::position)
        .def_readwrite("velocity", &RigidBody::velocity)
        .def("integrate", &RigidBody::integrate);

    py::class_<PhysicsWorld>(m, "PhysicsWorld")
        .def(py::init<>())
        .def("addBody", &PhysicsWorld::addBody)
        .def("step", &PhysicsWorld::step);
}