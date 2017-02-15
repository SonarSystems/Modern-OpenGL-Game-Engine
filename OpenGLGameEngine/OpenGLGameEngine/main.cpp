#include <iostream>

#include "SonarGameEngine/SonarGameEngine.hpp"

USING_NAMESPACE_SONAR_GAME_ENGINE;

int main( int argc, char *argv[] )
{
    CoreEngine ce;
    
    ce.Init( );
    
    while ( ce.WindowIsOpen( ) )
    {
        if ( ce.getEvents( )->CheckKeyboardStatus( KEYSTATUS::KB_PRESSED ) )
        {
            if (ce.getEvents( )->CheckKeyStatus( KEYSTATUS::KB_PRESSED, KEYS::Up ) )
            {
                //std::cout << "A pressed" << std::endl;
                
            }
        }
        else if ( ce.getEvents( )->CheckKeyboardStatus( KEYSTATUS::KB_RELEASED ) )
        {
            //std::cout << "Release" << std::endl;
            
        }
        
        if ( ce.getEvents()->CheckMouseButtonStatus( MOUSE_BUTTONS::MOUSEKEY_ANY, MOUSE_BUTTON_STATUS::MOUSEKEY_PRESSED ) )
        {
            ce.getEvents( )->ResetTime();
        }
        
        std::cout << ce.getEvents()->GetTime( ) << std::endl;
        
        //std::cout << ce.getCoreSettings()->GetWindowTitle() << std::endl;
        ce.GameLoop( );
    }
    
    ce.CleanUp( );
    
    return EXIT_SUCCESS;
}
