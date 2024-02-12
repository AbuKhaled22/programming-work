/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <4/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 4/10/2022 12:15

Problem: dispaly 7 line message and one line blank

IOFC: List of input, output, formula, and condition

Input: n/a

output: 7 line message with one blank line 

formula:
1.salary*0.11
2.salary*0.24
3.salary-(salary*0.24) salary*0.24
      
condition:n/a

IO Format: Design of IO format 
line1:                Salary Slip
line2:---------------------------------------------
line3: Enter your salary: x
line4:
line5: Gross salary:                         X 
line6: Employee deduction amount:            y
line7: Total EPF saving:                     z
line8: Net pay:                              c



Variables/constants: salary


Algorithm: List of steps and order to solve the problem
Begin
     SET= salry=0
     OUTPUT message 1 
     OUTPUT message 2 
     INPUT  salary
     OUTPUT blank line and one line message 3
     OUTPUT message 4
     PROCESS salary*0.11
     PROCESS and OUTPUT salary*0.24
     PROCESS and OUTPUT salary-(salary*0.24)
End


Test data: 
1.x=2000, y=220, z=480, c=1520
2.x=3000, y=330, z=720, c=2280


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/  
  
 
#include <iostream>
#include <iomanip>
 using namespace std;

 
 
int main (){
  
    //SET= salary=0
    int salary;
    //OUTPUT message 1 
    cout<<setw(30)<<" Salary slip" 
    //OUTPUT message 2
    <<"\n -"<<setfill ('-')<< setw (40)<< "-" <<setfill (' ');
    //INPUT  salary
    cout<< "\n Enter your Salary: ";
    cin>>salary;
    //OUTPUT blank line and one line message 3
    cout<<setw (10)<<left<<"\n Gross salary:"<< setw (30) << right << salary 
    //OUTPUT message 4
    <<setw (10) << left << "\n Employee deduction amount:" 
    //PROCESS salary*0.11
    <<setw(16) << right << (salary * 0.11)
    //PROCESS and OUTPUT salary*0.24
    <<setw(10)<<left<<"\n Total EPF saving:"<<setw(25)<<right<<(salary*0.24)
    // PROCESS and OUTPUT salary-(salary*0.24)
    <<setw(10)<<left<<"\n Net pay:"<<setw(35)<<right<<salary-(salary*0.24);
 
return 0;

}