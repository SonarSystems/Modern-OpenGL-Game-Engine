//
//  CoreEngine.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 17/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "CoreEngine.hpp"

#include <iostream>

const GLint WIDTH = 800, HEIGHT = 600;

namespace SonarGameEngine
{
    CoreEngine::CoreEngine( )
    {
        
    }
    
    bool CoreEngine::Init( )
    {
#ifdef SGE__SDL
        SDL_Init( SDL_INIT_EVERYTHING );
        
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MAJOR_VERSION, 3 );
        SDL_GL_SetAttribute( SDL_GL_CONTEXT_MINOR_VERSION, 3 );
        SDL_GL_SetAttribute( SDL_GL_STENCIL_SIZE, 8 );
        
        this->window = SDL_CreateWindow( "OpenGL", 0, 0, WIDTH, HEIGHT, SDL_WINDOW_OPENGL );
        
        this->context = SDL_GL_CreateContext( window );
#elif defined(SGE__SFML)
        sf::ContextSettings settings;
        settings.depthBits = 24;
        settings.stencilBits = 8;
        settings.majorVersion = 3;
        settings.minorVersion = 3;
        settings.attributeFlags = sf::ContextSettings::Core;
        
        window = sf::Window( sf::VideoMode( WIDTH, HEIGHT, 32 ), "OpenGL SFML", sf::Style::Titlebar | sf::Style::Close, settings );
#elif defined(SGE__GLFW)
        // Init GLFW
        glfwInit( );
        
        // Set all the required options for GLFW
        glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 3 );
        glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 3 );
        glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );
        glfwWindowHint( GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE );
        glfwWindowHint( GLFW_RESIZABLE, GL_FALSE );
        
        // Create a GLFWwindow object that we can use for GLFW's functions
        this->window = glfwCreateWindow( WIDTH, HEIGHT, "LearnOpenGL", nullptr, nullptr );
        
        int screenWidth, screenHeight;
        glfwGetFramebufferSize( window, &screenWidth, &screenHeight );
        
        if ( nullptr == window )
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate( );
            
            return EXIT_FAILURE;
        }
        
        glfwMakeContextCurrent( window );
#endif
        
        // Set this to true so GLEW knows to use a modern approach to retrieving function pointers and extensions
        glewExperimental = GL_TRUE;
        // Initialize GLEW to setup the OpenGL Function pointers
        if ( GLEW_OK != glewInit( ) )
        {
            std::cout << "Failed to initialize GLEW" << std::endl;
            return EXIT_FAILURE;
        }
        
        // Define the viewport dimensions
        glViewport( 0, 0, WIDTH, HEIGHT );
        
        return true;
    }
    
    bool CoreEngine::GameLoop( )
    {
#ifdef SGE__SDL
        if ( SDL_PollEvent( &this->windowEvent ) )
        {
            if ( this->windowEvent.type == SDL_QUIT ) false;
        }
#elif defined(SGE__SFML)
        sf::Event windowEvent;
        
        while ( this->window.pollEvent( windowEvent ) )
        {
            switch ( windowEvent.type )
            {
                case sf::Event::Closed:
                    return false;
                    
                    break;
            }
        }
#elif defined(SGE__GLFW)
        glfwPollEvents( );
#endif
        
        // Clear the colorbuffer
        glClearColor( 0.2f, 0.3f, 0.3f, 1.0f );
        glClear( GL_COLOR_BUFFER_BIT );
        
        // draw OpenGL
#ifdef SGE__SDL
        SDL_GL_SwapWindow( this->window );
#elif defined(SGE__SFML)
        this->window.display( );
#elif defined(SGE__GLFW)
        glfwSwapBuffers( this->window );
#endif
        
        return true;
    }
    
    void CoreEngine::CleanUp( )
    {
#ifdef SGE__SDL
        SDL_GL_DeleteContext( this->context );
        SDL_DestroyWindow( this->window );
        SDL_Quit( );
#elif defined(SGE__SFML)
        this->window.close( );
#elif defined(SGE__GLFW)
        glfwTerminate( );
#endif
    }
}













































