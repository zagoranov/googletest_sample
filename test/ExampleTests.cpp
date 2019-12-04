#include "../Example.hpp"

#include <gtest/gtest.h>

struct ExampleTests 
    : public ::testing::Test {
        
        int *x;

    int GetX() { return *x; }

    void SetUp() override {
        fprintf(stderr, "СТАРТУЕМ!\n");
        x = new int(42);
    }

    void TearDown() override {
        fprintf(stderr, "СТОПУЕМ!\n");
        delete x;
    }
};


TEST_F(ExampleTests, SomeFuncTest1) {
    int y = 7; 
    int sum = 100;
    int expecting = GetX() + y + sum;
    EXPECT_EQ(
        expecting,
        SomeFunc(GetX(), y, sum)
    );
}

TEST(OtherTest, SomeFuncTest2) {
    int x = 5; 
    int y = 7; 
    int sum = 100;
    int expecting = x + y + sum + 1;
    EXPECT_EQ(
        expecting,
        SomeFunc(x, y, sum)
    );
}
