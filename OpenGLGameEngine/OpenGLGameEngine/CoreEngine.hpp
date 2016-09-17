//
//  CoreEngine.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 17/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#ifndef CoreEngine_hpp
#define CoreEngine_hpp

#include "DEFINITIONS.h"

#ifdef SGE__SDL
    #include <SDL2/SDL.h>
#elif defined(SGE__SFML)

#elif defined(SGE__GLFW)
#endif

#define GLEW_STATIC
#include <GL/glew.h>

#ifdef SGE__SDL
    #include <SDL2/SDL_opengl.h>
#elif defined(SGE__SFML)
    #include <SFML/window.hpp>
#elif defined(SGE__GLFW)
    #include <GLFW/glfw3.h>
#endif

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
#ifdef SGE__SDL
        SDL_Window *window;
        SDL_GLContext context;
        SDL_Event windowEvent;
#elif defined(SGE__SFML)
        sf::Window window;
#elif defined(SGE__GLFW)
        GLFWwindow *window;
#endif
    };
}

#endif /* CoreEngine_hpp */
