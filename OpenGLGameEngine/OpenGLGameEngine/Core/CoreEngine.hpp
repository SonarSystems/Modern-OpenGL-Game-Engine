//
//  CoreEngine.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 17/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "DEFINITIONS.h"

#include <string>

#define GLEW_STATIC
#include <GL/glew.h>

#ifdef SGE__SDL
    #include "Frameworks/SGE_SDL.hpp"
#elif defined(SGE__SFML)
    #include "Frameworks/SGE_SFML.hpp"
#elif defined(SGE__GLFW)
    #include "Frameworks/SGE_GLFW.hpp"
#endif

#include "Frameworks/CoreFramework.hpp"

namespace SonarGameEngine
{
    class CoreEngine
    {
    public:
        // constructor
        CoreEngine( );
        
        // initialize the framework
        bool Init( );
        
        // the game loop that is run every frame
        bool GameLoop( );
        
        void CleanUp( );
        
    private:
        CoreFramework coreFramework;
    };
}
