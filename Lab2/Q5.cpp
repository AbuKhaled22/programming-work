/*
Created by <FADHEL ABDULLAH KHALED> on <1/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 1/10/2022 9:25

Problem: read diameter and display two line message seprate it
with one line blank

IOFC: List of input, output, formula, and condition
Input: d

output: two line message seprate it
with one line blank

formula:  1.x*d
          2.0.5*(x*d)+d


condition:n/a

IO Format: Design of IO format 
 Enter diameter: d.d
 
 Circumference of circle = c.c 
 perimeter of semi-circle = p.p
 
 
Variables/constants: d, x 


Algorithm: List of steps and order to solve the problem

Begin
     SET= d=0, x=3.14
     INPUT d
     PROCESS  1.x*d
              2.0.5*(x*d)+d
     OUTPUT two line message
End

Test data: 
1.d=2.5, x=3.14, c=7.8
2.d=2.5, x=3.14, p=6.4

I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    
    float d;
    const float x=3.14;
    
    
    cout<<" Enter diameter: ";
    cin>>d;
    
    
    cout<<fixed;
    cout<<"\n Circumference of circle = "<<setprecision(1)<<(x*d)
        <<"\n Perimeter of semi-circle = "<<setprecision(1)<<(0.5*(x*d)+d); 
    
    
    
    return 0;
}