//A student wants to swap the values of two variables for practising coding basics. Implement a solution to swap two numbers using different techniques.
#include <iostream>
int main() 
{ int a, b;
  std::cout<<"enter the 2 numbers:";
  std::cin>>a>>b;
  std::cout<<"Original: a="<<a<<" "<<"b="<< b<<"\n";
  int x=1, choice;
  while(x==1)
  {std::cout<<"1. temp variable"<<std::endl<<"2. using addition subtraction"<<std::endl<<"3. using multiplication and division"<<std::endl<<"4.exit";
   std::cout<<"\nenter your choice 1/2/3/4:";
   std::cin>>choice;

if(choice==1)
{int temp=a;
  a=b;
  b=temp;
  std::cout<<"After: a="<<a<<" "<<"b="<<b<< "\n";}

else if (choice==2)
{ a=a+b;   
  b=a-b;      
  a=a-b;  
  std::cout<<"After: a="<<a<<" "<<"b="<< b<<"\n\n";}

else if (choice==3)
{ a=a*b;   
  b=a/b;    
  a=a/b;    
  std::cout<<"After: a="<<a<<" "<<
  "b="<<b<<"\n";}

else if(choice==4)
{std::cout<<"exiting";
 x=0;
 break;}

else
{std::cout<<"choose a valid option\n";}}
 return 0;}
