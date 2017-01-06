#include "EventsSFML.hpp"

#ifdef SGE__SFML

#include <iostream>

namespace SonarGameEngine
{
    EventsSFML::EventsSFML( )
    {
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::A, KEYS::A));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::A, KEYS::A));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::B, KEYS::B));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::C, KEYS::C));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::D, KEYS::D));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::E, KEYS::E));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F, KEYS::F));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::G, KEYS::G));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::H, KEYS::H));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::I, KEYS::I));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::J, KEYS::J));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::K, KEYS::K));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::L, KEYS::L));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::M, KEYS::M));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::N, KEYS::N));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::O, KEYS::O));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::P, KEYS::P));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Q, KEYS::Q));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::R, KEYS::R));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::S, KEYS::S));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::T, KEYS::T));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::U, KEYS::U));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::V, KEYS::V));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::W, KEYS::W));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::X, KEYS::X));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Y, KEYS::Y));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Z, KEYS::Z));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num0, KEYS::Num0));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num1, KEYS::Num1));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num2, KEYS::Num2));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num3, KEYS::Num3));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num4, KEYS::Num4));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num5, KEYS::Num5));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num6, KEYS::Num6));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num7, KEYS::Num7));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num8, KEYS::Num8));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Num9, KEYS::Num9));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Escape, KEYS::Escape));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::LControl, KEYS::LControl));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::LShift, KEYS::LShift));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::LAlt, KEYS::LAlt));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::LSystem, KEYS::LSystem));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::RControl, KEYS::RControl));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::RShift, KEYS::RShift));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::RAlt, KEYS::RAlt));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::RSystem, KEYS::RSystem));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Menu, KEYS::Menu));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::LBracket, KEYS::LBracket));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::RBracket, KEYS::RBracket));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::SemiColon, KEYS::SemiColon));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Comma, KEYS::Comma));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Period, KEYS::Period));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Quote, KEYS::Quote));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Slash, KEYS::Slash));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::BackSlash, KEYS::BackSlash));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Tilde, KEYS::Tilde));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Equal, KEYS::Equal));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Dash, KEYS::Dash));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Space, KEYS::Space));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Return, KEYS::Return));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::BackSpace, KEYS::BackSpace));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Tab, KEYS::Tab));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::PageUp, KEYS::PageUp));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::PageDown, KEYS::PageDown));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::End, KEYS::End));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Home, KEYS::Home));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Insert, KEYS::Insert));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Delete, KEYS::Delete));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Add, KEYS::Add));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Subtract, KEYS::Subtract));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Multiply, KEYS::Multiply));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Divide, KEYS::Divide));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Left, KEYS::Left));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Right, KEYS::Right));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Up, KEYS::Up));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Down, KEYS::Down));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad0, KEYS::Numpad0));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad1, KEYS::Numpad1));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad2, KEYS::Numpad2));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad3, KEYS::Numpad3));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad4, KEYS::Numpad4));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad5, KEYS::Numpad5));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad6, KEYS::Numpad6));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad7, KEYS::Numpad7));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad8, KEYS::Numpad8));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Numpad9, KEYS::Numpad9));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F1, KEYS::F1));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F2, KEYS::F2));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F3, KEYS::F3));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F4, KEYS::F4));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F5, KEYS::F5));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F6, KEYS::F6));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F7, KEYS::F7));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F8, KEYS::F8));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F9, KEYS::F9));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F10, KEYS::F10));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F11, KEYS::F11));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F12, KEYS::F12));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F13, KEYS::F13));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F14, KEYS::F14));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::F15, KEYS::F15));
        this->keyTranslations.insert(std::pair<int, int>(sf::Keyboard::Pause, KEYS::Pause));
        
        
        
    }
}
#endif
