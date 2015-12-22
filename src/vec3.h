#ifndef __VECTOR3_H
#define __VECTOR3_H

#include "core.h"

namespace engine {

  namespace math {

    class Vec3 {

      friend std::ostream& operator<<(std::ostream& stream, const Vec3& v);
      friend Vec3 operator+(const Vec3& left, const Vec3& right);
      friend Vec3 operator-(const Vec3& left, const Vec3& right);
      friend Vec3 operator*(const Vec3& left, const Vec3& right);
      friend Vec3 operator*(const Vec3& left, double right);
      friend Vec3 operator/(const Vec3& left, const Vec3& right);

      public:
        double x, y, z;

        Vec3();
        Vec3(double x, double y, double z);
        double magnitude() const;

        bool operator==(const Vec3& other) const;
        bool operator!=(const Vec3& other) const;
        bool operator>(const Vec3& other) const;
        bool operator<(const Vec3& other) const;
        bool operator>=(const Vec3& other) const;
        bool operator<=(const Vec3& other) const;
        Vec3& operator+=(const Vec3& other);
        Vec3& operator-=(const Vec3& other);
        Vec3& operator*=(const Vec3& other);
        Vec3& operator*=(double other);
        Vec3& operator/=(const Vec3& other);

    };

  };

};

#endif
