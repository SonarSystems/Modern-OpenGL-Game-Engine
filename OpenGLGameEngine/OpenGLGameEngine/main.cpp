#include <iostream>

#include "SonarGameEngine/SonarGameEngine.hpp"

USING_NAMESPACE_SONAR_GAME_ENGINE;

int main( int argc, char *argv[] )
{
    CoreEngine ce;
    
    ce.Init( );
    
    while ( ce.WindowIsOpen( ) )
    {
        std::cout << ce.getEvents( )->CheckKeyboardStatus( KEYSTATUS::PRESSED ) << std::endl;
        
        /*
        if ( ce.getEvents().Keyboard().Pressed( ) )
        {
            if ( ce.getEvents().Keyboard().Key() == 'A' )
            {
                
            }
        }
        */
        
        //std::cout << ce.getCoreSettings()->GetWindowTitle() << std::endl;
        ce.GameLoop( );
    }
    
    ce.CleanUp( );
    
    return EXIT_SUCCESS;
}
