#pragma once

#include "EventsInterface.hpp"
#include "DEFINITIONS.hpp"
#include "KEYBOARD DEFINITIONS.hpp"

#ifdef SGE__SDL
    #include "EventsSDL.hpp"
#elif defined(SGE__SFML)
    #include "EventsSFML.hpp"
#elif defined(SGE__GLFW)
    #include "EventsGLFW.hpp"
#endif

/*
 if ( ce.getEvents().Keyboard( SGE_KEY_STATUS, SGE_KEY_A ) )
 {
 }
 */

namespace SonarGameEngine
{
    class CoreEvents: public EventsInterface
    {
    public:
        static CoreEvents *getInstance( )
        {
            if ( !sInstance )
            {
                sInstance = new CoreEvents;
            }
            
            return sInstance;
        }
        
        bool Keyboard( int keyStatus );
        bool Keyboard( int keyStatus, int key );
        
    private:
        CoreEvents( );
        
        static CoreEvents *sInstance;
        
#ifdef SGE__SDL
        EventsSDL eventsObject;
#elif defined(SGE__SFML)
        EventsSFML eventsObject;
#elif defined(SGE__GLFW)
        EventsGLFW eventsObject;
#endif
        
        // has a key been pressed or released (reset the value of this key once checked)
        bool keyboardStatus;
        
        int keysStatus[101];
    };
}
