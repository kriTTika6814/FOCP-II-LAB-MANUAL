//A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a solution to calculate the roots of a quadratic equation.
#include <iostream>
#include <cmath>
#include <iomanip>
int main() 
{
 float a, b, c, dis, root1, root2;
 std::cout << "Enter a, b, c for ax^2 + bx + c = 0: ";
 std::cin >> a >> b >> c;
 if (a == 0) 
 {
 std::cout << "Invalid quadratic equation";}
 dis = b*b - 4*a*c;
 if (dis < 0) 
 {std::cout << "No real roots";} 
 
 else if (dis == 0) 
 { root1 = -b / (2*a);
  std::cout << "only one root exists:" << root1;} 
  
 else 
 { root1 = (-b + sqrt(dis)) / (2*a);
   root2 = (-b - sqrt(dis)) / (2*a);
   std::cout << "Two roots exist: "<< root1<< "and" << root2; }
    
return 0;}