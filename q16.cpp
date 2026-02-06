//A cybersecurity tool verifies prime numbers used in encryption keys. Implement a solution to accept a number and check whether it is prime
#include <iostream>
int main() 
{int num, count=1;
std::cout<<"Enter a number:";
std::cin>>num;
for(int i=2; i<=num/2; i++) 
{if(num%i==0) 
{count=0;
 break;}}
if (count==1) 
{std::cout<<"PRIME\n";} 
else 
{std::cout<<"NOT PRIME\n";}
return 0;}
