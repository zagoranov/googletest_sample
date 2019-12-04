#include <gtest/gtest.h>

int someint = 5;
bool f() { 
    someint = 3;
    return true; }

TEST(SomeTrueTest, DemonstrateTestMacros) {
    EXPECT_TRUE(true);
    ASSERT_TRUE(true);
    EXPECT_TRUE(1);
    EXPECT_EQ(true, 1);
    EXPECT_EQ(false, f()) << "Func failed, someint=" << someint;
}

