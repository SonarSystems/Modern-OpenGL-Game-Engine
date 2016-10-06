//
//  SGE_SFML.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "SGE_SFML.hpp"

#ifdef SGE__SFML

#include <iostream>

namespace SonarGameEngine
{
    SGE_SFML::SGE_SFML( )
    {
        
    }
    
    void SGE_SFML::Init( )
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
        
        window->setVerticalSyncEnabled( coreSettings->GetVSync( ) );
    }
    
    void SGE_SFML::PollEvents( )
    {
        sf::Event windowEvent;
        
        while ( this->window->pollEvent( windowEvent ) )
        {
            switch ( windowEvent.type )
            {
                case sf::Event::Closed:
                    this->window->close( );
                    
                    break;
            }
        }
    }
    
    void SGE_SFML::SwapBuffers( )
    {
        this->window->display( );
    }
    
    void SGE_SFML::CleanUp( )
    {
        this->window->close( );
    }
    
    bool SGE_SFML::WindowIsOpen( )
    {
        if ( this->window->isOpen( ) == true )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    void SGE_SFML::CloseWindow( )
    {
        this->window->close( );
    }
}

#endif
