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
        struct HiveID : hive::IComponent
        {
            std::string value;
            entt::entity element = {entt::null};

            ~HiveID() override = default;

            HiveID(const std::string& value, entt::entity element) : value(value), element(element) {}

            std::string toString() override {
                return "HiveID : " + value;
            }
        };
    }


}

#endif //HIVEID_H
