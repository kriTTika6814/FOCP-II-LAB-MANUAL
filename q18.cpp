//A String-matching tool validates if IDs are palindromes. Implement a solution to check whether a given ID is a palindrome.
#include <iostream>
int main() 
{std::string s; 
 std::cout<<"enter the sting:";
 std::cin>>s;
 int len=s.length();
 char arr[100];           
 for(int i=0; i<len;i++) 
 {arr[i]=s[i];}
    
int flag=1;
for(int j=0; j<len/2; j++)  
 {if(arr[j] != arr[len-1-j]) 
  {flag=0;  
   break;}}
    
if(flag==0)  
std::cout<<"NO"<<std::endl;

else 
std::cout<<"YES"<<std::endl;  
return 0;}