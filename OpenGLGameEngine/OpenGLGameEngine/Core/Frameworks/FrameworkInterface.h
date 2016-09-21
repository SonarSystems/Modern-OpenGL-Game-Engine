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

namespace SonarGameEngine
{
    class FrameworkInterface
    {
    public:
        void Construct( );
        
        virtual bool PollEvents( ) = 0;
        
        virtual void SwapBuffers( ) = 0;
        
        virtual void CleanUp( ) = 0;
        
        void SetWindowSize( GLint width, GLint height );
        
        GLint *GetWindowSize( );

    protected:
        GLint windowSize[2];
    };
}
