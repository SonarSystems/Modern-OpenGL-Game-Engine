#pragma once

#include "DEFINITIONS.hpp"

#ifdef SGE__SFML

#include "EventsInterface.hpp"

#include <SFML/window.hpp>

namespace SonarGameEngine
{
    class EventsSFML: public EventsInterface
    {
    public:
        EventsSFML( );
        
    private:
        
    };
}
#endif
