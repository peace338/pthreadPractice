#include "gtest/gtest.h"
extern "C"
{
    #include "a_lib/add/add.h"
}

TEST(test_add, test1) {

    EXPECT_EQ(add(1,2), 3);

}