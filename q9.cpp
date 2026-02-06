//A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a solution to classify the symbol.
#include <iostream>
int main() 
{char ch, ch1;
std::cout<<"Enter a character:";
std::cin>>ch;
ch1=std::toupper(ch);
if (ch1>='0'&& ch1<='9') 
{std::cout<<"NUMBER\n";}

else if (ch1=='A' || ch1=='E' || ch1=='I' || ch1 == 'O' || ch1 =='U') 
{std::cout<<"VOWEL\n";}
    
else if (ch1>='A' && ch1<='Z') 
{std::cout<<"CONSONANT\n";}
    
else 
{std::cout<<"SPECIAL CHARECTOR\n";}
return 0;}
