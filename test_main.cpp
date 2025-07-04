#include <gtest/gtest.h>
#include "src/my_functions.h"  

// Add tests
TEST(AddFunctionTest, HandlesPositiveInputs) {
    EXPECT_EQ(add(3, 5), 8);
}
TEST(AddFunctionTest, HandlesNegativeInputs) {
    EXPECT_EQ(add(-3, -2), -5);
}
TEST(AddFunctionTest, HandlesMixedSignInputs) {
    EXPECT_EQ(add(-7, 10), 3);
}
TEST(AddFunctionTest, HandlesZeroInput) {
    EXPECT_EQ(add(0, 5), 5);
    EXPECT_EQ(add(5, 0), 5);
    EXPECT_EQ(add(0, 0), 0);
}

// Subtract tests
TEST(SubtractFunctionTest, HandlesPositiveInputs) {
    EXPECT_EQ(subtract(10, 3), 7);
}
TEST(SubtractFunctionTest, HandlesNegativeInputs) {
    EXPECT_EQ(subtract(-5, -2), -3);
}
TEST(SubtractFunctionTest, HandlesMixedSignInputs) {
    EXPECT_EQ(subtract(-3, 6), -9);
    EXPECT_EQ(subtract(6, -3), 9);
}
TEST(SubtractFunctionTest, HandlesZeroInput) {
    EXPECT_EQ(subtract(0, 7), -7);
    EXPECT_EQ(subtract(7, 0), 7);
    EXPECT_EQ(subtract(0, 0), 0);
}

// GTest main
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
