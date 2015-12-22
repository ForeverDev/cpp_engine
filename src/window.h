#ifndef __WINDOW_H
#define __WINDOW_H

#include "core.h"

namespace engine {

  namespace graphics {

    class Window {

      private:
        const char* m_title;
        int m_width;
        int m_height;
        int m_running;
        GLFWwindow* m_window;

        bool m_buttons_down[ENGINE_MAX_BUTTONS];
        bool m_keys_down[ENGINE_MAX_KEYS];
        double mouse_x;
        double mouse_y;
      private:
        bool init();

        static void onKeyEvent(GLFWwindow* window, int key, int scancode, int action, int mods);
        static void onMouseButtonEvent(GLFWwindow* window, int button, int action, int mods);
        static void onMouseMoveEvent(GLFWwindow* window, double mx, double my);
        static void onResizeEvent(GLFWwindow* window, int width, int height);

        static inline Window* getWindowFromUser(GLFWwindow* window) { return static_cast<Window*>(glfwGetWindowUserPointer(window)); }
      public:

      public:
        Window(const char* name, int width, int height);
        ~Window();
        void clear() const;
        void quit();
        void update();

        bool isKeyDown(unsigned int keycode) const;
        bool isMouseButtonDown(unsigned int keycode) const;

        inline bool isRunning() const { return m_running; }
        inline int getWidth() const { return m_width; }
        inline int getHeight() const { return m_height; }
        inline double getMouseX() const { return mouse_x; }
        inline double getMouseY() const { return mouse_y; }

    };

  };

};

#endif
