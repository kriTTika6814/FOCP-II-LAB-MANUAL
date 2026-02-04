//A payroll system maintains employee salary records. Implement a solution to accept salary of 10 employees in an array, compute total salary and average salary, then display the result.
#include <iostream>
int main() 
{int num=10;
 float total=0, average=0;
 int emp[num];
 std::cout<<"Enter salary of 10 employees:";
 for(int i=0; i<num; i++)
 {std::cin>>emp[i];}
 for (int i=0; i<num;i++)
 {total=total+emp[i];}
 average=total/10;
 std::cout<<"The total salary is:"<< total<< std::endl<<"The average salary is:"<<average;
 return 0;}
