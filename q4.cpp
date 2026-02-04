//A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase. Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.
#include<iostream>
#include<iomanip>
int main()
{int i, items, itemno, quantity;
 float unitprice, totalamount, finalamount, sum;
 std::cout<<"enter the number of items:";
 std::cin>>items;
 for(int i = 0; i < items; i++) 
 {std::cout<<"enter the itemno, quantity and unitprice";
  std::cin>>itemno>>quantity>>unitprice; 
  sum= unitprice*quantity;
  totalamount=totalamount+sum;
  std::cout<<"itemno:"<<std::setw(20)<<std::left<<itemno<<std::endl<<"quantity:"<<std::setw(20)<<std::left<<quantity<<std::endl<<"unit price:"<<std::setw(20)<<std::left<<unitprice<<std::endl;}

  finalamount = totalamount * 0.8;

  std::cout<<"total amount:"<<std::setw(20)<<std::left<<totalamount<<std::endl<<"final amount after 20%% discount:"<<std::setw(20)<<std::left<<finalamount;

  return 0;}
