//
// Created by guill on 2024-10-16.
//
#ifndef UIROOT_H
#define UIROOT_H

#include "NodeComponent.h"

namespace hive
{
    namespace ui
    {
        struct RootComponent : NodeComponent
        {

            RootComponent() : NodeComponent({}) {}

            ~RootComponent() override = default;

            std::string toString() override {
                return "UIRoot";
            }
        };
    }
}

#endif //UIROOT_H
