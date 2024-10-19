//
// Created by guill on 2024-10-17.
//
#include <gtest/gtest.h>
#include <entt/entt.hpp>
#include <string>

#include "ui/components/Components.h"
#include "ecs/ECS.h"

class ComponentsUnitTest : public ::testing::Test
{
protected:
    void SetUp() override
    {
       hive::ECS::init();
    }
    void TearDown() override
    {
        hive::ECS::shutdown();
    }
};

/** ClassComponent Unit Test **/

TEST(ClassComponent, ShouldInitializedWithNoArgument) {
    std::string expected = std::string();
    auto component = hive::ui::ClassComponent();

    EXPECT_EQ(expected, component.value);
}

TEST(ClassComponent, ShouldInitializedWithAString) {
    std::string expected = "expected";
    auto component = hive::ui::ClassComponent(expected);

    EXPECT_EQ(expected, component.value);
}

TEST(ClassComponent, ShouldInitializeWithClassComponent) {
    std::string expected = "expected";
    auto expectedComponent = hive::ui::ClassComponent(expected);
    auto component = hive::ui::ClassComponent(expectedComponent);

    EXPECT_EQ(expected, component.value);
}

TEST(ClassComponent, ShouldAllowChanges) {
    std::string initial =  "initiale";
    std::string expected = "expected";
    auto component = hive::ui::ClassComponent();

    component.value = initial;
    component.value = expected;

    EXPECT_EQ(expected, component.value);
}

TEST(ClassComponent, toStringResult) {
    std::string expected = "UIClass : expected";
    auto component = hive::ui::ClassComponent("expected");

    EXPECT_EQ(expected, component.toString());
}

/** ColorComponent Unit Test **/

TEST(ColorComponent, ShouldInitializedWithFourArguments) {
    uint8_t red = 100; uint8_t green = 0; uint8_t blue = 255; uint8_t opacity = 200;

    auto component = hive::ui::ColorComponent(red, green, blue, opacity);

    EXPECT_EQ(red, component.r);    EXPECT_EQ(green, component.g);
    EXPECT_EQ(blue, component.b);   EXPECT_EQ(opacity, component.a);
}

TEST(ColorComponent, ShouldInitializedWithColorComponent) {
    uint8_t red = 100; uint8_t green = 0; uint8_t blue = 255; uint8_t opacity = 200;

    auto initialComponent = hive::ui::ColorComponent(red, green, blue, opacity);
    auto component = hive::ui::ColorComponent(initialComponent);

    EXPECT_EQ(red, component.r);    EXPECT_EQ(green, component.g);
    EXPECT_EQ(blue, component.b);   EXPECT_EQ(opacity, component.a);
}

TEST(ColorComponent, ShouldAllowChanges) {
    uint8_t red = 100; uint8_t green = 0; uint8_t blue = 255; uint8_t opacity = 200;

    auto component = hive::ui::ColorComponent(10, 30, 167, 104);
    component.r = red; component.g = green; component.b = blue; component.a = opacity;

    EXPECT_EQ(red, component.r);    EXPECT_EQ(green, component.g);
    EXPECT_EQ(blue, component.b);   EXPECT_EQ(opacity, component.a);
}

TEST(ColorComponent, toStringResult) {
    uint8_t red = 100; uint8_t green = 0; uint8_t blue = 255; uint8_t opacity = 200;
    std::string expected = "UIColor : 100 0 255 200";
    auto component = hive::ui::ColorComponent(red, green, blue, opacity);

    EXPECT_EQ(expected, component.toString());
}

/** IDComponent Unit Test **/

/** NodeComponent Unit Test **/



/** RootComponent Unit Test **/

/** RectComponent Unit Test **/

/** TextComponent Unit Test **/