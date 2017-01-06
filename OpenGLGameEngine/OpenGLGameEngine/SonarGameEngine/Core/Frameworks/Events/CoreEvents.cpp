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
        this->keyboardStatus = KEYSTATUS::NOT_PRESSED;
        
        this->eventsObject.Construct( );
        
        for ( int i = 0; i < sizeof( *this->keysStatus ); i++ )
        {
            this->keysStatus[i] = KEYSTATUS::NOT_PRESSED;
        }
        
        //this->eventsObject
    }
    
    bool CoreEvents::CheckKeyboardStatus( int keyStatus )
    {
        if ( keyStatus == this->keyboardStatus )
        {
            //this->keyboardStatus = KEYSTATUS::NO_STATE;
            
            return true;
        }
        else
        {
            //this->keyboardStatus = KEYSTATUS::NO_STATE;
            
            return false;
        }
    }
    
    bool CoreEvents::CheckKeyStatus( int keyStatus, int key )
    {
        if ( keyStatus == this->keysStatus[key] )
        {
            this->keysStatus[key] = KEYSTATUS::NOT_PRESSED;
            
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
        this->keysStatus[eventsObject.GetKeyNumber( key )] = keyStatus;
    }
    
    int CoreEvents::GetKeyNumber( int key )
    {
        return this->eventsObject.GetKeyNumber( key );
    }
}
