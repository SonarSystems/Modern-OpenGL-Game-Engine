//
//  SGE_SDL.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "SGE_SDL.hpp"

namespace SonarGameEngine
{
    SGE_SDL::SGE_SDL( )
    {
        
    }
    
    void SGE_SDL::Init( )
    {
        SDL_Init( SDL_INIT_EVERYTHING );
        
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 3 );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 3 );
        SDL_GL_SetAttribute( SDL_GL_STENCIL_SIZE, 8 );
        
        this->window = SDL_CreateWindow( "SDL", 0, 0, 800, 640, SDL_WINDOW_OPENGL );
        
        this->context = SDL_GL_CreateContext( window );
    }
    
    bool SGE_SDL::PollEvents( )
    {
        if ( SDL_PollEvent( &this->windowEvent ) )
        {
            if ( this->windowEvent.type == SDL_QUIT )
            {
                return false;
            }
        }
        
        return true;
    }
    
    void SGE_SDL::SwapBuffers( )
    {
        SDL_GL_SwapWindow( this->window );
    }
    
    void SGE_SDL::CleanUp( )
    {
        SDL_GL_DeleteContext( this->context );
        SDL_DestroyWindow( this->window );
        SDL_Quit( );
    }
}
