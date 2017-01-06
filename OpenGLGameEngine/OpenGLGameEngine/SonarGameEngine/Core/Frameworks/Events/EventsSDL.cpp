#include "EventsSDL.hpp"

#ifdef SGE__SDL

#include <iostream>

namespace SonarGameEngine
{
    EventsSDL::EventsSDL( )
    {
        this->keyTranslations.insert(std::pair<int, int>(SDLK_a, KEYS::A));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_b, KEYS::B));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_c, KEYS::C));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_d, KEYS::D));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_e, KEYS::E));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_f, KEYS::F));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_g, KEYS::G));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_h, KEYS::H));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_i, KEYS::I));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_j, KEYS::J));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_k, KEYS::K));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_l, KEYS::L));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_m, KEYS::M));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_n, KEYS::N));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_o, KEYS::O));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_p, KEYS::P));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_q, KEYS::Q));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_r, KEYS::R));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_s, KEYS::S));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_t, KEYS::T));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_u, KEYS::U));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_v, KEYS::V));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_w, KEYS::W));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_x, KEYS::X));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_y, KEYS::Y));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_z, KEYS::Z));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_0, KEYS::Num0));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_1, KEYS::Num1));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_2, KEYS::Num2));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_3, KEYS::Num3));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_4, KEYS::Num4));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_5, KEYS::Num5));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_6, KEYS::Num6));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_7, KEYS::Num7));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_8, KEYS::Num8));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_9, KEYS::Num9));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_ESCAPE, KEYS::Escape));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_LCTRL, KEYS::LControl));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_LSHIFT, KEYS::LShift));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_LALT, KEYS::LAlt));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_LGUI, KEYS::LSystem));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_RCTRL, KEYS::RControl));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_RSHIFT, KEYS::RShift));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_RALT, KEYS::RAlt));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_RGUI, KEYS::RSystem));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_MENU, KEYS::Menu));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_LEFTBRACKET, KEYS::LBracket));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_RIGHTBRACKET, KEYS::RBracket));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_SEMICOLON, KEYS::SemiColon));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_COMMA, KEYS::Comma));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_PERIOD, KEYS::Period));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_QUOTE, KEYS::Quote));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_SLASH, KEYS::Slash));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_BACKSLASH, KEYS::BackSlash));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_BACKQUOTE, KEYS::Tilde));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_EQUALS, KEYS::Equal));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_MINUS, KEYS::Dash));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_SPACE, KEYS::Space));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_RETURN, KEYS::Return));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_BACKSPACE, KEYS::BackSpace));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_TAB, KEYS::Tab));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_PAGEUP, KEYS::PageUp));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_PAGEDOWN, KEYS::PageDown));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_END, KEYS::End));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_HOME, KEYS::Home));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_INSERT, KEYS::Insert));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_DELETE, KEYS::Delete));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_PLUS, KEYS::Add));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_MINUS, KEYS::Subtract));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_MULTIPLY, KEYS::Multiply));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_DIVIDE, KEYS::Divide));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_4, KEYS::Left));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_6, KEYS::Right));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_8, KEYS::Up));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_2, KEYS::Down));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_0, KEYS::Numpad0));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_1, KEYS::Numpad1));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_2, KEYS::Numpad2));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_3, KEYS::Numpad3));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_4, KEYS::Numpad4));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_5, KEYS::Numpad5));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_6, KEYS::Numpad6));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_7, KEYS::Numpad7));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_8, KEYS::Numpad8));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_KP_9, KEYS::Numpad9));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F1, KEYS::F1));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F2, KEYS::F2));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F3, KEYS::F3));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F4, KEYS::F4));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F5, KEYS::F5));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F6, KEYS::F6));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F7, KEYS::F7));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F8, KEYS::F8));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F9, KEYS::F9));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F10, KEYS::F10));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F11, KEYS::F11));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F12, KEYS::F12));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F13, KEYS::F13));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F14, KEYS::F14));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_F15, KEYS::F15));
        this->keyTranslations.insert(std::pair<int, int>(SDLK_PAUSE, KEYS::Pause));
    }
}
#endif
