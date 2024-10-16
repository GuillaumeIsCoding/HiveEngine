//
// Created by guill on 2024-10-16.
//

#ifndef COMPONENTS_H
#define COMPONENTS_H
#include "IComponent.h"
#include <string>
#include "core/uuid.h"

namespace hive
{
    struct IDComponent : IComponent
    {
        UUID ID;

        IDComponent() = default;
        IDComponent(const IDComponent&) = default;
        IDComponent(const UUID& uuid) : ID(uuid) {};

        ~IDComponent() override = default;

        std::string toString() override {
            return "UUID : " + std::string(ID) + " ";
        }
    };

    struct TagComponent : IComponent
    {
        std::string Tag = "";

        TagComponent() = default;
        TagComponent(const TagComponent&) = default;
        TagComponent(const std::string& tag) : Tag(tag) {}

        ~TagComponent() override = default;

        std::string toString() override {
            return "Tag : " + Tag + " ";
        }
    };
}

#endif //COMPONENTS_H
