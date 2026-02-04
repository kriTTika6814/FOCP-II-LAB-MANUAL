//An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute the area of a circle.
#include<iostream>
#include<iomanip>
int main()
{int radius;
float area;
 std::cout<<"enter the radius of the fountain:";
 std::cin>>radius;
 area=3.14*radius*radius;
 std::cout<<"The area is:"<<area;
 return 0;}
