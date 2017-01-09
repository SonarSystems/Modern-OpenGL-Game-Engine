#include "EventsGLFW.hpp"

#ifdef SGE__GLFW

#include <iostream>

namespace SonarGameEngine
{
    EventsGLFW::EventsGLFW( )
    {
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_A, KEYS::A));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_B, KEYS::B));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_C, KEYS::C));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_D, KEYS::D));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_E, KEYS::E));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F, KEYS::F));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_G, KEYS::G));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_H, KEYS::H));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_I, KEYS::I));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_J, KEYS::J));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_K, KEYS::K));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_L, KEYS::L));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_M, KEYS::M));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_N, KEYS::N));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_O, KEYS::O));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_P, KEYS::P));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_Q, KEYS::Q));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_R, KEYS::R));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_S, KEYS::S));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_T, KEYS::T));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_U, KEYS::U));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_V, KEYS::V));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_W, KEYS::W));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_X, KEYS::X));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_Y, KEYS::Y));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_Z, KEYS::Z));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_0, KEYS::Num0));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_1, KEYS::Num1));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_2, KEYS::Num2));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_3, KEYS::Num3));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_4, KEYS::Num4));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_5, KEYS::Num5));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_6, KEYS::Num6));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_7, KEYS::Num7));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_8, KEYS::Num8));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_9, KEYS::Num9));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_ESCAPE, KEYS::Escape));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_LEFT_CONTROL, KEYS::LControl));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_LEFT_SHIFT, KEYS::LShift));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_LEFT_ALT, KEYS::LAlt));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_LEFT_SUPER, KEYS::LSystem));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_RIGHT_CONTROL, KEYS::RControl));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_RIGHT_SHIFT, KEYS::RShift));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_RIGHT_ALT, KEYS::RAlt));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_RIGHT_SUPER, KEYS::RSystem));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_MENU, KEYS::Menu));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_LEFT_BRACKET, KEYS::LBracket));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_RIGHT_BRACKET, KEYS::RBracket));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_SEMICOLON, KEYS::SemiColon));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_COMMA, KEYS::Comma));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_PERIOD, KEYS::Period));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_APOSTROPHE, KEYS::Quote));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_SLASH, KEYS::Slash));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_BACKSLASH, KEYS::BackSlash));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_WORLD_1, KEYS::Tilde));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_EQUAL, KEYS::Equal));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_MINUS, KEYS::Dash));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_SPACE, KEYS::Space));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_ENTER, KEYS::Return));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_BACKSPACE, KEYS::BackSpace));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_TAB, KEYS::Tab));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_PAGE_UP, KEYS::PageUp));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_PAGE_DOWN, KEYS::PageDown));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_END, KEYS::End));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_HOME, KEYS::Home));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_INSERT, KEYS::Insert));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_DELETE, KEYS::Delete));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_ADD, KEYS::Add));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_SUBTRACT, KEYS::Subtract));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_MULTIPLY, KEYS::Multiply));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_DIVIDE, KEYS::Divide));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_LEFT, KEYS::Left));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_RIGHT, KEYS::Right));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_UP, KEYS::Up));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_DOWN, KEYS::Down));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_0, KEYS::Numpad0));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_1, KEYS::Numpad1));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_2, KEYS::Numpad2));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_3, KEYS::Numpad3));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_4, KEYS::Numpad4));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_5, KEYS::Numpad5));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_6, KEYS::Numpad6));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_7, KEYS::Numpad7));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_8, KEYS::Numpad8));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_KP_9, KEYS::Numpad9));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F1, KEYS::F1));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F2, KEYS::F2));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F3, KEYS::F3));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F4, KEYS::F4));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F5, KEYS::F5));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F6, KEYS::F6));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F7, KEYS::F7));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F8, KEYS::F8));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F9, KEYS::F9));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F10, KEYS::F10));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F11, KEYS::F11));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F12, KEYS::F12));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F13, KEYS::F13));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F14, KEYS::F14));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_F15, KEYS::F15));
        this->keyTranslations.insert(std::pair<int, int>(GLFW_KEY_PAUSE, KEYS::Pause));
        
     //   glfwSetKeyCallback( this->window, FrameworkGLFW::KeyCallback );
       
       // glfwSetWindowCloseCallback( this->window, cbfun );
    }
    
    void EventsGLFW::KeyCallback( GLFWwindow *window, int key, int scancode, int action, int mods )
    {
       // if (key == GLFW_KEY_E && action == GLFW_PRESS)
     //       activate_airship();
    }
}
#endif
