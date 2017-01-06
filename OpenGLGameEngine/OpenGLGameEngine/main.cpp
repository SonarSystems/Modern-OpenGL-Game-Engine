#include <iostream>

#include "SonarGameEngine/SonarGameEngine.hpp"

USING_NAMESPACE_SONAR_GAME_ENGINE;

int main( int argc, char *argv[] )
{
    CoreEngine ce;
    
    ce.Init( );
    
    while ( ce.WindowIsOpen( ) )
    {
        //std::cout << KEYS::C << std::endl;
        
        //std::cout << ce.getEvents()->GetKeyNumber(SDLK_a) << std::endl;
        
        if (ce.getEvents( )->CheckKeyboardStatus( KEYSTATUS::PRESSED ))
        {
            if (ce.getEvents( )->CheckKeyStatus(KEYSTATUS::PRESSED, KEYS::A))
            {
                std::cout << "A pressed" << std::endl;
            }
        }
        
        
        
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
