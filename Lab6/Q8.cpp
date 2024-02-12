/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <1/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 1/11/2022  11:30

Problem: improve the program written for Question 1 of Lab 4(1)(2)so that the program 
exits only after the user chooses not to continue with it

IOFC: 

Input: num[2]={0, 0} op, x

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
line1: -----------------------------------------------
line2:                  Basic Calaulator
line3:          A: addition
line4:          S: Subtraction
line5:          M: Multiplication
line6:          D: Division
line5: -----------------------------------------------
line6: Enter two real number: 
line7: Select an operation: 
line8: 
line9: message
line10: 
line11: Continue [ y or n]?:
 

Variables/constants: num[2]={0, 0} op, x

Algorithm: List of steps and order to solve the problem

Begin
    SET num[2]={0, 0} 
    SET op='\0', x='\0'
    OUTPUT message 1
    OUTPUT message 2
    OUTPUT message 3
    OUTPUT message 4
    OUTPUT message 5
    OUTPUT message 6
    OUTPUT message 7
    INPUT num[]
    INPUT op
    do{
        if op=='+'
            blank line and PROCESS and OUTPUT (num1+num2)
        else if op=='-'
             blank line and PROCESS and OUTPUT (num1-num2)
        else if op=='*'
             blank line and PROCESS and OUTPUT (num1*num2)
        else if op=='/'
             blank line and PROCESS and OUTPUT (num1/num2)
        else
            OUTPUT message 8
        End if
        OUTPUT message 9
     }while(m=='y')
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
    
    //SET num[2]={0, 0} 
    float num1, num2;
    //SET op='\0', m='\0'
    char op='\0', m='\0';
    //OUTPUT message 1
    cout<<" -"<<setfill('-')<<setw(40)<<"-\n"<<setfill(' ')
    //OUTPUT message 2
        <<setw(30)<<" Basic Calaulator\n"
    //OUTPUT message 3
        <<setw(20)<<" A: addition\n"
    //OUTPUT message 4
        <<setw(23)<<" S: Subtraction\n"
    //OUTPUT message 5
        <<setw(26)<<" M: Multiplication\n"
    //OUTPUT message 6
        <<setw(19)<<" D: Division"
    //OUTPUT message 7
        <<"\n -"<<setfill('-')<<setw(40)<<"-"<<setfill(' ');
    //do{
    do{
        //INPUT num1, num2
        cout<<"\n Enter two real number: ";
        cin>>num1>> num2;
        //INPUT op
        cout<<" Select an operation: ";
        cin>>op;
        //if op==+
        if(op=='A')
            //PROCESS and OUTPUT (num1+num2)
            cout<<"\n "<<num1<<"+"<<num2<<"="<<(num1+num2);
        //else if op==-
        else if(op=='S')
            //PROCESS and OUTPUT (num1-num2)
            cout<<"\n "<<num1<<"-"<<num2<<"="<<(num1-num2);
        //else if op==*
        else if(op=='M')
            //PROCESS and OUTPUT (num1*num2)
            cout<<"\n "<<num1<<"*"<<num2<<"="<<(num1*num2);
        //else if op==/
        else if(op=='D')
            //PROCESS and OUTPUT (num1/num2)
            cout<<"\n "<<num1<<"/"<<num2<<"="<<(num1/num2);
        //else
        else
            //OUTPUT message 4
            cout<<"\n erro ";
        //End if
        cout<<"\n Continue [ y or n]?: ";
        cin>>m;
     }while(m=='y');
    
    return 0;
}