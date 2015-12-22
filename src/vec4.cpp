#include "vec4.h"

namespace engine {

  namespace math {

    /*
    Vec4::Vec4() {
      x = 0;
      y = 0;
      z = 0;
      w = 0;
    }
    */

    Vec4::Vec4(double x, double y, double z, double w) {
      this->x = x;
      this->y = y;
      this->z = z;
      this->w = w;
    }

    double Vec4::magnitude() const {
      return sqrt(x*x + y*y + z*z + w*w);
    }

    // operators

    bool Vec4::operator==(const Vec4& other) const {
      return x == other.x && y == other.y && z == other.z && w == other.w;
    }

    bool Vec4::operator!=(const Vec4& other) const {
      return !(x == other.x && y == other.y && z == other.z && w == other.w);
    }

    bool Vec4::operator>(const Vec4& other) const {
      return magnitude() > other.magnitude();
    }

    bool Vec4::operator>=(const Vec4& other) const {
      return magnitude() >= other.magnitude();
    }

    bool Vec4::operator<(const Vec4& other) const {
      return magnitude() < other.magnitude();
    }

    bool Vec4::operator<=(const Vec4& other) const {
      return magnitude() <= other.magnitude();
    }

    Vec4& Vec4::operator+=(const Vec4& other) {
      *this = *this + other;
      return *this;
    }

    Vec4& Vec4::operator-=(const Vec4& other) {
      *this = *this - other;
      return *this;
    }

    Vec4& Vec4::operator*=(const Vec4& other) {
      *this = *this * other;
      return *this;
    }

    Vec4& Vec4::operator*=(double other) {
      *this = *this * other;
      return *this;
    }

    Vec4& Vec4::operator/=(const Vec4& other) {
      *this = *this / other;
      return *this;
    }

    // friend operators

    Vec4 operator+(const Vec4& left, const Vec4& right) {
      return Vec4(left.x + right.x, left.y + right.y, left.z + right.z, left.w + right.w);
    }

    Vec4 operator-(const Vec4& left, const Vec4& right) {
      return Vec4(left.x - right.x, left.y - right.y, left.z - right.z, left.w - right.w);
    }

    Vec4 operator*(const Vec4& left, const Vec4& right) {
      return Vec4(left.x * right.x, left.y * right.y, left.z * right.z, left.w * right.w);
    }

    Vec4 operator*(const Vec4& left, double right) {
      return Vec4(left.x * right, left.y * right, left.z * right, left.w * right);
    }

    Vec4 operator/(const Vec4& left, const Vec4& right) {
      return Vec4(left.x / right.x, left.y / right.y, left.z / right.z, left.w / right.w);
    }

    std::ostream& operator<<(std::ostream& stream, const Vec4& v) {
      return stream << "[" << v.x << ", " << v.y << ", " << v.z << ", " << v.w << "]";
    }
  };

};
