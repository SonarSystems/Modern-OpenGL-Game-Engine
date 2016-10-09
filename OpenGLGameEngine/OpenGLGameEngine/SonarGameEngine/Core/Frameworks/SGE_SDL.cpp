//
//  SGE_SDL.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "SGE_SDL.hpp"

#ifdef SGE__SDL

#include <iostream>

namespace SonarGameEngine
{
    SGE_SDL::SGE_SDL( )
    {
        
    }
    
    void SGE_SDL::Init( )
    {
        this->isOpen = true;
        
        int windowResizable = 0;
        
        if ( coreSettings->GetWindowResizable( ) )
        {
            windowResizable = SDL_WINDOW_RESIZABLE;
        }
        
        int windowFullscreen = 0;
        
        if ( coreSettings->GetWindowFullscreen( ) )
        {
            windowFullscreen = SDL_WINDOW_FULLSCREEN;
        }
        
        int multiSampleBuffer = 0;
        
        if ( coreSettings->GetAntiAliasing( ) > 0 )
        {
            multiSampleBuffer = 1;
        }
        
        GLint vsync = 0;
        
        if ( coreSettings->GetVSync( ) )
        {
            vsync = 1;
        }
        
        SDL_Init( SDL_INIT_EVERYTHING );
        
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );
        SDL_GL_SetAttribute( SDL_GL_STENCIL_SIZE, coreSettings->GetStencilSize( ) );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, coreSettings->GetOpenGLVersion( ).major );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, coreSettings->GetOpenGLVersion( ).minor );
        SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, coreSettings->GetDepthSize( ) );
        SDL_GL_SetAttribute( SDL_GL_MULTISAMPLEBUFFERS, multiSampleBuffer );
        SDL_GL_SetAttribute( SDL_GL_MULTISAMPLESAMPLES, coreSettings->GetAntiAliasing( ) );
        SDL_GL_SetSwapInterval( vsync );
        
        this->window = SDL_CreateWindow( coreSettings->GetWindowTitle( ).c_str( ), 0, 0, coreSettings->GetWindowWidth( ), coreSettings->GetWindowHeight( ), SDL_WINDOW_OPENGL | windowResizable | windowFullscreen );
        
        int actualWidth, actualHeight;
        
        SDL_GL_GetDrawableSize( window, &actualWidth, &actualHeight );
        
        coreSettings->SetScaledWindowWidth( actualWidth );
        coreSettings->SetScaledWindowHeight( actualHeight );
        
        this->context = SDL_GL_CreateContext( this->window );
    }
    
    void SGE_SDL::PollEvents( )
    {
        if ( SDL_PollEvent( &this->windowEvent ) )
        {
            if ( this->windowEvent.type == SDL_QUIT )
            {
                isOpen = false;
            }
        }        
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
    
    bool SGE_SDL::WindowIsOpen( ) const
    {
        return this->isOpen;
    }
    
    void SGE_SDL::CloseWindow( )
    {
        this->isOpen = false;
    }
}

#endif
