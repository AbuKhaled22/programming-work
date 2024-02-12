/*
Created by <FADHEL ABDULLAH KHALED> on <1/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 1/10/2022 11:20

Problem: read 2 number and display 7 lin message separate it 
with one line blanke and calculate the numbers in diffrent opreation

IOFC: List of input, output, formula, and condition
Input:num1, num2

output:7 line message and result in diffrent opreation

formula: num1(+, -, *, /)num2

condition:n/a

IO Format: Design of IO format 
 Enter two numbers: x.x y.y
 
 Operations              Result 
 -----------------------------------------
 Addition                x.x + y.y = z.z
 Subtraction             x.x - y.y = z.z
 Multiplication          x.x * y.y = z.z
 Division                x.x / y.y = z.z
 ----------------------------------------
 
 
Variables/constants: num1, num2


Algorithm: List of steps and order to solve the problem

Begin
SET= num1=0, num2=0
INPUT num1, num2
PROCESS 1.num1+num2
        2.num1-num2
        3.num1*num2
        4.num1/num2
OUTPUT 7 line message
End

Test data: 
1.(+) num1=3.4, num2=2.5, Result=5.9
2.(-) num1=3.4, num2=2.5, Result=0.9
3.(*) num1=3.4, num2=2.5, Result=8.5
4.(/) num1=3.4, num2=2.5, Result=1.3


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  double num1, num2;
  
  cout<<"Enter two numbers: ";
  cin>>num1>>num2;
 
  cout<<setw(10)<<left<<"\n Operations"<<setw(20)<<right<<"Results"
      <<"\n -"<<setfill('-')<<setw(40)<<"-"<<setfill(' ')
      <<setw(10)<<left<<"\n Addition"<<setw(18)<<right<<num1<<" + "<<num2<<" = "
      <<fixed
      <<setprecision(1)<<(num1+num2)
      <<setw(10)<<left<<"\n Subtraction"<<setw(15)<<right<<num1<<" - "<<num2
      <<" = "<<setprecision(1)<<(num1-num2)
      <<setw(10)<<left<<"\n Multiplication"<<setw(12)<<right<<num1<<" * "<<num2
      <<" = "<<setprecision(1)<<(num1*num2)
      <<setw(10)<<left<<"\n Division"<<setw(18)<<right<<num1<<" / "<<num2<<" = "
      <<setprecision(1)<<(num1/num2)
      <<"\n -"<<setfill('-')<<setw(40)<<"-";
    
    return 0;
}
