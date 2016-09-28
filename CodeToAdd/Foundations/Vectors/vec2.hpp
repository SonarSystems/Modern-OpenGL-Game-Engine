//
//  vec2.h
//  OpenGLGameEngine
//
//  Created by Frahaan Hussain on 26/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

namespace SonarGameEngine
{
    // vector with 2 pieces of data
    template <typename T>
    struct vec2
    {
        typedef T value_type;
        
        // unify the different sets of data in one area in memory
        union
        {
            struct{ T x, y; };
            struct{ T r, g; };
            struct{ T width, height; };
        };
    };
}