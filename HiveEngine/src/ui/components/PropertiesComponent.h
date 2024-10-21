//
//
//
#pragma once
#include "ecs/Icomponent.h"

namespace hive 
{
    namespace ui 
    {
        struct PropetiesComponent : hive::IComponent 
        {
            bool isClickable = false;
            bool isDragable  = false;

            ~PropetiesComponent() override = default;

            std::string toString() override;
        }
    }
}