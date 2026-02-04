//A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a leap year or not.
#include<iostream>
#include<iomanip>
int main()
{int year;
 std::cout<<"enter the year:";
 std::cin>>year;
 if(year%4==0)
 {
     std::cout<<"it is a leap year"<<std::endl<<"February has 29 days";}

else
{
    std::cout<<"it is not leap year"<<std::endl<<"February does not have 29 days";}
  
    return 0;}