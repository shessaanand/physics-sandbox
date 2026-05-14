#include "math/Vec2.hpp"

Vec2::Vec2() : x(0.0f), y(0.0f) {}

Vec2::Vec2(float xVal, float yVal)
    : x(xVal), y(yVal) {}

Vec2 Vec2::operator+(const Vec2& other) const {
    return Vec2(x + other.x, y + other.y);
}

Vec2 Vec2::operator-(const Vec2& other) const {
    return Vec2(x - other.x, y - other.y);
}