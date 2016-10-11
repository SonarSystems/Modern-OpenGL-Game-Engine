#pragma once

#include "EventsInterface.hpp"
#include "DEFINITIONS.hpp"

#ifdef SGE__SDL
    #include "EventsSDL.hpp"
#elif defined(SGE__SFML)
    #include "EventsSFML.hpp"
#elif defined(SGE__GLFW)
    #include "EventsGLFW.hpp"
#endif

namespace SonarGameEngine
{
    class CoreEvents: public EventsInterface
    {
    public:
        CoreEvents( );
        
    private:
#ifdef SGE__SDL
        EventsSDL eventsObject;
#elif defined(SGE__SFML)
        EventsSFML eventsObject;
#elif defined(SGE__GLFW)
        EventsGLFW eventsObject;
#endif
    };
}
