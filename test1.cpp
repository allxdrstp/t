#include <iostream>
#include <string>
#include "fun.h"
#include <gtest/gtest.h>


TEST(BTest, SomeFunc) {
    B b;
    std::string result = b.someFunc("Hello", "World");
    EXPECT_EQ(result, "Hello World.");
}

// Тест для метода f1 класса A
TEST(ATest, F1) {
    A a;
    std::string result = a.f1("Hello", "World");
    EXPECT_EQ(result, "Hello World.");
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
