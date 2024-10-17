//
// Created by guill on 2024-10-17.
//

#ifndef TEXTCOMPONENT_H
#define TEXTCOMPONENT_H

#include <ecs/IComponent.h>

namespace hive
{
    namespace ui
    {
        struct TextComponent : public IComponent
        {
            std::string textContent;


            TextComponent() = default;
            TextComponent(const TextComponent&) = default;
            TextComponent(const std::string& content) : textContent(content) {}

            ~TextComponent() override = default;

            std::string toString() override {
                return "Text: " + textContent;
            }
        };
    }
}

#endif //TEXTCOMPONENT_H
