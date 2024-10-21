//
//
//
#pragma once
#include "UIComponent.h"

namespace hive 
{
    namespace ui 
    {
        struct TextComponent : hive::ui::UIComponent
        {
            std::string content;
            int fontSize = 12;

            TextComponent(const std::string& content) : content(content) {}
            ~TextComponent() override = default;

            std::string toString() override;
        }
    }
}