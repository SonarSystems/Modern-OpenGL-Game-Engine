#include "CoreEvents.hpp"

#include <iostream>

/*
 if ( ce.getEvents().Keyboard().Pressed( ) )
 {
 if ( ce.getEvents().Keyboard().Key() == 'A' )
 {
 
 }
 }
 */

namespace SonarGameEngine
{
    CoreEvents *CoreEvents::sInstance = nullptr;
    
    CoreEvents::CoreEvents( )
    {
        this->keyboardStatus = KEYSTATUS::KB_NOT_PRESSED;
        
        this->eventsObject.Construct( );
        
        for ( int i = 0; i < sizeof( *this->keysStatus ); i++ )
        {
            this->keysStatus[i] = KEYSTATUS::KB_NOT_PRESSED;
        }
        
        for ( int i = 0; i < sizeof( *this->mouseButtonsStatus ); i++ )
        {
            this->keysStatus[i] = MOUSE_BUTTON_STATUS::MOUSEKEY_NOT_PRESSED;
        }
        
        this->mouseStatus = MOUSE_STATUS::MOUSE_NOTHING;
        
        this->scrollOffset = vec2<float> { 0.0f, 0.0f };
    }
    
    bool CoreEvents::CheckKeyboardStatus( int keyStatus )
    {
        if ( keyStatus == this->keyboardStatus )
        {
            this->keyboardStatus = KEYSTATUS::KB_NOT_PRESSED;
            
            return true;
        }
        else
        {            
            return false;
        }
    }
    
    bool CoreEvents::CheckKeyStatus( int keyStatus, int key )
    {
        if ( keyStatus == this->keysStatus[key] )
        {
            this->keysStatus[key] = KEYSTATUS::KB_NOT_PRESSED;
            
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool CoreEvents::CheckMouseButtonStatus( int button, int buttonStatus )
    {
        if ( MOUSE_BUTTONS::MOUSEKEY_ANY == button )
        {
            for ( int i = 0; i < 3; i++ )
            {
                if ( buttonStatus == this->mouseButtonsStatus[i] )
                {
                    for ( int j = 0; j < 3; j++ )
                    {
                        this->mouseButtonsStatus[j] = MOUSE_BUTTON_STATUS::MOUSEKEY_NOT_PRESSED;
                    }
                    
                    return true;
                }
            }
        }
        
        if ( buttonStatus == this->mouseButtonsStatus[button] )
        {
            this->mouseButtonsStatus[button] = MOUSE_BUTTON_STATUS::MOUSEKEY_NOT_PRESSED;
            
            return true;
        }
        else
        {
            return false;
        }
    }
    
    void CoreEvents::SetKeyboardStatus( int keyboardStatus )
    {
        this->keyboardStatus = keyboardStatus;
    }
    
    void CoreEvents::SetKeyStatus( int key, int keyStatus )
    {
        this->keysStatus[this->GetKeyNumber( key )] = keyStatus;
    }
    
    void CoreEvents::SetMouseButtonStatus( int button, int buttonStatus )
    {
        this->mouseButtonsStatus[this->GetMouseButtonNumber( button )] = buttonStatus;
    }
    
    int CoreEvents::GetKeyNumber( int key )
    {
        return this->eventsObject.GetKeyNumber( key );
    }
    
    int CoreEvents::GetMouseButtonNumber( int key )
    {
        return this->eventsObject.GetMouseButtonNumber( key );
    }
    
    const vec2<float>& CoreEvents::GetScrollOffset( ) const
    {
        return this->scrollOffset;
    }
    
    void CoreEvents::SetScrollOffset( float x, float y )
    {
        this->scrollOffset = vec2<float> { x, y };
    }
}
