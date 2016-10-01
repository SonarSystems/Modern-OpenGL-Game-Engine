//
//  CoreSettings.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 25/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include "Foundations/Foundation.hpp"

namespace SonarGameEngine
{
    class CoreSettings
    {
    public:
        static CoreSettings *getInstance( )
        {
            if ( !sInstance )
            {
                sInstance = new CoreSettings;
            }
            
            return sInstance;
        }
        
        /**
         * returns the window size vector
         * not scaled for high density screens like Retina Macs, use GetScaledWindowSize( )
         */
        vec2<GLint> GetWindowSize( );
        /**
         * returns the width of the application window
         * not scaled for high density screens like Retina Macs, use GetScaledWindowWidth( )
         */
        GLint GetWindowWidth( );
        /**
         * returns the height of the application window
         * not scaled for high density screens like Retina Macs, use GetScaledWindowHeight( )
         */
        GLint GetWindowHeight( );
        
        /**
         * sets the window size
         * not scaled for high density screens like Retina Macs, use SetScaledWindowSize( )
         * @param windowWidth width of the window
         * @param windowHeight height of the window
         */
        void SetWindowSize( GLint windowWidth, GLint windowHeight );
        /**
         * sets the window width
         * not scaled for high density screens like Retina Macs, use SetScaledWindowWidth( )
         * @param windowWidth width of the window
         */
        void SetWindowWidth( GLint windowWidth );
        /**
         * sets the window height
         * not scaled for high density screens like Retina Macs, use SetScaledWindowHeight( )
         * @param windowHeight height of the window
         */
        void SetWindowHeight( GLint windowHeight );
        
        /**
         * returns the scaled window size vector
         * for non scaled use GetWindowSize( )
         */
        vec2<GLint> GetScaledWindowSize( );
        /**
         * returns the scaled width of the application window
         * for non scaled use GetWindowWidth( )
         */
        GLint GetScaledWindowWidth( );
        /**
         * returns the scaled height of the application window
         * for non scaled use GetWindowHeight( )
         */
        GLint GetScaledWindowHeight( );
        
        /**
         * sets the scaled window size
         * for non scaled use SetWindowSize( )
         * @param windowWidth width of the window but scaled for device such as retina Mac's
         * @param windowHeight height of the window but scaled for device such as retina Mac's
         */
        void SetScaledWindowSize( GLint windowWidth, GLint windowHeight );
        /**
         * sets the scaled window width
         * for non scaled use SetWindowWidth( )
         * @param windowWidth width of the window but scaled for device such as retina Mac's
         */
        void SetScaledWindowWidth( GLint windowWidth );
        /**
         * sets the scaled window height
         * for non scaled use SetWindowHeight( )
         * @param windowHeight height of the window but scaled for device such as retina Mac's
         */
        void SetScaledWindowHeight( GLint windowHeight );
        
        /**
         * returns the amount of depths bits of the application window
         */
        GLint GetDepthSize( );
        
        /**
         * sets the amount of depth bits for the application window
         * @param depthSize amount of depth bits
         */
        void SetDepthSize( GLint depthSize );
        
        /**
         * returns the amount of stencil bits of the application window
         */
        GLint GetStencilSize( );
        
        /**
         * sets the amount of stencil bits for the application window
         * @param stencilSize amount of stencil bits
         */
        void SetStencilSize( GLint stencilSize );
        
        /**
         * get OpenGL version
         * .major is left of the decimal point aka 3 in 3.0
         * .minor is right of the decimal point aka 0 in 3.0
         */
        vec2<GLint> GetOpenGLVersion( );
        
        /**
         * sets the OpenGL version
         * @param major is left of the decimal point aka 3 in 3.0
         * @param minor is right of the decimal point aka 0 in 3.0
         */
        void SetOpenGLVersion( GLint major, GLint minor );
        
        /**
         * check if window is resizable
         */
        GLboolean GetWindowResizable( );
        
        /**
         * sets the OpenGL version
         * @param isWindowResizable is the window resizable by the user
         */
        void SetWindowResizable( GLboolean isWindowResizable );
        
        /**
         * get Anti-aliasing amount
         */
        GLint GetAntiAliasing( );
        
        /**
         * sets the Anti-aliasing amount
         * @param AA the amount of Anti-aliasing to be applied
         */
        void SetAntiAliasing( GLint AA );
        
    private:
        CoreSettings( );
        
        static CoreSettings *sInstance;
        
        /*********************************************************************************
         Core Game Engine Properties
         *********************************************************************************/
        
        // the size of the application window
        vec2<GLint> windowSize;
        // the scaled size of the application window for high density displays such as Retina Macs
        vec2<GLint> scaledWindowSize;
        
        // depth size
        GLint depthSize;
        // stencil size
        GLint stencilSize;
        // OpenGL version (major and minor)
        vec2<GLint> openGLVersion;
        // is window resizable
        GLboolean isWindowResizable;
        // amount AA (Anti-Aliasing to be applied)
        GLint antiAliasing;
        
    };
}
