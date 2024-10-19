//
// Created by guill on 2024-10-16.
//

#ifndef UICLASS_H
#define UICLASS_H

#include <ecs/IComponent.h>

namespace hive
{
    namespace ui
    {
        struct ClassComponent : hive::IComponent
        {
            std::string value;

            ClassComponent(const ClassComponent&) = default;
            ClassComponent(const std::string& value = std::string()) : value(value) {}

            ~ClassComponent() override = default;

            std::string toString() override {
                return "UIClass : " + value;
            }
        };
    }
}
#endif //UICLASS_H
