//
//
//
#pragma once
#include <entt/entity/entity.hpp>
#include <ecs/Icomponent.h>

namespace hive 
{
    namespace ui 
    {
        struct NodeComponent : hive::IComponent
        {
            entt::entity parent = {entt::null};
            std::vector<entt::entity> children = {};

            NodeComponent(entt::entity parent) : parent(parent) {}
            ~NodeComponent() override = default;

            std::string toString() override;
        }
    }
}