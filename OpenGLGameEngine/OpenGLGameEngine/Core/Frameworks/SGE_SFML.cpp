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
        sf::ContextSettings settings;
        settings.depthBits = coreSettings->GetDepthSize( );
        settings.stencilBits = coreSettings->GetStencilSize( );
        settings.majorVersion = coreSettings->GetOpenGLVersion( ).major;
        settings.minorVersion = coreSettings->GetOpenGLVersion( ).minor;
        settings.attributeFlags = sf::ContextSettings::Core;
        settings.antialiasingLevel = coreSettings->GetAntiAliasing( );
        
        int windowResizable(0);
        
        if ( coreSettings->GetWindowResizable( ) )
        {
            windowResizable = sf::Style::Resize;
        }
        
        this->window = new sf::Window(sf::VideoMode(coreSettings->GetWindowWidth(), coreSettings->GetWindowHeight(), 32), "SFML", sf::Style::Titlebar | sf::Style::Close | windowResizable, settings);
    }
    
    bool SGE_SFML::PollEvents( )
    {
        sf::Event windowEvent;
        
        while ( this->window->pollEvent( windowEvent ) )
        {
            switch ( windowEvent.type )
            {
                case sf::Event::Closed:
                    return false;
                    
                    break;
            }
        }
        
        return true;
    }
    
    void SGE_SFML::SwapBuffers( )
    {
        this->window->display( );
    }
    
    void SGE_SFML::CleanUp( )
    {
        this->window->close( );
    }
}

#endif
