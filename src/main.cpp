#include "engine.h"

using namespace engine;
using namespace engine::math;
using namespace engine::graphics;

int main(int argc, char* argv[]) {

  Vec2 v(5, 5);
  v *= 2;
  std::cout << v << std::endl;

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
