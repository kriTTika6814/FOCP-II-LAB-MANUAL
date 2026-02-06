//A registration system rejects usernames that contain spaces or special characters. Write a C++ program to validate whether a given string can be accepted as a username.
#include <iostream>
int main() 
{std::string username;
 std::cout<<"Enter username:";
 std::getline(std::cin, username);
 int count= 1;
for (int i=0; i<username.length(); i++) 
{char c=username[i];
if (!std::isalnum(c)) 
{std::cout<<"Invalid username";
 count=0;             
 break;}}
 
 if(count==1)       
 std::cout<<"Valid username";
 return 0;}