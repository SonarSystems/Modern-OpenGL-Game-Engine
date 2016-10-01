//
//  vec4.h
//  OpenGLGameEngine
//
//  Created by Frahaan Hussain on 26/09/2016.
//  Copyright © 2016 Sonar Systems. All rights reserved.
//

namespace SonarGameEngine
{
    // vector with 4 pieces of data
    template <typename T>
    struct vec4
    {
        typedef T value_type;
        
        // unify the different sets of data in one area in memory
        union
        {
            struct { T x, y, z, w; };
            struct { T r, g, b, a; };
            struct { T width, height, depth, mass; };
        };
    };
}
