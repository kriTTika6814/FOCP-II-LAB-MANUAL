//The school report card system stores subject marks for each student. Implement a solution to accept marks in 5 subjects, compute the total and percentage, and display the result
#include <iostream>
int main() 
{ float first, second, third, fourth, fifth;
  std::cout<<"enter the marks of 5 subjects out of 100:";
  std::cin>>first>>second>>third>>fourth>>fifth;
  float total= first+second+third+fourth+fifth;
  float percentage= (total/500)*100;
  std::cout<<"the total marks achieved:"<<total<<std::endl<<"percentage achieved:"<<percentage;
  return 0;}
