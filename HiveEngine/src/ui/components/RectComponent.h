//
//
//
#pragma once
#include "UIComponent.h"

namespace hive 
{
    namespace ui 
    {
        struct RectComponent : hive::ui::UIComponent 
        {
            int width, height;

            ~RectComponent() override = default;

            std::string toString() override;
        }
    }
}