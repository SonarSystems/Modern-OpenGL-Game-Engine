#include "EventsGLFW.hpp"

#ifdef SGE__GLFW

#include <iostream>

namespace SonarGameEngine
{
    EventsGLFW::EventsGLFW( )
    {
        
    }
    
    void EventsGLFW::KeyCallback( GLFWwindow *window, int key, int scancode, int action, int mods )
    {
       // if (key == GLFW_KEY_E && action == GLFW_PRESS)
     //       activate_airship();
    }
}
#endif
