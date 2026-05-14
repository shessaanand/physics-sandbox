#include "math/Vec2.hpp"
#include <cmath>

Vec2::Vec2() : x(0.0f), y(0.0f) {}

Vec2::Vec2(float xVal, float yVal)
    : x(xVal), y(yVal) {}

Vec2 Vec2::operator+(const Vec2& other) const {
    return Vec2(x + other.x, y + other.y);
}

Vec2 Vec2::operator-(const Vec2& other) const {
    return Vec2(x - other.x, y - other.y);
}

Vec2 Vec2::operator*(float scalar) const {
    return Vec2(x * scalar, y * scalar);
}

Vec2 Vec2::operator/(float scalar) const {
    return Vec2(x / scalar, y / scalar);
}

Vec2& Vec2::operator+=(const Vec2& other) {
    x += other.x;
    y += other.y;

    return *this;
}

float Vec2::magnitude() const {
    return std::sqrt(x * x + y * y);
}

Vec2 Vec2::normalized() const {
    float mag = magnitude();

    if (mag == 0.0f) {
        return Vec2(0.0f, 0.0f);
    }

    return Vec2(x / mag, y / mag);
}

float Vec2::dot(const Vec2& a, const Vec2& b) {
    return a.x * b.x + a.y * b.y;
}