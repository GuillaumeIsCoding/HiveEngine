//
//
//
#pragma once
#include <ecs/Icomponent.h>

namespace hive
{
    namespace ui 
    {
        struct ColorComponent : hive::IComponent 
        {
            uint8_t r, g, b, a;

            ColorComponent(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) : r(red), g(green), b(blue), a(alpha) {}
            ~ColorComponent() override = default;

            std::string toString() override;
        }
    }
}
