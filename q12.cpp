//A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to check the triangle type based on its sides.
#include<iostream>
#include<iomanip>
int main()
{
 float side1, side2, side3;
 int x = 1;
 std::cout<<"ENTER THE THREE SIDES OF THE TRIANGLE:";
 std::cin>>side1>>side2>>side3;


if (side1==side2 && side2==side3)
 {
  std::cout<<"THE TRIANGLE IS AN QUILATERAL TRIANGLE:";}

else if(side1!=side2 && side2!=side3 && side1!=side1)
{
  std::cout<< "THE TRIANGLE IS A SCALENE TRIANGLE.";}
  
else if ((side1==side2 && side2!=side3) || (side2==side3 && side3!=side1) || (side3==side1 && side1!=side2))
  {
   std::cout<<"THE TRAINGLE IS AN ISOSCELES TRIANGLE.";}
       
    return 0;}
