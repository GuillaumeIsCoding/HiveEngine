//
//
//
#pragma once
#include "NodeComponent.h"

namespace hive 
{
    namespace ui 
    {
        struct RootComponent : hive::ui::NodeComponent 
        {
            RootComponent() : NodeComponent(entt::null) {}
            ~RootComponent() override = default;

            std::string toString() override;
        }
    }
}