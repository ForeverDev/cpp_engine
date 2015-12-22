#include "mat4.h"

namespace engine {

  namespace math {

    Mat4::Mat4() {

      std::memset(elements, 0, sizeof(elements));

    }

  };

};
