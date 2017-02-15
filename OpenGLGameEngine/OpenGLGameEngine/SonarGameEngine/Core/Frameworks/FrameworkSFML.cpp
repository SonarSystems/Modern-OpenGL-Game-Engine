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
    int delta = 0;
    
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
        
        window->setMouseCursorVisible( coreSettings->GetMouseCursorVisibility( ) );
    }
    
    void FrameworkSFML::PollEvents( )
    {
        sf::Event windowEvent;
        
        if ( coreEvents->IsExplicitlySettingTime( ) )
        {
            startingTime = coreEvents->GetExplicitTime( );
            coreEvents->StopSettingTime( );
        }
        else
        {
            coreEvents->SetCumulativeTime( clock.getElapsedTime( ).asMilliseconds( ) );
            coreEvents->SetTime( clock.getElapsedTime( ).asMilliseconds( ) - startingTime );
        }
        
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
                    this->coreEvents->SetScrollOffset( 0, windowEvent.mouseWheel.delta );
                    
                    break;
                    
                case sf::Event::MouseMoved:
                    this->coreEvents->SetMousePosition( windowEvent.mouseMove.x, windowEvent.mouseMove.y );
                    
                    break;
                    
                case sf::Event::MouseEntered:
                    this->coreEvents->SetMouseCursorInWindow( true );
                    
                    break;
                    
                case sf::Event::MouseLeft:
                    this->coreEvents->SetMouseCursorInWindow( false );
                    
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
