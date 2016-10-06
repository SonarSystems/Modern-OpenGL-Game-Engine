//
//  CoreFramework.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 18/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "CoreFramework.hpp"

#include <iostream>

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
    
    void CoreFramework::PollEvents( )
    {
        frameworkObject.PollEvents( );
    }
    
    void CoreFramework::SwapBuffers( )
    {
        frameworkObject.SwapBuffers( );
    }
    
    void CoreFramework::CleanUp( )
    {
        frameworkObject.CleanUp( );
    }
    
    bool CoreFramework::WindowIsOpen( )
    {
        return frameworkObject.WindowIsOpen( );
    }
    
    void CoreFramework::CloseWindow( )
    {
        frameworkObject.CloseWindow( );
    }
}
