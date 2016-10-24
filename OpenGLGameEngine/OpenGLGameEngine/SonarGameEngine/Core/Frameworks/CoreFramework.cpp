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
        this->frameworkObject.Construct( );
    }
    
    void CoreFramework::Init( )
    {
        this->frameworkObject.Init( );
    }
    
    void CoreFramework::PollEvents( )
    {
        this->frameworkObject.PollEvents( );
    }
    
    void CoreFramework::SwapBuffers( )
    {
        this->frameworkObject.SwapBuffers( );
    }
    
    void CoreFramework::CleanUp( )
    {
        this->frameworkObject.CleanUp( );
    }
    
    bool CoreFramework::WindowIsOpen( ) const
    {
        return this->frameworkObject.WindowIsOpen( );
    }
    
    void CoreFramework::CloseWindow( )
    {
        this->frameworkObject.CloseWindow( );
    }
}
