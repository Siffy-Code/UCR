//circle.cpp
#include "circle.hpp"

#include <cmath>
# define M_PI 3.14159265358979323846
double Circle::area() const {return M_PI * radius * radius;}
double Circle::perimeter() const {return 2 * M_PI * radius;}