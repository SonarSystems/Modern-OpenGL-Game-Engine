//
//  FrameworkInterface.h
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#pragma once

namespace SonarGameEngine
{
    class FrameworkInterface
    {
    protected:        
        virtual bool PollEvents( ) = 0;
        
        virtual void SwapBuffers( ) = 0;
        
        virtual void CleanUp( ) = 0;
    };
}
