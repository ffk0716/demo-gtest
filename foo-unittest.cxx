#include "gtest/gtest.h"
#include "foo.h"

TEST(foo, simple)
{
	EXPECT_EQ(11, plus_5(6));
}
