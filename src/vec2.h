#ifndef __VECTOR2_H
#define __VECTOR2_H

#include "core.h"

namespace engine {

  namespace math {

    class Vec2 {

      friend std::ostream& operator<<(std::ostream& stream, const Vec2& v);
      friend Vec2 operator+(const Vec2& left, const Vec2& right);
      friend Vec2 operator-(const Vec2& left, const Vec2& right);
      friend Vec2 operator*(const Vec2& left, const Vec2& right);
      friend Vec2 operator*(const Vec2& left, double right);
      friend Vec2 operator/(const Vec2& left, const Vec2& right);

      public:
        double x, y;

        Vec2();
        Vec2(double x, double y);
        double magnitude() const;

        bool operator==(const Vec2& other) const;
        bool operator!=(const Vec2& other) const;
        bool operator>(const Vec2& other) const;
        bool operator<(const Vec2& other) const;
        bool operator>=(const Vec2& other) const;
        bool operator<=(const Vec2& other) const;
        Vec2& operator+=(const Vec2& other);
        Vec2& operator-=(const Vec2& other);
        Vec2& operator*=(const Vec2& other);
        Vec2& operator*=(double other);
        Vec2& operator/=(const Vec2& other);

    };

  };

};

#endif
