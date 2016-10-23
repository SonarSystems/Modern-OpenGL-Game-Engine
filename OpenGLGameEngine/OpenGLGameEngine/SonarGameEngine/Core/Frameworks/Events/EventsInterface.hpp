#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include <vector>

#include "../../CoreSettings.hpp"

namespace SonarGameEngine
{
    class EventsInterface
    {
    public:
        void Construct( );

    protected:
        CoreSettings *coreSettings;
    };
}
