/*A typing practice app displays the alphabets in pyramid form. Implement a solution to display:
A
AB
ABC
ABCD
ABCDE
*/
#include <iostream>
int main() 
{for(int r=1; r<=5; r++) 
{for (int c= 1; c<=r; c++) 
{ std::cout<<char('A' + c-1);}
  std::cout << "\n";}
return 0;}
