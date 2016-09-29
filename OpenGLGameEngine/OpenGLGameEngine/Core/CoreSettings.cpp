//
//  CoreSettings.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 25/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "CoreSettings.hpp"

#define SGE_DEF_WINDOW_WIDTH 640
#define SGE_DEF_WINDOW_HEIGHT 480
#define SGE_DEF_WINDOW_DEPTH_SIZE 24
#define SGE_DEF_WINDOW_STENCIL_BITS 8
#define SGE_DEF_OPENGL_MAJOR_VERSION 3
#define SGE_DEF_OPENGL_MINOR_VERSION 3

namespace SonarGameEngine
{
    CoreSettings *CoreSettings::sInstance = 0;
 
    CoreSettings::CoreSettings( )
    {
        // set initial values
        this->windowSize = vec2<GLint> { SGE_DEF_WINDOW_WIDTH, SGE_DEF_WINDOW_HEIGHT };
        this->scaledWindowSize = vec2<GLint> { SGE_DEF_WINDOW_WIDTH, SGE_DEF_WINDOW_HEIGHT };
        
        this->depthSize = SGE_DEF_WINDOW_DEPTH_SIZE;
    }
    
    /**********************************************************************************************************************
     *************************************** START WINDOW SIZE GETTERS AND SETTERS ****************************************
     **********************************************************************************************************************/
    vec2<GLint> CoreSettings::GetWindowSize( )
    {
        return this->windowSize;
    }
    
    GLint CoreSettings::GetWindowWidth( )
    {
        return this->windowSize.width;
    }
    
    GLint CoreSettings::GetWindowHeight( )
    {
        return this->windowSize.height;
    }
    
    void CoreSettings::SetWindowSize( GLint windowWidth, GLint windowHeight )
    {
        this->windowSize = vec2<GLint> { windowWidth, windowHeight };
    }
    
    void CoreSettings::SetWindowWidth( GLint windowWidth )
    {
        this->windowSize.width = windowWidth;
    }
    
    void CoreSettings::SetWindowHeight( GLint windowHeight )
    {
        this->windowSize.height = windowHeight;
    }
    /**********************************************************************************************************************
     **************************************** END WINDOW SIZE GETTERS AND SETTERS *****************************************
     **********************************************************************************************************************/
    
    /**********************************************************************************************************************
     *********************************** START SCALED WINDOW SIZE GETTERS AND SETTERS *************************************
     **********************************************************************************************************************/
    vec2<GLint> CoreSettings::GetScaledWindowSize( )
    {
        return this->scaledWindowSize;
    }
    
    GLint CoreSettings::GetScaledWindowWidth( )
    {
        return this->scaledWindowSize.width;
    }
    
    GLint CoreSettings::GetScaledWindowHeight( )
    {
        return this->scaledWindowSize.height;
    }
    
    void CoreSettings::SetScaledWindowSize( GLint windowWidth, GLint windowHeight )
    {
        this->scaledWindowSize = vec2<GLint> { windowWidth, windowHeight };
    }
    
    void CoreSettings::SetScaledWindowWidth( GLint windowWidth )
    {
        this->scaledWindowSize.width = windowWidth;
    }
    
    void CoreSettings::SetScaledWindowHeight( GLint windowHeight )
    {
        this->scaledWindowSize.height = windowHeight;
    }
    /**********************************************************************************************************************
     ************************************ END SCALED WINDOW SIZE GETTERS AND SETTERS **************************************
     **********************************************************************************************************************/
    
    /**********************************************************************************************************************
     *************************************** START DEPTH SIZE GETTERS AND SETTERS *****************************************
     **********************************************************************************************************************/
    GLint CoreSettings::GetDepthSize( )
    {
        return this->depthSize;
    }

    void CoreSettings::SetDepthSize( GLint depthSize )
    {
        this->depthSize = depthSize;
    }
    /**********************************************************************************************************************
     **************************************** END DEPTH SIZE GETTERS AND SETTERS ******************************************
     **********************************************************************************************************************/
}
