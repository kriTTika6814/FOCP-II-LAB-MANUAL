//A data analytics tool finds the maximum sales figure from multiple entries. Implement a solution to accept ‘n’ numbers and display the largest.
#include <iostream>
#include <cctype>
int main() 
{int n, max;
 std::cout<<"Enter the maximum number of entries:";
 std::cin>>n;
 std::cout << "Enter the first sales:";
 std::cin >> max; 
    
for(int x=1; x< n; x++)  
{
 int sales;
 std::cout <<"Enter sales figure "<<(x+1)<<":";
 std::cin >> sales;
        
 if (sales>max) 
 {max=sales;}}
    
 std::cout<<"The maximum sales figure is:"<<max<<std::endl;
    
 return 0;}
