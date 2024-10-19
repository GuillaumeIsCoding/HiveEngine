//
// Created by guill on 2024-10-16.
//
#ifndef UIRECT_H
#define UIRECT_H

#include <ecs/IComponent.h>

namespace hive
{
    namespace ui
    {
        struct RectComponent : hive::IComponent
        {
            int x, y, width, height;

            RectComponent() = default;
            RectComponent(const RectComponent&) = default;
            RectComponent(const int& x, const int& y,
                   const int& width, const int& height)
            : x(x), y(y), width(width), height(height) {}

            ~RectComponent() override = default;

            std::string toString() override {
                return "UIRect : " + std::to_string(x) + " " + std::to_string(y) +
                    " " + std::to_string(width) + " " + std::to_string(height);
            }
        };
    }

}
#endif //UIRECT_H
