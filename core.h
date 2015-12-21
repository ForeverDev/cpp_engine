#ifndef __CORE_H
#define __CORE_H

#include <iostream>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#define CORE_DEBUG                  1
#define CORE_ONLY_LOG_WHEN_DEBUG    1
#define CORE_MAX_BUTTONS            32
#define CORE_MAX_KEYS               1024

template <typename T> inline void LOG(const T& message) {
  if (CORE_ONLY_LOG_WHEN_DEBUG && !CORE_DEBUG) {
    return;
  }
  std::cout << message << std::endl;
}


#endif
