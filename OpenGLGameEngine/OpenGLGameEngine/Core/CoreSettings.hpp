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
        
        // returns the window size vector
        vec2<GLint> GetScreenSize( );
        // returns the width of the application window
        GLint GetScreenWidth( );
        // returns the height of the application window
        GLint GetScreenHeight( );
        
        // sets the size window size
        void SetScreenSize( GLint screenWidth, GLint screenHeight );
        // sets the screen width
        void SetScreenWidth( GLint screenWidth );
        // sets the screen height
        void SetScreenHeight( GLint screenHeight );
        
        
    private:
        CoreSettings( );
        
        static CoreSettings *sInstance;
        
        /*********************************************************************************
         Core Game Engine Properties
         *********************************************************************************/
        
        // the size of the application window.
        vec2<GLint> screenSize;
        
    };
}
