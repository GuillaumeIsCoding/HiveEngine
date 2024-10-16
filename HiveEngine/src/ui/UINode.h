//
// Created by guill on 2024-10-16.
//

#ifndef UINODE_H
#define UINODE_H
#include <entt/entity/entity.hpp>
#include <vector>
#include <ecs/Icomponent.h>

namespace hive
{
    struct UINode : IComponent
    {
        entt::entity parent = {entt::null};
        std::vector<entt::entity> children = {};

        ~UINode() override = default;

        UINode(const entt::entity& parent) : parent(parent) {};

        std::string toString() override {
            return "UINode";
        };
    };
}
#endif //UINODE_H
