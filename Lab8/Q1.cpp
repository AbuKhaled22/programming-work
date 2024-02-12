/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <24/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 24/11/2022 11:30

Problem: complete a program to display the result of the multiplication
operation to the two integers

IOFC: List of input, output, formula, and condition

Input: n/a

Output: the result of two integer

Formula: 
x*2

condition: n/a

IO Format: Design of IO format 

line1:  x * 2 =
line2: the opreaton: 
 
Variables/constants: x=0, num1, num2, opt='\0'

Algorithm: List of steps and order to solve the problem

BEGIN main
    SET x=0
    opt='\0'
    CALL multiply(num1, num2)
    CAll printOpt(opt)
END

BEGIN multiply(num1, num2)
    PROCESS and OUTPUT num1*num2
END

BEGIN printOpt(opt)
    OUTPUT opt
END    
    
Test data: 
1.num1=3, num2=2, result=6
2.num1=5, num2=4, result=20

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/


#include <iostream>
using namespace std;

void multiply(int num1, int num2); 
void printOpt(char opt);

int main(){
    //SET x=0
    int x=3;
    //opt='\0'
    char opt='A';
    //CALL multiply(num1, num2)
    multiply(x, 2);
    //CAll printOpt(opt)
    printOpt(opt);
 
 
    return 0;

}


void multiply(int num1, int num2){
    //PROCESS and OUTPUT num1*num2
    cout<<"\n "<<num1<<" * "<<num2<<" = "<<(num1*num2);
    
} 

void printOpt(char opt){
    //OUTPUT opt
    cout<<"\n the opreaton: "<<opt;
}

