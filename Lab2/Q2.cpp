/*
Created by <FADHEL ABDULLAH KHALED> on <26/9/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 26/9/2022 12:45

Problem: read one degree in celsius and disply one line message separate
with one line blank 

IOFC: List of input, output, formula, and condition

Input: celsius

output: Fahrenheit

formula: fahrenheit=(celsius*1.8)+32

condition:n/a

IO Format: Design of IO format 
 Enter degree in Celsius: x.x

 x.xx degree celsius is equal to x.xx degree Fahrenhit
 
Variables/constants: celsius, fahrenheit


Algorithm: List of steps and order to solve the problem

Begin
     SET= celsius=0, fahrenheit=0
     INPUT celsius
     OUTPUT fahrenheit
End

Test data: 
1.celsius=40, Fahrenhit=104
2.celsius=30, Fahrenhit=86


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    float celsius;
    float fahrenheit;
    
    cout<<" Enter degree in Celsius: ";
    cin>>celsius;
    
    fahrenheit=(celsius*1.8)+32;
    
    cout<<fixed;
    cout<<"\n "<<setprecision(2)<<celsius
        <<" degree Celsius is equal to "<<setprecision(2)<<fahrenheit
        <<" degree Fahrenheit";
    
    
    return 0;
}