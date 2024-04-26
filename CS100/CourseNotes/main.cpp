//main.cpp
//unit testing portion of in-class exercise:
//Write unit tests for area and perimeter functions
#include <iostream>
#include "circle.hpp"
#include <cmath>
#include "gtest/gtest.h"
# define M_PI 3.14159265358979323846
using namespace std;
int main(){
Circle c(10);
cout << "A circle of radius 10 has an area of " << c.area() << endl;
cout << "A circle of radius 10 has a perimeter of " << c.perimeter() << endl;
return 0;
}
//should use expect_double_eq
TEST(DimensionSuite,AreaStdCase){
    Circle test(2);
    double result = test.area();
    double testVal = 4 * M_PI;
    EXPECT_EQ(result,testVal);
}
TEST(DimensionSuite,AreaLgCase){
    Circle test(999);
    double result = test.area();
    double testVal = 999 * 999 * M_PI;
    EXPECT_EQ(result,testVal);
}
TEST(DimensionSuite,AreaOneCase){
    Circle test(1);
    double result = test.area();
    double testVal = M_PI;
    EXPECT_EQ(result,testVal);
}
TEST(DimensionSuite,AreaZeroCase){
    Circle test(0);
    double result = test.area();
    EXPECT_EQ(result,0);
}
TEST(DimensionSuite,AreaNegCase){
    Circle test(-1);
    EXPECT_DEATH(test.area(),"cannot have negative area");
}
TEST(DimensionSuite,PerimStdCase){
    Circle test(2);
    double result = test.perimeter();
    double testVal = 2*M_PI*2;
    EXPECT_EQ(result,testVal);
}
TEST(DimensionSuite,PerimLgCase){
    Circle test(999);
    double result = test.perimeter();
    double testVal = 2*M_PI*999;
    EXPECT_EQ(result,testVal);
}
TEST(DimensionSuite,PerimOneCase){
    Circle test(1);
    double result = test.perimeter();
    double testVal = 2*M_PI;
    EXPECT_EQ(result,testVal);
}
TEST(DimensionSuite,PerimZeroCase){
    Circle test(0);
    double result = test.perimeter();
    EXPECT_EQ(result,0);
}
TEST(DimensionSuite,PerimNegCase){
    Circle test(-1);
    EXPECT_DEATH(test.perimeter(),"cannot have negative perimeter");
}