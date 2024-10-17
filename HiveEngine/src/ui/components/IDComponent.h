//
// Created by guill on 2024-10-17.
//

#ifndef HIVEID_H
#define HIVEID_H

#include <ecs/IComponent.h>
#include <entt/entity/entity.hpp>

namespace hive
{
    namespace ui
    {
        struct IDComponent : hive::IComponent
        {
            std::string value;
            entt::entity element = {entt::null};

            IDComponent(const std::string& value, entt::entity element) : value(value), element(element) {}

            ~IDComponent() override = default;

            std::string toString() override {
                return "HiveID : " + value;
            }
        };
    }
}

#endif //HIVEID_H
