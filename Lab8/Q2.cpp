/*
    Created by <FADHEL ABDULLAH KHALED MIHAMMED THABIT > on <24/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 24/11/2022 12:20

Problem: read two number and swap the number using two function. 

IOFC: List of input, output, formula, and condition

Input: num1 , num2

Output: message

formula: n/a

condition: n/a

IO Format: Design of IO format

line1: ------------------------------------
line2: Enter number1: 
line3: Enter number2: 
line4: ------------------------------------
line5: The first number:
line6: The second number:
line7: ------------------------------------

Variables/constants: num1, num2, swap 

Algorithm: List of steps and order to solve the problem

BEGIN main
    SET num1=0, num2=0, swap=0
    OUTPUT message1
    PROCESS num1=CALL read1()
    PROCESS num2=CALL read2()
    OUTPUT message
    PROCESS swap=num1
    PROCESS num1=num2
    PROCESS num2=swap
    OUTPUT num1
    OUTPUT num2
    OUTPUT message
END

BEGIN read1()
    SET num1
    INPUT num1
    return num1
END

BEGIN read2()
    SET num2
    INPUT num2
    return num2
END

Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int read1(void);
int read2(void);


int main(){
    //SET num1=0, num2=0, swap=0
    int num1=0, num2=0, swap=0;
    //OUTPUT message1
    cout<<" -"<<setfill('-')<<setw(30)<<"-\n"<<setfill(' ');
    //PROCESS num1=CALL read1()
    num1= read1();
    //PROCESS num2=CALL read2()
    num2= read2();
    //OUTPUT message
    cout<<" -"<<setfill('-')<<setw(30)<<"-\n"<<setfill(' ');
    //PROCESS swap=num1
    swap=num1;
    //PROCESS num1=num2
    num1=num2;
    //PROCESS num2=swap
    num2=swap;
    //OUTPUT num1
    cout<<" The first number: "<<num1
    //OUTPUT num2
        <<"\n The second number: "<<num2
    //OUTPUT message
        <<"\n -"<<setfill('-')<<setw(30)<<"-";
    
    
    return 0;
}

int read1(void){
    //SET num1
    int num1=0;
    //INPUT num1
    cout<<" Enter numer1: ";
    cin>>num1;
    //return num1
    return num1;
}
int read2(void){
    //SET num2
    int num2=0;
    //INPUT num2
    cout<<" Enter nmber2: ";
    cin>>num2;
    //return num2
    return num2;
}
