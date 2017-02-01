#pragma once

#include "EventsInterface.hpp"
#include "DEFINITIONS.hpp"
#include "KEYBOARD DEFINITIONS.hpp"
#include "MOUSE DEFINITIONS.hpp"

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
        void SetKeyStatus( int key, int keyStatus );
        
        bool CheckMouseButtonStatus( int button, int buttonStatus );
        void SetMouseButtonStatus( int button, int buttonStatus );

        const vec2<float>& GetScrollOffset( ) const;
        void SetScrollOffset( float x, float y );
        
        const vec2<float>& GetMousePosition( ) const;
        void SetMousePosition( float x, float y );
        
        bool IsMouseCursorInWindow( );
        void SetMouseCursorInWindow( bool isInWindow );
        
        double GetTime( );
        double GetExplicitTime( );
        double GetCumulativeTime( );
        void SetTime( double time, bool isNormalSet = true );
        void SetCumulativeTime( double time );
        
        bool IsSettingTime( );
        bool IsExplicitlySettingTime( );
        void StopSettingTime( );
        
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
        int mouseStatus;
        int scrollStatus;
        
        int keysStatus[101];
        int mouseButtonsStatus[3];
        vec2<float> scrollOffset;
        vec2<float> mousePosition;
        bool isInWindow;
        
        double time, explicitTime, cumulativeTime;
        bool isSettingTime, isExplicitlySettingTime;
        
        int GetKeyNumber( int key ) override;
        int GetMouseButtonNumber( int button ) override;
    };
}
