//
//  SGE_SFML.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "DEFINITIONS.hpp"

#ifdef SGE__SFML

#include "FrameworkInterface.h"

#include <SFML/window.hpp>

namespace SonarGameEngine
{
    class SGE_SFML: public FrameworkInterface
    {
    public:
        SGE_SFML( );
        
        void Init( ) override;
                
        void PollEvents( ) override;
        
        void SwapBuffers( ) override;
        
        void CleanUp( ) override;
        
        bool WindowIsOpen( ) override;
        
        void CloseWindow( ) override;
        
    private:
        sf::Window *window;
    };
}

#endif
