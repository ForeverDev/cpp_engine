#include "vec2.h"

namespace engine {

  namespace math {

    Vec2::Vec2() {
      x = 0;
      y = 0;
    }

    Vec2::Vec2(double x, double y) {
      this->x = x;
      this->y = y;
    }

    double Vec2::magnitude() const {
      return sqrt(x*x + y*y);
    }

    // operators

    bool Vec2::operator==(const Vec2& other) const {
      return x == other.x && y == other.y;
    }

    bool Vec2::operator!=(const Vec2& other) const {
      return !(x == other.x && y == other.y);
    }

    bool Vec2::operator>(const Vec2& other) const {
      return magnitude() > other.magnitude();
    }

    bool Vec2::operator>=(const Vec2& other) const {
      return magnitude() >= other.magnitude();
    }

    bool Vec2::operator<(const Vec2& other) const {
      return magnitude() < other.magnitude();
    }

    bool Vec2::operator<=(const Vec2& other) const {
      return magnitude() <= other.magnitude();
    }

    Vec2& Vec2::operator+=(const Vec2& other) {
      *this = *this + other;
      return *this;
    }

    Vec2& Vec2::operator-=(const Vec2& other) {
      *this = *this - other;
      return *this;
    }

    Vec2& Vec2::operator*=(const Vec2& other) {
      *this = *this * other;
      return *this;
    }

    Vec2& Vec2::operator*=(double other) {
      *this = *this * other;
      return *this;
    }

    Vec2& Vec2::operator/=(const Vec2& other) {
      *this = *this / other;
      return *this;
    }

    // friend operators

    Vec2 operator+(const Vec2& left, const Vec2& right) {
      return Vec2(left.x + right.x, left.y + right.y);
    }

    Vec2 operator-(const Vec2& left, const Vec2& right) {
      return Vec2(left.x - right.x, left.y - right.y);
    }

    Vec2 operator*(const Vec2& left, const Vec2& right) {
      return Vec2(left.x * right.x, left.y * right.y);
    }

    Vec2 operator*(const Vec2& left, double right) {
      return Vec2(left.x * right, left.y * right);
    }

    Vec2 operator/(const Vec2& left, const Vec2& right) {
      return Vec2(left.x / right.x, left.y / right.y);
    }

    std::ostream& operator<<(std::ostream& stream, const Vec2& v) {
      return stream << "[" << v.x << ", " << v.y << "]";
    }
  };

};
