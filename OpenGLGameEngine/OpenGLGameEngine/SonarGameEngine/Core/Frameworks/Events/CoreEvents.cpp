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
        this->keyboardStatus = SGE_KEY_NO_STATE;
        
        this->eventsObject.Construct( );
        
        for ( int i = 0; i < sizeof( *this->keysStatus ); i++ )
        {
            this->keysStatus[i] = SGE_KEY_NO_STATE;
        }
        
        this->eventsObject
    }
    
    bool CoreEvents::Keyboard( int keyStatus )
    {
        if ( keyStatus == this->keyboardStatus )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool CoreEvents::Keyboard( int keyStatus, int key )
    {
        if ( keyStatus == this->keysStatus[key] )
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
