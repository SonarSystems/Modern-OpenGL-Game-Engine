//
//  SGE_SDL.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "DEFINITIONS.hpp"

#ifdef SGE__SDL

#include "FrameworkInterface.hpp"

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

namespace SonarGameEngine
{
    class SGE_SDL: public FrameworkInterface
    {
    public:
        SGE_SDL( );
        
        void Init( ) override;
                
        void PollEvents( ) override;
        
        void SwapBuffers( ) override;
        
        void CleanUp( ) override;
        
        bool WindowIsOpen( ) const override;
        
        void CloseWindow( ) override;
        
    private:
        SDL_Window *window;
        SDL_GLContext context;
        SDL_Event windowEvent;
        
        bool isOpen;
    };
}

#endif
