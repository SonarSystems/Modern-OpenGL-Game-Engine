//
//  FrameworkSFML.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "FrameworkSFML.hpp"

#ifdef SGE__SFML

#include <iostream>

namespace SonarGameEngine
{
    FrameworkSFML::FrameworkSFML( )
    {
        
    }
    
    void FrameworkSFML::Init( )
    {
        
        int windowResizable = 0;
        
        if ( coreSettings->GetWindowResizable( ) )
        {
            windowResizable = sf::Style::Resize;
        }
        
        int windowFullscreen = 0;
        
        if ( coreSettings->GetWindowFullscreen( ) )
        {
            windowFullscreen = sf::Style::Fullscreen;
        }
        
        sf::ContextSettings settings;
        settings.depthBits = coreSettings->GetDepthSize( );
        settings.stencilBits = coreSettings->GetStencilSize( );
        settings.majorVersion = coreSettings->GetOpenGLVersion( ).major;
        settings.minorVersion = coreSettings->GetOpenGLVersion( ).minor;
        settings.attributeFlags = sf::ContextSettings::Core;
        settings.antialiasingLevel = coreSettings->GetAntiAliasing( );
        
        this->window = new sf::Window(sf::VideoMode(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(), 32), coreSettings->GetWindowTitle( ).c_str( ), sf::Style::Titlebar | sf::Style::Close | windowResizable | windowFullscreen, settings);
        
        window->setVerticalSyncEnabled( coreSettings->GetVSync( ) == GL_TRUE );
    }
    
    void FrameworkSFML::PollEvents( )
    {
        sf::Event windowEvent;
        
        //sf::Event::TextEntered
        //std::cout << sf::Keyboard::LBracket << std::endl;
        
        
        
        
        while ( this->window->pollEvent( windowEvent ) )
        {
            switch ( windowEvent.type )
            {
                case sf::Event::Closed:
                    this->window->close( );
                    
                    break;
                    
                case sf::Event::KeyPressed:
                    this->coreEvents->SetKeyboardStatus( KEYSTATUS::KB_PRESSED );
                    this->coreEvents->SetKeyStatus( windowEvent.key.code, KEYSTATUS::KB_PRESSED );
                    
                    break;
                    
                case sf::Event::KeyReleased:
                    this->coreEvents->SetKeyboardStatus( KEYSTATUS::KB_RELEASED );
                    this->coreEvents->SetKeyStatus( windowEvent.key.code, KEYSTATUS::KB_RELEASED );
                    
                    break;
                    
                case sf::Event::MouseButtonPressed:
                    this->coreEvents->SetMouseButtonStatus( windowEvent.mouseButton.button, MOUSE_BUTTON_STATUS::MOUSEKEY_PRESSED );
                    
                    break;
                    
                case sf::Event::MouseButtonReleased:
                    this->coreEvents->SetMouseButtonStatus( windowEvent.mouseButton.button, MOUSE_BUTTON_STATUS::MOUSEKEY_RELEASED );
                    
                    break;
                    
                case sf::Event::MouseWheelMoved:
                    if ( windowEvent.mouseWheelScroll.wheel == sf::Mouse::HorizontalWheel )
                    {
                        //std::cout << "X scroll" << std::endl;
                        this->coreEvents->SetScrollOffset( windowEvent.mouseWheel.x, 0 );
                    }
                    else if ( windowEvent.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel )
                    {
                        //std::cout << "Y scroll" << std::endl;
                        //this->coreEvents->SetScrollOffset( 0, windowEvent.mouseWheel.delta );
                    }
                    
                    break;
            }
        }
    }
    
    void FrameworkSFML::SwapBuffers( )
    {
        this->window->display( );
    }
    
    void FrameworkSFML::CleanUp( )
    {
        this->window->close( );
    }
    
    bool FrameworkSFML::WindowIsOpen( ) const
    {
       return this->window->isOpen();
    }
    
    void FrameworkSFML::CloseWindow( )
    {
        this->window->close( );
    }
}

#endif
