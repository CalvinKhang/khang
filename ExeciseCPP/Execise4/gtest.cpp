#include"template.cpp"
#include <gtest/gtest.h>
 
TEST(Template_function, Random) { 
    ASSERT_EQ(30, sum<int>(10,20));
    ASSERT_EQ(19, sum<int>(9,10));
    ASSERT_EQ(3, sum<int>(1,2));
    ASSERT_EQ(0, sum<int>(0,0));
}

TEST(Template_Variadic_Function, Random){
    ASSERT_EQ(10, function_sum<int>(1,2,3,4));
    ASSERT_EQ(21, function_sum<int>(1,2,3,4,5,6));
    ASSERT_EQ(3, function_sum<int>(1,2.05));
    ASSERT_EQ(0, function_sum<int>(0));
}

TEST(Template_Class, Random){
    CALCULATOR<int> templateClass1(6,9);
    CALCULATOR<int> templateClass2(10,-3);
    ASSERT_EQ(15,templateClass1.calc_add());
    ASSERT_EQ(-3,templateClass1.calc_sub());
    ASSERT_EQ(7,templateClass2.calc_add());
    ASSERT_EQ(13, templateClass2.calc_sub());
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}