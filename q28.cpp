//A data processing system classifies even and odd inputs separately. Implement a solution to store 5 elements in an array, compute sum of all even and sum of all odd numbers
#include <iostream>
int main() 
{ int oddeven[5];
 int eventotal=0;
 int oddtotal=0;
 std::cout<<"Enter the 5 numbers of your choice: ";
 for(int i=0; i<5; i++)
  {std::cin >> oddeven[i];}

 for(int i=0; i<5; i++) 
 {if(oddeven[i] % 2 == 0) 
  eventotal=eventotal+oddeven[i];
  else
  oddtotal = oddtotal + oddeven[i];}

std::cout<<"Sum of odd numbers is:"<<oddtotal<<std::endl<<"Sum of even numbers is:"<<eventotal<<std::endl;
return 0;}
