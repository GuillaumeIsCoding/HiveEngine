//
// Created by guill on 2024-10-16.
//

#ifndef UICOLOR_H
#define UICOLOR_H

#include <../../ecs/Icomponent.h>
#include <stdint.h>

namespace hive
{
    namespace ui {
        struct HiveColor : hive::IComponent
        {
            uint8_t r, g, b, a;

            ~HiveColor() override = default;

            HiveColor(const uint8_t& red, const uint8_t& green,
                    const uint8_t& blue, const uint8_t& alpha)
            : r(red), g(green), b(blue), a(alpha) {}

            std::string toString() override {
                return "UIColor : " + std::to_string(r) + " " + std::to_string(g)
                + " " + std::to_string(b) + " " + std::to_string(a);
            }
        };
    }
}
#endif //UICOLOR_H
