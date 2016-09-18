//
//  CoreFramework.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "CoreFramework.hpp"

namespace SonarGameEngine
{
    CoreFramework::CoreFramework( )
    {
        
    }
    
    void CoreFramework::Init( )
    {
#ifdef SGE__SDL
        sdlObject.Init( );
#elif defined(SGE__SFML)
        sfmlObject.Init( );
#elif defined(SGE__GLFW)
        glfwObject.Init( );
#endif
    }
    
    bool CoreFramework::PollEvents( )
    {
#ifdef SGE__SDL
        return sdlObject.PollEvents( );
#elif defined(SGE__SFML)
        return sfmlObject.PollEvents( );
#elif defined(SGE__GLFW)
        return glfwObject.PollEvents( );
#endif
        
        return true;
    }
    
    void CoreFramework::SwapBuffers( )
    {
#ifdef SGE__SDL
        sdlObject.SwapBuffers( );
#elif defined(SGE__SFML)
        sfmlObject.SwapBuffers( );
#elif defined(SGE__GLFW)
        glfwObject.SwapBuffers( );
#endif
    }
    
    void CoreFramework::CleanUp( )
    {
#ifdef SGE__SDL
        sdlObject.CleanUp( );
#elif defined(SGE__SFML)
        sfmlObject.CleanUp( );
#elif defined(SGE__GLFW)
        glfwObject.CleanUp( );
#endif
    }
}
