//
// Created by guill on 2024-10-17.
//

#ifndef UISYSTEM_H
#define UISYSTEM_H

#include <ecs/system.h>

namespace hive {
    namespace ui {
        class UiSystem : hive::System {
        public:
            ~UiSystem() override = default;

            void init() override;
            void update(float deltaTime) override;

        };
    } // ui
} // hive

#endif //UISYSTEM_H
