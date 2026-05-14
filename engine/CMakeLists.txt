find_package(pybind11 REQUIRED)

set(ENGINE_SOURCES
    src/core/PhysicsWorld.cpp
    src/math/Vec2.cpp
    src/physics/RigidBody.cpp
)

add_library(engine_core STATIC ${ENGINE_SOURCES})
target_include_directories(engine_core PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
pybind11_add_module(physics_bindings
    src/bindings/bindings.cpp
)

target_link_libraries(physics_bindings PRIVATE engine_core)