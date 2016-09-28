//
//  FrameworkInterface.h
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include <vector>

#include "../CoreSettings.hpp"

namespace SonarGameEngine
{
    class FrameworkInterface
    {
    public:
        void Construct( );
        
        virtual void Init( ) = 0;
        
        virtual bool PollEvents( ) = 0;
        
        virtual void SwapBuffers( ) = 0;
        
        virtual void CleanUp( ) = 0;


    protected:
        CoreSettings *coreSettings;
    };
}
