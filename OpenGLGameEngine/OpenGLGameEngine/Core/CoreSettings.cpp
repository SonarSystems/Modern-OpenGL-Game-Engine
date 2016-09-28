//
//  CoreSettings.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 25/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "CoreSettings.hpp"

#define SGE_DEF_SCREEN_WIDTH 640
#define SGE_DEF_SCREEN_HEIGHT 480

namespace SonarGameEngine
{
    CoreSettings *CoreSettings::sInstance = 0;
 
    CoreSettings::CoreSettings( )
    {
        // set initial values
        this->screenSize = vec2<GLint> { SGE_DEF_SCREEN_WIDTH, SGE_DEF_SCREEN_HEIGHT };
    }
    
    vec2<GLint> CoreSettings::GetScreenSize( )
    {
        return this->screenSize;
    }
    
    GLint CoreSettings::GetScreenWidth( )
    {
        return this->screenSize.width;
    }
    
    GLint CoreSettings::GetScreenHeight( )
    {
        return this->screenSize.height;
    }
    
    void CoreSettings::SetScreenSize( GLint screenWidth, GLint screenHeight )
    {
        this->screenSize = vec2<GLint> { screenWidth, screenHeight };
    }
    
    void CoreSettings::SetScreenWidth( GLint screenWidth )
    {
        this->screenSize.width = screenWidth;
    }
    
    void CoreSettings::SetScreenHeight( GLint screenHeight )
    {
        this->screenSize.height = screenHeight;
    }
    
}
