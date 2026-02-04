//Develop a menu-driven calculator program in C++ to perform basic arithmetic operations.The program should continue executing based on the user's choice and display the result of each operation.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 int choice;
 float num1, num2;
 int x = 1;
    
while (x == 1)
{
  cout << "1.ADDITION" << std::endl << "2.SUBTRACTION" << std::endl << "3.MULTIPLICATION" << std::endl << "4.DIVISION" << std::endl << "5.EXIT" << std::endl << "Enter your choice(1/2/3/4/5): ";
  cin >> choice;
  if (choice == 1)
 {
  cout << "Enter num1 and num2: ";
  cin >> num1 >> num2;
  float sum = num1 + num2;
  cout << "The sum of "<< num1<< " and "<< num2 << " is "<< sum<< endl;}
    
  else if(choice == 2)     
{
  cout << "Enter num1 and num2: ";
  cin >> num1 >> num2;
  float diff = num1 - num2;
  cout << "The difference of "<< num1<< " and "<< num2<< " is "<< diff<< endl;}
        
  else if (choice == 3)      
  {
            cout << "Enter num1 and num2: ";
            cin >> num1 >> num2;
            float prod = num1 * num2;
            cout << "The product of " << num1 << " and " << num2 << " is " << prod << endl;
        }
        else if (choice == 4)       // ← CHANGED: else if
        {
            cout << "Enter num1 and num2: ";
            cin >> num1 >> num2;
            if(num2 != 0) {
                float quo = num1 / num2;
                cout << "The quotient of " << num1 << " and " << num2 << " is " << quo << endl;
            } else {
                cout << "ERROR: Division by zero!" << endl;
            }
        }
        else if(choice == 5)        // ← CHANGED: else if
        {
            cout << "EXITING..." << endl;
            x = 0;
        }
        else
        {
            cout << "CHOOSE A VALID OPTION (1-5)" << endl;
        }
    }
    return 0;
}
