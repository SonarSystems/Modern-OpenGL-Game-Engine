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
        frameworkObject.Construct( );
    }
    
    void CoreFramework::Init( )
    {
        frameworkObject.Init( );
    }
    
    bool CoreFramework::PollEvents( )
    {
        return frameworkObject.PollEvents( );
        
        return true;
    }
    
    void CoreFramework::SwapBuffers( )
    {
        frameworkObject.SwapBuffers( );
    }
    
    void CoreFramework::CleanUp( )
    {
        frameworkObject.CleanUp( );
    }
    
    void CoreFramework::SetWindowSize( GLint width, GLint height )
    {
        frameworkObject.SetWindowSize( width, height );
    }
}
