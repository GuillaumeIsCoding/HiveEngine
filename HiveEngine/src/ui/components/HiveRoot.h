//
// Created by guill on 2024-10-16.
//
#ifndef UIROOT_H
#define UIROOT_H

#include "UINode.h"

namespace hive
{
    namespace ui
    {
        struct HiveRoot : hive::UINode
        {
            ~HiveRoot() override = default;

            HiveRoot() : HiveNode(entt::null) {}

            std::string toString() override {
                return "UIRoot";
            }
        };
    }
}

#endif //UIROOT_H
