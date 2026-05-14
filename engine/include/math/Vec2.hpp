#pragma once

class Vec2 {
public:
    float x;
    float y;

    Vec2();
    Vec2(float xVal, float yVal);

    Vec2 operator+(const Vec2& other) const;
    Vec2 operator-(const Vec2& other) const;

    Vec2 operator*(float scalar) const;
    Vec2 operator/(float scalar) const;

    Vec2& operator+=(const Vec2& other);

    float magnitude() const;

    Vec2 normalized() const;

    static float dot(const Vec2& a, const Vec2& b);
};