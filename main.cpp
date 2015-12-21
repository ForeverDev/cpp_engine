#include "window.h"

using namespace engine;
using namespace engine::graphics;

int main(int argc, char* argv[]) {

  Window window("Testing window", 800, 600);
  glClearColor(0.2, 0.3, 0.8, 1);

  while (window.isRunning()) {
    if (window.isKeyDown(GLFW_KEY_ESCAPE)) {
      window.quit();
    }
    window.clear();
    window.update();
  }

  return 0;
}
