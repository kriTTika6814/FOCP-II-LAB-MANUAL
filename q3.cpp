//A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to convert Fahrenheit temperature into Centigrade or vice versa.
#include<iostream>
#include<iomanip>
int main()
{
    int choice;
    float cen, far;
    std::cout<<"1.Fahrenheit temperature into Centigrade"<<std::endl<<"2.Centigrade temperature to Fahrenheit"<<std::endl<<"3.exit"<<std::endl<<"enter your choice(1/2/3): ";
    std::cin>>choice;
    int x=1;
    while (x==1)
    {
        if (choice==1)
        {
            std::cout<<"enter the temperature in fahrenheit: ";
            std::cin>>far;
            cen=(far-32)*(5.0/9);
            std::cout<<"the converted temperature is: "<<cen<<" degree centigrade"<<std::endl;}
        else if(choice==2)
        {
            std::cout<<"enter the temperature in centigrade: ";
            std::cin>>cen;
            far=(cen*9.0/5)+32;
            std::cout<<"the converted temperature is: "<<far<<" fahrenheit"<<std::endl;}
        else if (choice==3)
        {
            std::cout<<"exiting"<<std::endl;
            x=0;}
        else 
        {
            std::cout<<"choose a correct option"<<std::endl;}
        if (x==1)
        {
            std::cout<<"enter your choice(1/2/3): ";
            std::cin>>choice;}}
    return 0;}
