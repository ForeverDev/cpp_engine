#ifndef __CORE_H
#define __CORE_H

// define constants
#define ENGINE_DEBUG                  1
#define ENGINE_ONLY_LOG_WHEN_DEBUG    1
#define ENGINE_MAX_BUTTONS            32
#define ENGINE_MAX_KEYS               1024

#include <iostream>
#include <math.h>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

// define helper functions
template <typename T> inline void LOG(const T& message) {
  if (ENGINE_ONLY_LOG_WHEN_DEBUG && !ENGINE_DEBUG) {
    return;
  }
  std::cout << message << std::endl;
}

template <typename T> inline T rad(T degrees) {
  return degrees * (M_PI / 180);
}

template <typename T> inline T deg(T radians) {
  return radians * (180 / M_PI);
}

#endif
