#ifndef __MAT4_H
#define __MAT4_H

#include "core.h"
#include "vec3.h"
#include "vec4.h"

namespace engine {

  namespace math {

    class Mat4 {

      friend Mat4 operator*(const Mat4& left, const Mat4& right);

      public:
        union {
          float elements[16];
          struct {
            Vec4 cols[4];
          };
        };

        Mat4();
        Mat4(float diagonal);
        void printComponents();

        static Mat4 identity();
        static Mat4 orthographic(float left, float right, float bottom, float top, float near, float far);
        static Mat4 perspective(float fov, float aspect_ratio, float near, float far);
        static Mat4 translation(const Vec3& translation);
        static Mat4 rotation(float angle, const Vec3& axis);
        static Mat4 scale(const Vec3& scale);

        Mat4& multiply(const Mat4& other);
        Mat4& operator*=(const Mat4& other);

    };

  };

};

#endif
