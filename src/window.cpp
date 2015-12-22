#include "window.h"

namespace engine {

  namespace graphics {

    Window::Window(const char* title, int width, int height) {
      m_title = title;
      m_width = width;
      m_height = height;
      m_running = true;
      for (int i = 0; i < ENGINE_MAX_KEYS; i++) {
        m_keys_down[i] = false;
      }
      for (int i = 0; i < ENGINE_MAX_BUTTONS; i++) {
        m_buttons_down[i] = false;
      }
      if (!init()) {
        quit();
      }
    }

    Window::~Window() {
      quit();
    }

    void Window::quit() {
      m_running = false;
      glfwTerminate();
    }

    void Window::clear() const {
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    }

    void Window::update() {
      glfwSwapBuffers(m_window);
      glfwGetFramebufferSize(m_window, &m_width, &m_height);
      glViewport(0, 0, m_width, m_height);
      glfwPollEvents();
    }

    bool Window::isKeyDown(unsigned int keycode) const {
      if (keycode >= ENGINE_MAX_KEYS) {
        return false;
      }
      return m_keys_down[keycode];
    }

    bool Window::isMouseButtonDown(unsigned int keycode) const {
      if (keycode >= ENGINE_MAX_BUTTONS) {
        return false;
      }
      return m_buttons_down[keycode];
    }

    // private methods

    void Window::onKeyEvent(GLFWwindow* window, int key, int scancode, int action, int mods) {
      Window* win = getWindowFromUser(window);
      win->m_keys_down[key] = (action != GLFW_RELEASE);
    }

    void Window::onMouseButtonEvent(GLFWwindow* window, int button, int action, int mods) {
      Window* win = getWindowFromUser(window);
      win->m_buttons_down[button] = (action != GLFW_RELEASE);
    }

    void Window::onMouseMoveEvent(GLFWwindow* window, double mx, double my) {
      Window* win = getWindowFromUser(window);
      win->mouse_x = mx;
      win->mouse_y = my;
    }

    void Window::onResizeEvent(GLFWwindow* window, int width, int height) {
      glViewport(0, 0, width, height);
    }

    bool Window::init() {
      if (!glfwInit()) {
        LOG("error initializing GLFW\n");
        return false;
      }
      m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
      if (!m_window) {
        glfwTerminate();
        LOG("failed to create GLFW window\n");
        return false;
      }
      glfwMakeContextCurrent(m_window);
      glfwSetWindowUserPointer(m_window, this);
      glfwSetWindowSizeCallback(m_window, onResizeEvent);
      glfwSetKeyCallback(m_window, onKeyEvent);
      glfwSetMouseButtonCallback(m_window, onMouseButtonEvent);
      glfwSetCursorPosCallback(m_window, onMouseMoveEvent);
      return true;
    }


  }

};

