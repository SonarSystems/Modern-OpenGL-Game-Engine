//
//  FrameworkInterface.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 20/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "FrameworkInterface.h"

#define SGE__FI_SCREEN_WIDTH 640
#define SGE__FI_SCREEN_HEIGHT 480

namespace SonarGameEngine
{
    void FrameworkInterface::Construct( )
    {
        this->SetWindowSize( SGE__FI_SCREEN_WIDTH, SGE__FI_SCREEN_HEIGHT );
    }
    
    void FrameworkInterface::SetWindowSize( GLint width, GLint height )
    {
        this->windowSize[0] = width;
        this->windowSize[1] = height;
    }
    
    GLint *FrameworkInterface::GetWindowSize( )
    {
        return this->windowSize;
    }
}
