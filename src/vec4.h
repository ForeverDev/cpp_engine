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
      friend Vec4 operator*(const Vec4& left, float right);
      friend Vec4 operator/(const Vec4& left, const Vec4& right);

      public:
        float x, y, z, w;

        Vec4() = default;
        Vec4(float x, float y, float z, float w);
        float magnitude() const;

        bool operator==(const Vec4& other) const;
        bool operator!=(const Vec4& other) const;
        bool operator>(const Vec4& other) const;
        bool operator<(const Vec4& other) const;
        bool operator>=(const Vec4& other) const;
        bool operator<=(const Vec4& other) const;
        Vec4& operator+=(const Vec4& other);
        Vec4& operator-=(const Vec4& other);
        Vec4& operator*=(const Vec4& other);
        Vec4& operator*=(float other);
        Vec4& operator/=(const Vec4& other);

    };

  };

};

#endif
