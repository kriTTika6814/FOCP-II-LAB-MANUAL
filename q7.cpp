//A game compares three players' scores to find who is ahead. Implement a solution to accept three scores and identify the winner.
#include<iostream>
#include<iomanip>
int main()
{int num1, num2, num3;
 std::cout<<"enter the 3 numbers:";
 std::cin>>num1>>num2>>num3;
 if(num1!=num2 && num2!=num3)
 {
    if(num1>num2 && num1>num3)
    {
        std::cout<<"the greatest of the three numbers is:"<<num1;}
    else if(num2>num1 && num2>num3)
    { 
        std::cout<<"the greatest of the three number is:"<<num2;}
    else 
    {
        std::cout<<"the greatest of the three number is:"<<num3;}}
else
{
    std::cout<<"choose a different set of numbers that are not equal";}
  
    return 0;}
