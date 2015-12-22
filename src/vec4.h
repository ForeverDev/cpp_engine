#ifndef __VECTOR4_H
#define __VECTOR4_H

#include "core.h"

namespace engine {

  namespace math {

    class Vec4 {

      friend std::ostream& operator<<(std::ostream& stream, const Vec4& v);
      friend Vec4 operator+(const Vec4& left, const Vec4& right);
      friend Vec4 operator-(const Vec4& left, const Vec4& right);
      friend Vec4 operator*(const Vec4& left, const Vec4& right);
      friend Vec4 operator*(const Vec4& left, double right);
      friend Vec4 operator/(const Vec4& left, const Vec4& right);

      public:
        double x, y, z, w;

        Vec4() = default;
        Vec4(double x, double y, double z, double w);
        double magnitude() const;

        bool operator==(const Vec4& other) const;
        bool operator!=(const Vec4& other) const;
        bool operator>(const Vec4& other) const;
        bool operator<(const Vec4& other) const;
        bool operator>=(const Vec4& other) const;
        bool operator<=(const Vec4& other) const;
        Vec4& operator+=(const Vec4& other);
        Vec4& operator-=(const Vec4& other);
        Vec4& operator*=(const Vec4& other);
        Vec4& operator*=(double other);
        Vec4& operator/=(const Vec4& other);

    };

  };

};

#endif
