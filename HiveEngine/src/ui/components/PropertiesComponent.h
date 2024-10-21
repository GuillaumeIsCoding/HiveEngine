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
        struct PropertiesComponent : hive::IComponent 
        {
            bool clickable = false;

            ~PropertiesComponent() override = default;

            std::string toString() override;
        }
    }
}