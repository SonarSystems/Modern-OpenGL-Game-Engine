#include "EventsInterface.hpp"

namespace SonarGameEngine
{
    void EventsInterface::Construct( )
    {
        coreSettings = CoreSettings::getInstance( );
    }
    
    int EventsInterface::GetKeyNumber( int key )
    {
        std::multimap<int, int>::iterator itr = keyTranslations.find( key );
        
        return itr->second;
    }
}
