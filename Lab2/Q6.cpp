/*
Created by <FADHEL ABDULAH KHALE> on <1/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 1/10/2022 9:55

Problem: read 2 number and display 8 lin message separate it 
with one line blanke and calculate the numbers in diffrent opreation

IOFC: List of input, output, formula, and condition
Input:num1, num2

output: result in diffrent opreation

formula: num1(+, -, *, /, % )num2

condition:n/a

IO Format: Design of IO format 
 Enter two number: x x
 
 C Operator  Operations             Result 
 -----------------------------------------
 +           Addition               x
 -           Subtraction            x
 *           Multiplication         x
 /           Division               x
 %           Modulus                x
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
        5.num1%num2
     OUTPUT 8 line message
End

Test data: 
1.(+) num1=2, num2=2, Result=4
2.(-) num1=2, num2=2, Result=0
3.(*) num1=2, num2=2, Result=4
4.(/) num1=2, num2=2, Result=1
5.(%) num1=2, num2=2, Result=0

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
    int num1, num2;
    
    cout<<" Enter two numbers: ";
    cin>>num1>>num2;
    cout<<"\n C operator operations"<<setw(20)<<right<<"Results\n";
    cout<<" -"
      <<setfill('-')
      <<setw(40)
      <<"-\n"
      <<setfill(' ')
      <<"\n +\t Addition"<<setw(18)<<(num1+num2)
      <<"\n -\t Subtraction"<<setw(15)<<(num1-num2)
      <<"\n *\t Multiplication"<<setw(12)<<(num1*num2)
      <<"\n /\t Division"<<setw(18)<<(num1/num2)
      <<"\n %\t Modulus"<<setw(19)<<(num1%num2)
      <<"\n -"
      <<setfill('-')
      <<setw(40)
      <<"-\n";
      
    
    
    return 0;
}
