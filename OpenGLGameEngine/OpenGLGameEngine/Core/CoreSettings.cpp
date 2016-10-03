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
#define SGE_DEF_WINDOW_STENCIL_SIZE 8
#define SGE_DEF_OPENGL_MAJOR_VERSION 3
#define SGE_DEF_OPENGL_MINOR_VERSION 3
#define SGE_DEF_IS_WINDOW_RESIZABLE GL_FALSE
#define SGE_DEF_ANTI_ALIASING 0

namespace SonarGameEngine
{
    CoreSettings *CoreSettings::sInstance = nullptr;
 
    CoreSettings::CoreSettings( )
    {
        // set initial values
        this->windowSize = vec2<GLint> { SGE_DEF_WINDOW_WIDTH, SGE_DEF_WINDOW_HEIGHT };
        this->scaledWindowSize = vec2<GLint> { SGE_DEF_WINDOW_WIDTH, SGE_DEF_WINDOW_HEIGHT };
        
        this->depthSize = SGE_DEF_WINDOW_DEPTH_SIZE;
        this->stencilSize = SGE_DEF_WINDOW_STENCIL_SIZE;
        
        this->openGLVersion.major = SGE_DEF_OPENGL_MAJOR_VERSION;
        this->openGLVersion.minor = SGE_DEF_OPENGL_MINOR_VERSION;
        
        this->isWindowResizable = SGE_DEF_IS_WINDOW_RESIZABLE;
        
        this->antiAliasing = SGE_DEF_ANTI_ALIASING;
    }
    
    /**********************************************************************************************************************
     *************************************** START WINDOW SIZE GETTERS AND SETTERS ****************************************
     **********************************************************************************************************************/
    const vec2<GLint>& CoreSettings::GetWindowSize( ) const
    {
        return this->windowSize;
    }
    
    GLint CoreSettings::GetWindowWidth( ) const
    {
        return this->windowSize.width;
    }
    
    GLint CoreSettings::GetWindowHeight( ) const
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
    const vec2<GLint>& CoreSettings::GetScaledWindowSize( ) const
    {
        return this->scaledWindowSize;
    }
    
    GLint CoreSettings::GetScaledWindowWidth( ) const
    {
        return this->scaledWindowSize.width;
    }
    
    GLint CoreSettings::GetScaledWindowHeight( ) const
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
    GLint CoreSettings::GetDepthSize( ) const
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
    
    /**********************************************************************************************************************
     ************************************** START STENCIL SIZE GETTERS AND SETTERS ****************************************
     **********************************************************************************************************************/
    GLint CoreSettings::GetStencilSize( ) const
    {
        return this->stencilSize;
    }
    
    void CoreSettings::SetStencilSize( GLint stencilSize )
    {
        this->stencilSize = stencilSize;
    }
    /**********************************************************************************************************************
     *************************************** END STENCIL SIZE GETTERS AND SETTERS *****************************************
     **********************************************************************************************************************/
    
    /**********************************************************************************************************************
     ************************************* START OPENGL VERSION GETTERS AND SETTERS ***************************************
     **********************************************************************************************************************/
    const vec2<GLint>& CoreSettings::GetOpenGLVersion( ) const
    {
        return this->openGLVersion;
    }
    
    void CoreSettings::SetOpenGLVersion( GLint major, GLint minor )
    {
        this->openGLVersion.major = major;
        this->openGLVersion.minor = minor;
    }
    /**********************************************************************************************************************
     ************************************** END OPENGL VERSION GETTERS AND SETTERS ****************************************
     **********************************************************************************************************************/
    
    /**********************************************************************************************************************
     *********************************** START WINDOWS RESIZABLE GETTERS AND SETTERS **************************************
     **********************************************************************************************************************/
    GLboolean CoreSettings::GetWindowResizable( ) const
    {
        return this->isWindowResizable;
    }
    
    void CoreSettings::SetWindowResizable( GLboolean isWindowResizable )
    {
        this->isWindowResizable = isWindowResizable;
    }
    /**********************************************************************************************************************
     ************************************ END WINDOWS RESIZABLE GETTERS AND SETTERS ***************************************
     **********************************************************************************************************************/
    
    /**********************************************************************************************************************
     ************************************* START ANTI-ALIASING GETTERS AND SETTERS ****************************************
     **********************************************************************************************************************/
    GLint CoreSettings::GetAntiAliasing( ) const
    {
        return this->antiAliasing;
    }
    
    void CoreSettings::SetAntiAliasing( GLint AA )
    {
        this->antiAliasing = AA;
    }
    /**********************************************************************************************************************
     ************************************** END ANTI-ALIASING GETTERS AND SETTERS *****************************************
     **********************************************************************************************************************/
}
