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
        
        // Set all the required options for GLFW
        glfwWindowHint( GLFW_DEPTH_BITS, 24 );
        glfwWindowHint( GLFW_STENCIL_BITS, 8 );
        glfwWindowHint( GLFW_CONTEXT_VERSION_MAJOR, 3 );
        glfwWindowHint( GLFW_CONTEXT_VERSION_MINOR, 3 );
        glfwWindowHint( GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE );
        glfwWindowHint( GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE );
        glfwWindowHint( GLFW_RESIZABLE, GL_FALSE );
        
        // Create a GLFWwindow object that we can use for GLFW's functions
        this->window = glfwCreateWindow( this->GetWindowSize( )[0], this->GetWindowSize( )[1], "GLFW", nullptr, nullptr );
        
        int screenWidth, screenHeight;
        glfwGetFramebufferSize( window, &screenWidth, &screenHeight );
        
        this->SetWindowSize( screenWidth, screenHeight );
        
        if ( nullptr == window )
        {
            std::cout << "Failed to create GLFW window" << std::endl;
            glfwTerminate( );
            
            //return EXIT_FAILURE;
        }
        
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
