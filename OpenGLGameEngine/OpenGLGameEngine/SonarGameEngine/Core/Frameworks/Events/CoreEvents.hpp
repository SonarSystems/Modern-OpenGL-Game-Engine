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
        
        
        bool CheckKeyboardStatus( int keyStatus );
        bool CheckKeyStatus( int keyStatus, int key );
        
        // sets the status of the keyboard
        void SetKeyboardStatus( int keyboardStatus );
        
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
        int keyboardStatus;
        
        int keysStatus[101];
    };
}
