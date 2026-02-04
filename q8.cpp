//A monitoring system generates a sequence of numeric event IDs from 1 to N. To make logs easier to analyse, the system applies tags to certain events based on predefined rules:
#include<iostream>
int main() { 
    int N;
    std::cout << "Enter the maximum number of IDs to be generated: ";
    std::cin >> N;
    
    for(int i = 1; i <= N; i++) {
        if(i % 15 == 0) {
            std::cout<<"ID:"<<i<<" BUZZ AND FUZZ"<<std::endl;
        }
        else if(i % 3 == 0) {
            std::cout<<"ID:"<<i<<" BUZZ"<< std::endl;
        }
        else if(i % 5 == 0) {
            std::cout<<"ID:"<<i<<" FUZZ"<< std::endl;
        }
        else {
            std::cout<<"ID:"<<i<<" ACCESS DENIED"<<std::endl;  // Exactly what you want!
        }
    }
    return 0;
}

