//
//
//
#pragma once
#include <string>
#include "ecs/Icomponent.h"

namespace hive 
{
    namespace ui 
    {
        struct UIComponent : hive::IComponent 
        {
            int x, y;

            ~UIComponent() override = default;

            std::string toString() override;
        }
    }
}
