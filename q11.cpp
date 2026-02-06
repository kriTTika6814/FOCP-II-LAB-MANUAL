//A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total expenses and apply a discount accordingly.
#include <iostream>
int main() 
{int items;
float unit, total, discount=0, final;
std::cout<<"Enter number of items:";
std::cin>>items;
std::cout<<"Enter unit price:";
std::cin>>unit;
total=items*unit;
std::cout<<"total:"<<total<<std::endl;
if(total>1000) 
{discount=(total*10)/100;
final=total-discount;
std::cout<<"Final amount after discount:"<<final<<"\n";} 

else 
{std::cout<<"No discount\n";
 std::cout << "Final amount:"<<total<<"\n";}
return 0;}
