#include <gtest/gtest.h>

#include "Calculator.h"

TEST(CalculatorTest, testValue) {
	Calculator calc;
	ASSERT_EQ(0, calc.value());
}

TEST(CalculatorTest, testAdd) {
	Calculator calc;
	calc.add(10);
	ASSERT_EQ(10, calc.value());
}

TEST(CalculatorTest, testClear) {
	Calculator calc;
	calc.add(10);
	calc.clear();
	ASSERT_EQ(0, calc.value());
}

TEST(CalculatorTest, testSub) {
	Calculator calc;
	calc.sub(10);
	ASSERT_EQ(-10, calc.value());
}

TEST(CalculatorTest, testCalculator) {
	Calculator calc;
	calc.add(10);
	calc.sub(5);
	ASSERT_EQ(5, calc.value());
}

TEST(CalculatorTest, testMul) {
	Calculator calc;
	calc.add(3);
	calc.mul(4);
	ASSERT_EQ(12, calc.value());
}

TEST(CalculatorTest, testDiv) {
	Calculator calc;
	calc.add(10);
	calc.div(3);
	ASSERT_EQ(3, calc.value());
}
