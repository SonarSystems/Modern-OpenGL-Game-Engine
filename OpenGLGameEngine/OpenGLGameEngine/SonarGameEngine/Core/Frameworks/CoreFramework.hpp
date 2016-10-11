//
//  CoreFramework.hpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#include "FrameworkInterface.hpp"
#include "DEFINITIONS.hpp"

#ifdef SGE__SDL
    #include "FrameworkSDL.hpp"
#elif defined(SGE__SFML)
    #include "FrameworkSFML.hpp"
#elif defined(SGE__GLFW)
    #include "FrameworkGLFW.hpp"
#endif

namespace SonarGameEngine
{
    class CoreFramework: public FrameworkInterface
    {
    public:
        CoreFramework( );
        
        void Init( ) override;
        
        void PollEvents( ) override;
        
        void SwapBuffers( ) override;
        
        void CleanUp( ) override;
        
        bool WindowIsOpen( ) const override;
        
        void CloseWindow( ) override;
        
    private:
#ifdef SGE__SDL
        FrameworkSDL frameworkObject;
#elif defined(SGE__SFML)
        FrameworkSFML frameworkObject;
#elif defined(SGE__GLFW)
        FrameworkGLFW frameworkObject;
#endif        
    };
}
