//
//  CoreEngine.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 17/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "CoreEngine.hpp"

#include <iostream>

namespace SonarGameEngine
{
    CoreEngine::CoreEngine( )
    {
        coreSettings = CoreSettings::getInstance( );
        coreEvents = CoreEvents::getInstance( );
    }
    
    bool CoreEngine::Init( )
    {
        coreFramework.Init( );
        
        // Set this to true so GLEW knows to use a modern approach to retrieving function pointers and extensions
        glewExperimental = GL_TRUE;
        // Initialize GLEW to setup the OpenGL Function pointers
        if ( GLEW_OK != glewInit( ) )
        {
            std::cout << "Failed to initialize GLEW" << std::endl;
            return EXIT_FAILURE;
        }
        
        // Define the viewport dimensions
        glViewport( 0, 0, coreSettings->GetScaledWindowWidth( ), coreSettings->GetScaledWindowHeight( ) );
        
        if ( coreSettings->GetAntiAliasing( ) > 0 )
        {
            glEnable( GL_MULTISAMPLE );
        }
        else
        {
            glDisable( GL_MULTISAMPLE );
        }
        
        return EXIT_SUCCESS;
    }
    
    void CoreEngine::GameLoop( )
    {
        coreFramework.PollEvents( );

        // Clear the colorbuffer
        glClearColor( 0.2f, 0.3f, 0.3f, 1.0f );
        glClear( GL_COLOR_BUFFER_BIT );
        
        // draw OpenGL

        
        coreFramework.SwapBuffers( );
    }
    
    void CoreEngine::CleanUp( )
    {
        
        coreFramework.CleanUp( );
    }
    
    bool CoreEngine::WindowIsOpen( ) const
    {
        return coreFramework.WindowIsOpen( );
    }
}
