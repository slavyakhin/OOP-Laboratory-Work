#include <gtest/gtest.h>
#include "../include/function.hpp"
#include <string>

TEST(test_01, basic_test_set) {
    ASSERT_TRUE(function(" ") == 0);
}

TEST(test_02, basic_test_set) {
    ASSERT_TRUE(function("a") == 1);
}

TEST(test_03, basic_test_set) {
    ASSERT_TRUE(function("aioiou") == 6);
}

TEST(test_04, basic_test_set) {
    ASSERT_TRUE(function("a i") == 2);
}

TEST(test_05, basic_test_set) {
    ASSERT_TRUE(function("abra kadabra") == 5);
}

TEST(test_06, basic_test_set) {
    ASSERT_TRUE(function("irish ice cream") == 6);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
