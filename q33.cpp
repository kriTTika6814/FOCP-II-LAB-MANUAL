//A grading system stores marks of multiple students in arrays. Implement a solution to acceptmarks in 5 subjects for 3 students, then display: marks in 2nd subject of 1st student, and marks in 5th subject of 3rd student.
#include <iostream>
int main() 
{int marks[3][5];
std::cout << "enter 5 subject marks of 3 students:\n";
for(int student=0; student<3; student++) 
{std::cout<<"Student"<<(student +1)<<"\n";
 for(int subject =0; subject<5; subject++) 
 {std::cin>>marks[student][subject];}}
    
std::cout<<"2nd subject of 1st student:"<<marks[0][1]<<std::endl<<"5th subject of 3rd student:"<<marks[2][4]<<std::endl;  
return 0;}
