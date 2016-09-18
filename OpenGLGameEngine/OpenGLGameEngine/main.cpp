#include <iostream>

#include "Core/CoreEngine.hpp"

using namespace SonarGameEngine;

int main( int argc, char *argv[] )
{
    CoreEngine ce;
    
    ce.Init( );
    
    while ( true )
    {
        if ( !ce.GameLoop( ) )
        {
            break;
        }
    }
    
    ce.CleanUp( );
    
    return EXIT_SUCCESS;
}
