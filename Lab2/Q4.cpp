/*
Created by <your name> on <26/9/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 26/9/2022 1:35

Problem: read one number and display one line numbers seprate it
with one line blank

IOFC: List of input, output, formula, and condition
Input:num

output: numbers

formula: num*=5 

condition:n/a

IO Format: Design of IO format 
 Enter a number (1-10): 3
 
 3      15     75    375    1875     9375
 
 
Variables/constants: num


Algorithm: List of steps and order to solve the problem

Begin
     SET= num=0
     INPUT num
     PROCESS num*=5
     OUTPUT numbers
End

Test data: 
1. num=3, result=3,15,75,375,1875,9375
2. nim=5, result=5,25,125,625,3125,15625


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/


#include <iostream>

using namespace std;


int main(){
    
    int num;
    
    cout<<" Enter a number (1-10): ";
    cin>>num;
    cout<<"\n "<<num
        <<"   "<<(num*=5)
        <<"   "<<(num*=5)
        <<"   "<<(num*=5)
        <<"   "<<(num*=5)
        <<"   "<<(num*=5);
    
    
    
    
    return 0;
}