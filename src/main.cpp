#include "../engine.h"

using namespace engine;
using namespace engine::math;
using namespace engine::graphics;

int main(int argc, char* argv[]) {

  Mat4 position = Mat4::translation(Vec3(2, 3, 4));
  position.printComponents();
  position *= Mat4::identity();

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
