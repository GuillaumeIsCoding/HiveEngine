//
//
//
#pragma once
#include "ecs/Icomponent.h"

namespace hive 
{
    namespace ui 
    {
        struct UIComponent : hive::IComponent 
        {
            int x, y;

            virtual ~UIComponent() = default;

            virtual std::string toString() = 0;
        }
    }
}
