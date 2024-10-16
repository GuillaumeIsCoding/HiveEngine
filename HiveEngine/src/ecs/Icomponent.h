//
// Created by GuillaumeIsCoding on 9/4/2024
//
#pragma once
#include <string>

namespace hive
{
    struct IComponent {
        virtual ~IComponent() = default;
        virtual std::string toString() = 0;
    };
}