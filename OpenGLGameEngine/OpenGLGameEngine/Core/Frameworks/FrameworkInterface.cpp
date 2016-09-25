//
//  FrameworkInterface.cpp
//  OpenGLGameEngine
//
//  Created by Sonar Systems on 20/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

#include "FrameworkInterface.h"

namespace SonarGameEngine
{
    void FrameworkInterface::Construct( )
    {
        coreSettings = CoreSettings::getInstance( );
    }
}
