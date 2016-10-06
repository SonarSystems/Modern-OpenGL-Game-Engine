#include <iostream>

#include "SonarGameEngine/SonarGameEngine.hpp"

USING_NAMESPACE_SONAR_GAME_ENGINE;

int main( int argc, char *argv[] )
{
    CoreEngine ce;
    
    ce.Init( );
    
    while ( ce.WindowIsOpen( ) )
    {
        ce.GameLoop( );
    }
    
    ce.CleanUp( );
    
    return EXIT_SUCCESS;
}
