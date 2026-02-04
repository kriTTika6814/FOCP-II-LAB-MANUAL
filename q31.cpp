//A manufacturing QC system checks defect codes divisible by both 3 and 5.. Implement a solution to store 5 elements in an array and count how many numbers are divisible by 3 and 5
#include <iostream>
int main() 
{int num=5;
 int count=0;
 int numbers[num];
 std::cout<<"Enter 5 numbers for the array:";
 for(int i=0; i<num; i++)
 {std::cin>>numbers[i];}
  for (int i=0; i<num;i++)
  {if (numbers[i]%15==0)
  count=count+1;}
  std::cout<<"the total number of numbers divisible by both 3 and 5:"<<count;
  return 0;}
