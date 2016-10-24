//
//  FrameworkGLFW.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "FrameworkGLFW.hpp"

#ifdef SGE__GLFW

#include <iostream>

namespace SonarGameEngine
{
    FrameworkGLFW::FrameworkGLFW( )
    {
        
    }
    
    void cbfun( GLFWwindow *window )
    {
        glfwSetWindowShouldClose( window, GL_TRUE );
    }
    
    void FrameworkGLFW::Init( )
    {
        // Init GLFW
        glfwInit( );
        
        GLFWmonitor *fullscreen = nullptr;
        
        if ( coreSettings->GetWindowFullscreen( ) )
        {
            fullscreen = glfwGetPrimaryMonitor( );
        }
        
        GLint vsync = 0;
        
        if ( coreSettings->GetVSync( ) )
        {
            vsync = 1;
        }
        
        // Set all the required options for GLFW
        glfwWindowHint( GLFW_DEPTH_BITS, coreSettings->GetDepthSize( ) );
        glfwWindowHint( GLFW_STENCIL_BITS, coreSettings->GetStencilSize( ) );
        glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, coreSettings->GetOpenGLVersion( ).major );
        glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, coreSettings->GetOpenGLVersion( ).minor );
        glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );
        glfwWindowHint( GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE );
        glfwWindowHint( GLFW_RESIZABLE, coreSettings->GetWindowResizable( ) );
        glfwWindowHint( GLFW_SAMPLES, coreSettings->GetAntiAliasing( ) );
        
        // Create a GLFWwindow object that we can use for GLFW's functions
        this->window = glfwCreateWindow( coreSettings->GetWindowWidth( ), coreSettings->GetWindowHeight( ), coreSettings->GetWindowTitle( ).c_str( ), fullscreen, nullptr );
        
        
        
        int scaledWidth, scaledHeight;
        glfwGetFramebufferSize( window, &scaledWidth, &scaledHeight );
        
        coreSettings->SetScaledWindowWidth( scaledWidth );
        coreSettings->SetScaledWindowWidth( scaledHeight );
        
        if ( nullptr == window )
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate( );
            
            //return EXIT_FAILURE;
        }
        
        glfwSetKeyCallback( window, KeyCallback );
        
        glfwSwapInterval( vsync );
        
        glfwMakeContextCurrent( this->window );
    }
    
    void FrameworkGLFW::PollEvents( )
    {
        glfwPollEvents( );
    }
    
    void FrameworkGLFW::SwapBuffers( )
    {
        glfwSwapBuffers( this->window );
    }
    
    void FrameworkGLFW::CleanUp( )
    {
        glfwTerminate( );
    }
    
    bool FrameworkGLFW::WindowIsOpen( ) const
    {
       return !glfwWindowShouldClose(this->window);
    }
    
    void FrameworkGLFW::CloseWindow( )
    {
        glfwSetWindowShouldClose( window, GL_TRUE );
    }
    
    void FrameworkGLFW::KeyCallback( GLFWwindow *window, int key, int scancode, int action, int mods )
    {
        CoreEvents *tempEventsObject = CoreEvents::getInstance( );
        
        if ( GLFW_PRESS == action )
        {
            tempEventsObject->SetKeyboardStatus( KEYSTATUS::PRESSED );
        }
        else if ( GLFW_RELEASE == action )
        {
            tempEventsObject->SetKeyboardStatus( KEYSTATUS::RELEASED );
        }
    }
}
#endif
