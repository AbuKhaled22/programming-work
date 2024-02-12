/*
Created by <FADHEL ABDULLAH KHALED> on <26/9/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 26/9/2022 1:15

Problem: read 2 number and display one line message seprate it
with one line blank

IOFC: List of input, output, formula, and condition
Input:base, height

output: Area of triangle

formula: tringle= 0.5*base*height

condition:n/a

IO Format: Design of IO format 
 Enter base=x.x
 Enter vertical height= h.h

 Area of tringle with x.xx base and x.xx vertical height is x.xx
 
 
Variables/constants: base, heighe, tringle


Algorithm: List of steps and order to solve the problem

Begin
     SET= base=0,height=0,tringle=0
     INPUT base, height
     PROCESS tringle=0.5*base*height
     OUTPUT Area of triangle
End

Test data: 
1.base=4.5, height=6.5, tringle=14.625
2.base=2.8, height=3.9, tringle=5.460



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
    float base;
    float height;
    float triangle;
    
    cout<<" Enter base = ";
    cin>>base;
    cout<<" Enter vertical height = ";
    cin>>height;

     triangle= 0.5*base*height;
     cout<<fixed;
     cout<<"\n Area of triangle with "
         <<setprecision(2)<<base
         <<" base and "
         <<setprecision(2)<<height
         <<" vertical height is "
         <<setprecision(3)<<triangle;

    return 0;
}