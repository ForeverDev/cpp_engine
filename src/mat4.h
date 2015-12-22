#ifndef __MAT4_H
#define __MAT4_H

#include "engine.h"

namespace engine {

  namespace math {

    class Mat4 {

      friend Mat4 operator*(const Mat4& left, const Mat4& right);

      private:
        float elements[16];

      public:
        Mat4();

    };

  };

};

#endif
