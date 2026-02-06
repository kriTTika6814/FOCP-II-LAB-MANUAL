/*A board displays reverse seating layouts for events. Implement a solution to print:
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5*/
#include <iostream>
int main() 
{for(int r=5; r>=1; r--) 
 {for (int c=5; c>=6-r; c--) 
  {std::cout<<c<<" ";}
   std::cout <<"\n";}
 return 0;}
