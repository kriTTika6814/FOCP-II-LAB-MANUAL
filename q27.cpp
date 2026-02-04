//A supermarket software maintains item price lists. Implement a solution to store the prices of 10 items in an array and display the maximum price.
#include <iostream>
int main() 
{int num=10;
int prices[num];
std::cout<<"Enter prices for 10 items:";
for(int i=0; i<num; i++)
 {std::cin>>prices[i];}
    
int max=prices[0];
for (int i=1; i<num;i++)
{if (prices[i]>max) 
    {max=prices[i];}}
    
std::cout<<"Maximum price:"<<max;
return 0;}
