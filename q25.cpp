/*A web-based application enforces strong password policies during user registration to improve account security.
The system requires that every password must satisfy the following conditions:
Contain at least one uppercase letter (A–Z)
Contain at least one lowercase letter (a–z)
Contain at least one digit (0–9)
contain at least one special character from the set @ # $ % ! & *
You are required to develop the code so that the password validation logic can be implemented in the application.*/
#include <iostream>
int main() 
{std::string password;
 std::cout<<"Enter password:";
 std::getline(std::cin, password);
 int i=0;
 int upper=0, lower=0, digit=0, special=0;
while(i<password.length()) 
{char c = password[i];
{if(std::isupper(c)) 
 {upper = 1;}
else if(std::islower(c)) 
{lower = 1;}
else if(std::isdigit(c)) 
digit = 1;
else
{special = 1;}
i++;}}

if (upper && lower && digit && special) 
{std::cout<<"VALID\n";} 
else 
{std::cout<<"INVALID\n";}
 if(upper==0) 
 std::cout<<"Missing uppercase\n";
 if(lower==0) 
 std::cout<<"Missing lowercase\n";
 if(digit==0) 
 std::cout<<"Missing digit\n";
 if(special==0) 
 std::cout<<"Missing special\n";
return 0;}
