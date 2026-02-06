//A data analytics tool flips rows and columns for better visualization. Implement a solution to store a 3×3 matrix and compute its transpose.
#include <iostream>
int main()
{int matrix[3][3], transpose[3][3];
std::cout<<"Enter elements of the the matrix\n";
for(int i=0; i<3; ++i) 
 {for (int j=0; j<3; ++j) 
  {std::cout<<"Enter element"<<" "<<i+1<<j+1<<":";
   std::cin>>matrix[i][j];}}

 for (int i=0; i<3; ++i) 
 {for (int j=0; j<3; ++j) 
    {transpose[j][i] = matrix[i][j];}}

for (int i=0; i<3; ++i) 
{for (int j=0; j<3; ++j) 
{std::cout<<transpose[i][j]<< " ";}
 std::cout<<"\n";}
return 0;
}