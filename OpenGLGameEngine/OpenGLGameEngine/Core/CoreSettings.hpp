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
        
        GLint *GetScreenSize( );
        void SetScreenSize( GLint screenWidth, GLint screenHeight );
        
    private:
        CoreSettings( );
        
        static CoreSettings *sInstance;
        
        // Core Game Engine Properties
        GLint screenSize[2];
    };
}
