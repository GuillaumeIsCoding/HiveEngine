//
// Created by guill on 2024-10-16.
//

#ifndef UICLASS_H
#define UICLASS_H

#include <ecs/Icomponent.h>

namespace hive
{
    struct UIClass : IComponent
    {
        std::string value;

        ~UIClass() override = default;

        UIClass(const std::string& value = std::string()) : value(value) {}

        std::string toString() override {
            return "UIClass : " + value;
        }
    };
}
#endif //UICLASS_H
