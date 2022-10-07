#include "gtest/gtest.h"
#include "../lib/Methods.h"


Methods methods;
TEST(TestMethods, TestAddPositives) {
	int added = methods.add(1, 1);
	EXPECT_EQ(added, 2);
}

TEST(TestMethods, TestAddNegatives) {
	int added = methods.add(-1, -1);
	EXPECT_EQ(added, -2);
}

TEST(TestMethods, TestMultiplyPositives) {
	int multiplied = methods.multiply(2, 2);
	EXPECT_EQ(multiplied, 4);
}

TEST(TestMethods, TestMultiplyNegatives) {
	int multiplied = methods.multiply(-2, -2);
	EXPECT_EQ(multiplied, 4);
}

TEST(TestMethods, TestSubtractPositives) {
	int substracted = methods.substract(4, 3);
	EXPECT_EQ(substracted, 1);
}

TEST(TestMethods, TestSubtractNegatives) {
	int substracted = methods.substract(-4, -3);
	EXPECT_EQ(substracted, -1);
}