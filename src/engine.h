#ifndef __ENGINE_H
#define __ENGINE_H

// define constants
#define ENGINE_DEBUG                  1
#define ENGINE_ONLY_LOG_WHEN_DEBUG    1
#define ENGINE_MAX_BUTTONS            32
#define ENGINE_MAX_KEYS               1024

// include libraries
#include <iostream>
#include <cstring>
#include <math.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include "mat4.h"
#include "vec2.h"
#include "window.h"

// define helper functions
template <typename T> inline void LOG(const T& message) {
  if (ENGINE_ONLY_LOG_WHEN_DEBUG && !ENGINE_DEBUG) {
    return;
  }
  std::cout << message << std::endl;
}

template <typename T> inline void rad(T degrees) {
  return degrees * (M_PI / 180);
}

template <typename T> inline void deg(T radians) {
  return radians * (180 / M_PI);
}

#endif
