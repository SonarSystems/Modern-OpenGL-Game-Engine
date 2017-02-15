//
//  FrameworkSDL.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "FrameworkSDL.hpp"

#ifdef SGE__SDL

#include <iostream>

namespace SonarGameEngine
{
    FrameworkSDL::FrameworkSDL( )
    {
        
    }
    
    void FrameworkSDL::Init( )
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
        
        startingTime = 0;
        
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );
        SDL_GL_SetAttribute( SDL_GL_STENCIL_SIZE, coreSettings->GetStencilSize( ) );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, coreSettings->GetOpenGLVersion( ).major );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, coreSettings->GetOpenGLVersion( ).minor );
        SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, coreSettings->GetDepthSize( ) );
        SDL_GL_SetAttribute( SDL_GL_MULTISAMPLEBUFFERS, multiSampleBuffer );
        SDL_GL_SetAttribute( SDL_GL_MULTISAMPLESAMPLES, coreSettings->GetAntiAliasing( ) );
        SDL_GL_SetSwapInterval( vsync );
        
        this->window = SDL_CreateWindow( coreSettings->GetWindowTitle( ).c_str( ), 0, 0, coreSettings->GetWindowWidth( ), coreSettings->GetWindowHeight( ), SDL_WINDOW_ALLOW_HIGHDPI | windowResizable | windowFullscreen );
        
        int actualWidth, actualHeight;
        
        SDL_GL_GetDrawableSize( window, &actualWidth, &actualHeight );
        
        coreSettings->SetScaledWindowWidth( actualWidth );
        coreSettings->SetScaledWindowHeight( actualHeight );
        
        this->context = SDL_GL_CreateContext( this->window );
    }
    
    void FrameworkSDL::PollEvents( )
    {
        if ( coreEvents->IsExplicitlySettingTime( ) )
        {
            startingTime = coreEvents->GetExplicitTime( );
            coreEvents->StopSettingTime( );
        }
        else
        {
            coreEvents->SetCumulativeTime( SDL_GetTicks( ) );
            coreEvents->SetTime( SDL_GetTicks( ) - startingTime );
        }
        
        if ( SDL_PollEvent( &this->windowEvent ) )
        {
            int x = 0, y = 0;
            
            switch( windowEvent.type )
            {
                    /* Keyboard event */
                    /* Pass the event data onto PrintKeyInfo() */
                case SDL_KEYDOWN:
                    this->coreEvents->SetKeyboardStatus( KEYSTATUS::KB_PRESSED );
                    this->coreEvents->SetKeyStatus( SDL_GetKeyFromScancode( windowEvent.key.keysym.scancode ), KEYSTATUS::KB_PRESSED );

                    break;
                    
                case SDL_KEYUP:
                    this->coreEvents->SetKeyboardStatus( KEYSTATUS::KB_PRESSED );
                    this->coreEvents->SetKeyStatus( SDL_GetKeyFromScancode( windowEvent.key.keysym.scancode ), KEYSTATUS::KB_PRESSED );
                    
                    break;
                    
                case SDL_MOUSEBUTTONDOWN:
                    SDL_GetMouseState( &x, &y );
                    this->coreEvents->SetMousePosition( x, y );
                    this->coreEvents->SetMouseButtonStatus( windowEvent.button.button, MOUSE_BUTTON_STATUS::MOUSEKEY_PRESSED );
                    
                    break;
                    
                case SDL_MOUSEBUTTONUP:
                    SDL_GetMouseState( &x, &y );
                    this->coreEvents->SetMousePosition( x, y );
                    this->coreEvents->SetMouseButtonStatus( windowEvent.button.button, MOUSE_BUTTON_STATUS::MOUSEKEY_RELEASED );
                    
                    break;
                    
                case SDL_MOUSEWHEEL:
                    SDL_GetMouseState( &x, &y );
                    this->coreEvents->SetMousePosition( x, y );
                    this->coreEvents->SetScrollOffset( windowEvent.wheel.x, windowEvent.wheel.y );
                    
                    break;
                    
                case SDL_MOUSEMOTION:
                    SDL_GetMouseState( &x, &y );
                    this->coreEvents->SetMousePosition( x, y );
                    
                    break;
                    
                case SDL_WINDOWEVENT:
                    switch ( windowEvent.window.event )
                    {
                    case SDL_WINDOWEVENT_ENTER:
                        this->coreEvents->SetMouseCursorInWindow( true );
                        
                        break;
                        
                    case SDL_WINDOWEVENT_LEAVE:
                        this->coreEvents->SetMouseCursorInWindow( false );
                        
                        break;
                    }
                    
                    break;
                    
                    /* SDL_QUIT event (window close) */
                case SDL_QUIT:
                    this->isOpen = false;
                    
                    break;
                    
                default:
                    break;
            }
        }        
    }
    
    void FrameworkSDL::SwapBuffers( )
    {
        SDL_GL_SwapWindow( this->window );
    }
    
    void FrameworkSDL::CleanUp( )
    {
        SDL_GL_DeleteContext( this->context );
        SDL_DestroyWindow( this->window );
        SDL_Quit( );
    }
    
    bool FrameworkSDL::WindowIsOpen( ) const
    {
        return this->isOpen;
    }
    
    void FrameworkSDL::CloseWindow( )
    {
        this->isOpen = false;
    }
}

#endif
