//A network security system generates prime numbers in a range for encryption key pools. Implement a solution to find all prime numbers within a given range
#include <iostream>
int main() 
{int num1, num2;
std::cout<<"Enter the two numbers:";
std::cin>>num1>>num2;
for(int i=num1; i<=num2; i++) 
{int count=1;                     
for(int j=2; j<=i/2; j++) 
{if(i%j==0) 
{count=0;
break;}}
        
if (count==1) 
{std::cout<<i<<std::endl;}}
std::cout<<"\n";
return 0;}
