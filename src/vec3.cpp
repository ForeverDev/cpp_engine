#include "vec3.h"

namespace engine {

  namespace math {

    Vec3::Vec3() {
      x = 0;
      y = 0;
      z = 0;
    }

    Vec3::Vec3(double x, double y, double z) {
      this->x = x;
      this->y = y;
      this->z = z;
    }

    double Vec3::magnitude() const {
      return sqrt(x*x + y*y + z*z);
    }

    // operators

    bool Vec3::operator==(const Vec3& other) const {
      return x == other.x && y == other.y && z == other.z;
    }

    bool Vec3::operator!=(const Vec3& other) const {
      return !(x == other.x && y == other.y && z == other.z);
    }

    bool Vec3::operator>(const Vec3& other) const {
      return magnitude() > other.magnitude();
    }

    bool Vec3::operator>=(const Vec3& other) const {
      return magnitude() >= other.magnitude();
    }

    bool Vec3::operator<(const Vec3& other) const {
      return magnitude() < other.magnitude();
    }

    bool Vec3::operator<=(const Vec3& other) const {
      return magnitude() <= other.magnitude();
    }

    Vec3& Vec3::operator+=(const Vec3& other) {
      *this = *this + other;
      return *this;
    }

    Vec3& Vec3::operator-=(const Vec3& other) {
      *this = *this - other;
      return *this;
    }

    Vec3& Vec3::operator*=(const Vec3& other) {
      *this = *this * other;
      return *this;
    }

    Vec3& Vec3::operator*=(double other) {
      *this = *this * other;
      return *this;
    }

    Vec3& Vec3::operator/=(const Vec3& other) {
      *this = *this / other;
      return *this;
    }

    // friend operators

    Vec3 operator+(const Vec3& left, const Vec3& right) {
      return Vec3(left.x + right.x, left.y + right.y, left.z + right.z);
    }

    Vec3 operator-(const Vec3& left, const Vec3& right) {
      return Vec3(left.x - right.x, left.y - right.y, left.z - right.z);
    }

    Vec3 operator*(const Vec3& left, const Vec3& right) {
      return Vec3(left.x * right.x, left.y * right.y, left.z * right.z);
    }

    Vec3 operator*(const Vec3& left, double right) {
      return Vec3(left.x * right, left.y * right, left.z * right);
    }

    Vec3 operator/(const Vec3& left, const Vec3& right) {
      return Vec3(left.x / right.x, left.y / right.y, left.z / right.z);
    }

    std::ostream& operator<<(std::ostream& stream, const Vec3& v) {
      return stream << "[" << v.x << ", " << v.y << ", " << v.z << "]";
    }
  };

};
