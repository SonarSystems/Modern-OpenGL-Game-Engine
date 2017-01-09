#pragma once

#define GLEW_STATIC
#include <GL/glew.h>

#include <vector>

#include "../../CoreSettings.hpp"

#include <map>

#include "KEYBOARD DEFINITIONS.hpp"
#include "MOUSE DEFINITIONS.hpp"

namespace SonarGameEngine
{
    class EventsInterface
    {
    public:
        void Construct( );
        
        virtual int GetKeyNumber( int key );
        
        virtual int GetMouseButtonNumber( int key );

    protected:
        CoreSettings *coreSettings;
        
        std::multimap<int, int> keyTranslations;
        
        std::multimap<int, int> mouseKeyTranslations;
        
    };
}
