//
//  CoreEngine.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 17/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "DEFINITIONS.hpp"

#include <string>

#define GLEW_STATIC
#include <GL/glew.h>

#ifdef SGE__SDL
    #include "Frameworks/FrameworkSDL.hpp"
#elif defined(SGE__SFML)
    #include "Frameworks/FrameworkSFML.hpp"
#elif defined(SGE__GLFW)
    #include "Frameworks/FrameworkGLFW.hpp"
#endif

#include "Frameworks/CoreFramework.hpp"
#include "CoreSettings.hpp"
#include "Frameworks/Events/CoreEvents.hpp"

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

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
        void GameLoop( );
        
        void CleanUp( );
        
        // is the window still open. Returns true if it is
        bool WindowIsOpen( ) const;
        
        CoreSettings *getSettings( ) { return this->coreSettings; }
        CoreEvents *getEvents( ) { return this->coreEvents; }
        
    private:
        CoreFramework coreFramework;
        
        CoreSettings *coreSettings;
        CoreEvents *coreEvents;
        
        glm::mat4 projection;
        
    };
}
