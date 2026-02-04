//A stock market app tracks first and second highest stock values. Implement a solution to find the largest and second largest number in an array of size 5.
#include <iostream>
int main() 
{int num = 5;
 int numbers[num];
 std::cout<<"Enter 5 numbers for the array: ";
 for(int i= 0; i<num; i++)
 std::cin>>numbers[i];
 int max=numbers[0];
 int second=numbers[1];
    
if(max<second) 
{ int temp=max;
  max =second;
  second =temp;}

for(int i=2; i<num; i++) 
{if(numbers[i]>max) 
    {second=max;
    max=numbers[i];}
else if(numbers[i]>second && numbers[i]<max) 
{ second = numbers[i];}}  
    
std::cout<<"Largest:"<< max<<std::endl<<"Second Largest:"<<second;
 return 0;}
