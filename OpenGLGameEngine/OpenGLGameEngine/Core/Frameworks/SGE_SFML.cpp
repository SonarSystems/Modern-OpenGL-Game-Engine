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
        settings.depthBits = 24;
        settings.stencilBits = 8;
        settings.majorVersion = 3;
        settings.minorVersion = 3;
        settings.attributeFlags = sf::ContextSettings::Core;
        
        this->window = new sf::Window::Window( sf::VideoMode( this->GetWindowSize( )[0], this->GetWindowSize( )[1], 32 ), "SFML", sf::Style::Titlebar | sf::Style::Close, settings );        
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
