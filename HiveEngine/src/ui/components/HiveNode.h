//
// Created by guill on 2024-10-16.
//

#ifndef UINODE_H
#define UINODE_H

#include <../../../dep/entt/src/entt/entity/entity.hpp>
#include <vector>
#include <../../ecs/Icomponent.h>

namespace hive
{
    namespace ui
    {
        struct HiveNode : hive::IComponent
        {
            entt::entity parent = {entt::null};
            std::vector<entt::entity> children = {};

            ~HiveNode() override = default;

            HiveNode(const entt::entity& parent) : parent(parent) {};

            std::string toString() override {
                return "UINode";
            };
        };
    }

}
#endif //UINODE_H
