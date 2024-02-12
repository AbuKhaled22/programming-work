/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <12/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 12/11/2022  11:20

Problem: Re-write the simple calculator program for Question (5) by implementing function

IOFC: make a Simple Calculator Program and use two function

Input: num1, num2, op

Output:calculator program

formula: 
1.num1+num2
2.num1-num2
3.num1*num2
4.num1/num2

condition:
1.ope==+
2.ope==-
3.ope==*
4.ope==/

IO Format: 
line1: ---------------------------------------
line2:          Simple Calculator Program
line3: ---------------------------------------
line4:          A: addition
line5:          S: Subtraction
line6:          M: Multiplication
line7:          D: Division
line8: ---------------------------------------
line9: Enter two real number: 
line10: Select an operation: 
line11: 
line12: message
line13: --------------------------------------

 

Variables/constants: num1, num2, op, ope

Algorithm: List of steps and order to solve the problem

BEGIN main
    SET ope='\0'
    CALL printMenu()
    CALL getNumber()
    CALL getOperator()
    ope=getOperator()
    if ope=='A'
        blank line and PROCESS and OUTPUT (num1+num2)
    else if ope=='S'
        blank line and PROCESS and OUTPUT (num1-num2)
    else if ope=='M'
        blank line and PROCESS and OUTPUT (num1*num2)
    else if ope=='D'
        blank line and PROCESS and OUTPUT (num1/num2)
    OUTPUT message
END

BEGIN printMenu()
    OUTPUT message 1
    OUTPUT message 2
    OUTPUT message 3
    OUTPUT message 4
    OUTPUT message 5
    OUTPUT message 6
    OUTPUT message 7
    OUTPUT message 8
END

BEGIN getNumber()
    INPUT num1, num2
END

BEGIN getOperator()
    SET op='\0'
    do
        INPUT op
        if op=='A'
            return op
        END if
        else if op=='S'
            return op
        END else if
        else if op=='M'
            return op
        END else if
        else if op=='D'
            return op
        END else 
        else
            OUTPUT message 8
     while(op!='A'|| op!='S'|| op!='M'|| op!='D')
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

void printMenu(void);
void getNumber();
char getOperator(void);
float num1=0, num2=0;

int main(){
    //SET ope='\0'
    char ope='\0';
    //CALL printMenu()
    printMenu();
    //CALL getNumber(num1, num2)
    getNumber();
    //ope=getOperator()
    ope=getOperator();
    //if(ope=='A')
    if(ope=='A')
        //blank line and PROCESS and OUTPUT (num1+num2)
        cout<<"\n the result = "<<(num1+num2);
    //END if 
    //else if (ope=='S')
    else if(ope=='S')
        //blank line and PROCESS and OUTPUT (num1-num2)
        cout<<"\n the result = "<<(num1-num2);
    //END else if
    //else if (op=='M')
    else if(ope=='M')
        //blank line and PROCESS and OUTPUT (num1*num2)
        cout<<"\n the result = "<<(num1*num2);
    //END else if
    //else if (ope=='D')
    else if(ope=='D')
        //blank line and PROCESS and OUTPUT (num1/num2)
        cout<<"\n the result = "<<(num1/num2);
    //END else if 
    //OUTPUT message
    cout<<"\n -"<<setfill('-')<<setw(35)<<"-";
    
    return 0;
}


void printMenu(void){
    //OUTPUT message 1
    cout<<" -"<<setfill('-')<<setw(35)<<"-\n"<<setfill(' ')
    //OUTPUT message 2
        <<"\t Simple Calculator Program\n"
    //OUTPUT message 3
        <<" -"<<setfill('-')<<setw(35)<<"-\n"<<setfill(' ')
    //OUTPUT message 4    
        <<"\t A: addition\n"
    //OUTPUT message 5
        <<"\t S: Subtraction\n"
    //OUTPUT message 6
        <<"\t M: Multiplication\n"
    //OUTPUT message 7
        <<"\t D: Division"
    //OUTPUT message 8
        <<"\n -"<<setfill('-')<<setw(35)<<"-"<<setfill(' ');
}

void getNumber(){
    //INPUT num1, num2
    cout<<"\n Enter two real number: ";
    cin>>num1>> num2;
}

char getOperator(void){
    //SET op='\0'
    char op='\0';
    //do
    do{
        //INPUT op
        cout<<" Select an operation: ";
        cin>>op;
        //if op=='A'
        if(op=='A')
            //return op
            return op;
        //END if
        //else if op=='S'
        else if(op=='S')
            //return op
            return op;
        //END else if
        //else if op=='M'
        else if(op=='M')
            //return op
            return op;
        //END else if
        //else if op=='D'
        else if(op=='D')
            //return op
            return op;
        //else
        else
            //OUTPUT message 8
            cout<<" Invalid operator. Please re-enter \n";
        //End else
     //while(op!='A'|| op!='S'|| op!='M'|| op!='D')
     }while(op!='A'|| op!='S'|| op!='M'|| op!='D');  
 }











   
    
 
