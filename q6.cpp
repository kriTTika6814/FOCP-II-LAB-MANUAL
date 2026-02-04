//An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and display results.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 float bonus,sal;
 int i, n;

  std::cout<< "enter the number of employees:""\n";
  std::cin>>n;
  for (i=0; i<n; i++)
  {
    std::cout<<"enter the orignal salary of the employee:""\n";
    std::cin>>sal;
    bonus=sal*0.12;
    std::cout<<"employee:"<<i+1<<std::endl<<"basic salary:"<<sal<<std::endl<<"salary after 12% bonus:"<<bonus<<std::endl;
  }

    return 0;}