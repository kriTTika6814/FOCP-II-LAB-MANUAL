//A graphics rendering engine adds pixel intensity matrices. Implement a solution to store two 3×3 matrices and compute their sum.
#include <iostream>
int main()
{int matrix1[3][3], matrix2[3][3], sum[3][3];
std::cout<<"Enter elements of the first matrix\n";
for(int i=0; i<3; ++i) 
 {for (int j=0; j<3; ++j) 
  {std::cout<<"Enter element"<<" "<<i+1<<j+1<<":";
   std::cin>>matrix1[i][j];}}

 std::cout << "\nEnter elements of second matrice\n";
 for (int i=0; i<3; ++i) 
  {for (int j =0; j<3; ++j) 
    {std::cout<<"Enter element:"<<" "<<i+1<<j+1<<":";
    std::cin>>matrix2[i][j];}}

 for (int i=0; i<3; ++i) 
 {for (int j=0; j<3; ++j) 
  {sum[i][j] = matrix1[i][j] + matrix2[i][j];}}

 std::cout<<"Sum of the two matrices:\n";
 for (int i=0; i<3; ++i) 
  {for (int j=0; j<3; ++j) 
    {std::cout<<sum[i][j]<<" ";}
        std::cout<<"\n";}
return 0;}
