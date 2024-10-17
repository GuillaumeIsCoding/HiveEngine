//
// Created by guill on 2024-10-16.
//
#ifndef UIRECT_H
#define UIRECT_H

#include <../../ecs/Icomponent.h>

namespace hive
{
    namespace ui
    {
        struct HiveRect : hive::IComponent
        {
            int x, y, width, height;

            ~HiveRect() override = default;

            HiveRect(const int& x, const int& y,
                   const int& width, const int& height)
            : x(x), y(y), width(width), height(height) {}

            std::string toString() override {
                return "UIRect : " + std::to_string(x) + " " + std::to_string(y) +
                    " " + std::to_string(width) + " " + std::to_string(height);
            }
        };
    }

}
#endif //UIRECT_H
