/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <3/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 3/10/2022 12:30

Problem: read a number of minets and display the minets and the hours and
the reminder minets

IOFC: List of input, output, formula, and condition

Input:min

output: the minets and the hours and
the reminder minutes

formula: 1.Hours= min/60
         2.reminder minutes= min%60

condition:n/a

IO Format: Design of IO format 
line1.    Minutes to Hours Convert
line2. ========================================
line3.
line4. Minutes = 185
line5. 
line6. 185 minutes is equal to 3 hours and 5 minutes

Variables/constants: min


Algorithm: List of steps and order to solve the problem
Begin
     SET= min=0
     OUTPUT message1
     OUTPUT message2 and blank line
     INPUT min
     OUTPUT blank line
     PROCESS and OUTPUT min/60 
     PROCESS and OUTPUT min % 60
End


Test data: 
1. min=185, result=3 hours and 5 minets
2. min=233, result=3 hours and 53 minutes


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    //SET= min=0
    int min;
    //OUTPUT message1
    cout<<"\t Minutes to Hours Converter\n"
        //OUTPUT message2 and one line blank
        <<" ="<<setfill('=')<<setw(46)<<"=\n"
        <<setfill(' ')
        //INPUT min
        <<" Minutes = ";
    cin>>min;
    //OUTPUT blank line
    cout<<"\n "
       //PROCESS and OUTPUT min/60 
        <<min<<" minutes is equal to "<<(min/60)<<" hours"
        //PROCESS and OUTPUT min/60 
        <<" and "<<(min%60)<<" minutes";
    
    
    
    
    
    
    return 0;
}