#include "pch.h"
#include "D:\Учеба\C++\Занятия\Lesson37_(24.03.2024)\Lesson37_(24.03.2024)\math.cpp"

TEST(TestFactorial, TestInt) {
    ASSERT_EQ(120, factorial(5));
}
TEST(TestCaseName, TestFloat) {
    ASSERT_FLOAT_EQ(2.5, divAtoB(5.0, 2.0));
}

TEST(TestCaseName, TestBool) {
    ASSERT_EQ(1, isPositiv(5));
}

TEST(TestCaseName, TestString) {
    std::string str = "12345";
    std::string res = "54321";
    ASSERT_TRUE(res == reverseStr(str));
}

TEST(TestCaseName, TestVector) {
    std::vector<int> vec = {1, 4, 8, 3};
    std::vector<int> res = { 3, 6, 10, 5};
    ASSERT_TRUE(res == increase_vector(vec, 2));
}