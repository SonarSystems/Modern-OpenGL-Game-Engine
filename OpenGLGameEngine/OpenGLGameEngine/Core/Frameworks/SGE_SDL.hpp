//
//  SGE_SDL.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "DEFINITIONS.h"

#ifdef SGE__SDL

#include "FrameworkInterface.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

namespace SonarGameEngine
{
    class SGE_SDL: public FrameworkInterface
    {
    public:
        SGE_SDL( );
        
        void Init( ) override;
                
        bool PollEvents( ) override;
        
        void SwapBuffers( ) override;
        
        void CleanUp( ) override;
        
    private:
        SDL_Window *window;
        SDL_GLContext context;
        SDL_Event windowEvent;
    };
}

#endif
