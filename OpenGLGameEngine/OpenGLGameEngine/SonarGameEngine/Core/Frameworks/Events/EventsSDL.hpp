#pragma once

#include "DEFINITIONS.hpp"

#ifdef SGE__SDL

#include "EventsInterface.hpp"

#include <SDL2/SDL.h>

namespace SonarGameEngine
{
    class EventsSDL: public EventsInterface
    {
    public:
        EventsSDL( );
        
    private:
        
    };
}
#endif
