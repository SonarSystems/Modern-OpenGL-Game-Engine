#pragma once

#include "DEFINITIONS.hpp"

#ifdef SGE__GLFW

#include "EventsInterface.hpp"

#include <GLFW/glfw3.h>

namespace SonarGameEngine
{
    class EventsGLFW: public EventsInterface
    {
    public:
        EventsGLFW( );
        void KeyCallback( GLFWwindow *window, int key, int scancode, int action, int mods );
                
    private:
    };
}
#endif
