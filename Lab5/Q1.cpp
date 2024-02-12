/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <17/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 17/10/2022 12:35

Problem: write a calculator program that takes two numbers as input and allows the 
user to select which operation they would like to perform on the two numbers

IOFC: 

Input: num1, num2, op

Output:calculator program

formula: 
1.num1+num2
2.num1-num2
3.num1*num2
4.num1/num2

condition:
1.op==+
2.op==-
3.op==*
4.op==/

IO Format: 
line1:                    calculator
line2: -----------------------------------------------
line3: Enter the first and the second  number:
line4: Enter the opreation: 
line5: -----------------------------------------------
line6: the result is: 
 

Variables/constants: num1, num2, op

Algorithm: List of steps and order to solve the problem

Begin
    SET num1=0, num2=0
    SET op='\0'
    OUTPUT message 1
    OUTPUT message 2
    INPUT num1 and num2
    INPUT op
    OUTPUT message3
    if op=='+'
        PROCESS and OUTPUT (num1+num2)
    else if op==-
        PROCESS and OUTPUT (num1-num2)
    else if op==*
        PROCESS and OUTPUT (num1*num2)
    else if op==/
        PROCESS and OUTPUT (num1/num2)
    else
        OUTPUT message 4
    End if
End

Test data: 
1.num1=3, num2=5 op='+', result=8
2.num1=8, num2=3 op='-', result=5
3.num1=4, num2=3 op='*', result=12
4.num1=6, num2=3 op='/', result=2

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    
    //SET num1=0, num2=0
    int num1=0, num2=0;
    //SET op
    char op;
    //OUTPUT message 1
    cout<<setw(30)<<"calculator \n"
        //OUTPUT message 2
        <<"-"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ')
        //INPUT num1 and num2
        <<" Enter the first and the second  number: ";
    cin>>num1 >>num2;
    //INPUT op
    cout<<" Enter the opreation: ";
    cin>>op;
    //OUTPUT message3
    cout<<"-"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');
    //if op==+
    if(op=='+')
        //PROCESS and OUTPUT (num1+num2)
        cout<<" the result is : "<<(num1+num2);
    //else if op==-
    else if(op=='-')
        //PROCESS and OUTPUT (num1-num2)
        cout<<" the result is : "<<(num1-num2);
    //else if op==*
    else if(op=='*')
        //PROCESS and OUTPUT (num1*num2)
        cout<<" the result is : "<<(num1*num2);
    //else if op==/
    else if(op=='/')
        //PROCESS and OUTPUT (num1/num2)
        cout<<" the result is : "<<(num1/num2);
    //else
    else
        //OUTPUT message 4
        cout<<" the result is : erro ";
    //End if
    
    return 0;
}