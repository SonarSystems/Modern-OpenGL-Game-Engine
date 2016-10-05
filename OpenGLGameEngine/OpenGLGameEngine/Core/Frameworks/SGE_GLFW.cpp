//
//  SGE_GLFW.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "SGE_GLFW.hpp"

#ifdef SGE__GLFW

#include <iostream>

namespace SonarGameEngine
{
    SGE_GLFW::SGE_GLFW( )
    {
        
    }
    
    void SGE_GLFW::Init( )
    {
        // Init GLFW
        glfwInit( );
        
        GLFWmonitor *fullscreen = nullptr;
        
        if ( coreSettings->GetWindowFullscreen( ) )
        {
            fullscreen = glfwGetPrimaryMonitor( );
        }
        
        GLint vsync;
        
        if ( coreSettings->GetVSync( ) )
        {
            vsync = 1;
        }
        else
        {
            vsync = 0;
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
        
        glfwSwapInterval( vsync );
        
        glfwMakeContextCurrent( window );
    }
    
    bool SGE_GLFW::PollEvents( )
    {
        glfwPollEvents( );
        
        return true;
    }
    
    void SGE_GLFW::SwapBuffers( )
    {
        glfwSwapBuffers( this->window );
    }
    
    void SGE_GLFW::CleanUp( )
    {
        glfwTerminate( );
    }
}
#endif
