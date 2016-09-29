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
        
        /*
         returns the window size vector
         not scaled for high density screens like Retina Macs, use GetScaledWindowSize( )
         */
        vec2<GLint> GetWindowSize( );
        /*
         returns the width of the application window
         not scaled for high density screens like Retina Macs, use GetScaledWindowWidth( )
         */
        GLint GetWindowWidth( );
        /*
         returns the height of the application window
         not scaled for high density screens like Retina Macs, use GetScaledWindowHeight( )
         */
        GLint GetWindowHeight( );
        
        /*
         sets the window size
         not scaled for high density screens like Retina Macs, use SetScaledWindowSize( )
         */
        void SetWindowSize( GLint windowWidth, GLint windowHeight );
        /*
         sets the window width
         not scaled for high density screens like Retina Macs, use SetScaledWindowWidth( )
         */
        void SetWindowWidth( GLint windowWidth );
        /*
         sets the window height
         not scaled for high density screens like Retina Macs, use SetScaledWindowHeight( )
         */
        void SetWindowHeight( GLint windowHeight );
        
        /*
         returns the scaled window size vector
         for non scaled use GetWindowSize( )
         */
        vec2<GLint> GetScaledWindowSize( );
        /*
         returns the scaled width of the application window
         for non scaled use GetWindowWidth( )
         */
        GLint GetScaledWindowWidth( );
        /*
         returns the scaled height of the application window
         for non scaled use GetWindowHeight( )
         */
        GLint GetScaledWindowHeight( );
        
        /*
         sets the scaled window size
         for non scaled use SetWindowSize( )
         */
        void SetScaledWindowSize( GLint windowWidth, GLint windowHeight );
        /*
         sets the scaled window width
         for non scaled use SetWindowWidth( )
         */
        void SetScaledWindowWidth( GLint windowWidth );
        /*
         sets the scaled window height
         for non scaled use SetWindowHeight( )
         */
        void SetScaledWindowHeight( GLint windowHeight );
        
        /*
         returns the amount of depths bits of the application window
         */
        GLint GetDepthSize( );
        
        /*
         sets the amount of depth bits for the application window
         */
        void SetDepthSize( GLint depthSize );
        
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
        
    };
}
