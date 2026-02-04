//A weather monitoring app records 30-day temperature logs. Implement a solution to store daily temperatures in an array and display the minimum temperature for the month.
#include <iostream>
int main() 
{int num=30;
int temp[num];
std::cout<<"Enter temperature of 30 days:";
for(int i=0; i<num; i++)
 {std::cin>>temp[i];}
    
int min=temp[0];
for (int i=1; i<num;i++)
{if (temp[i]<min) 
    {min=temp[i];}}
    
std::cout<<"Minimum temperature:"<<min;
return 0;}
