/*
Created by <your name> on <current date>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: DDMMYYYY Time

Problem: read a letter and display message

IOFC: List of input, output, formula, and condition

Input: x

Output: message

formula: 
1.area square=(side*=side)
2.area circle= 3.14*radius*2

condition:
1.value of x equal to S 
2.value of x equal to C


IO Format: Design of IO format 

line1: _______________________________________________
line2: Enter S for square or C for circle:
line3:
line4: area=y
line5: _______________________________________________
 
Variables/constants: x, side=0, radius=0, area=0

Algorithm: List of steps and order to solve the problem

Begin
    SET x 
    SET side=5.37, radius=34.54321, area=0
    OUTPUT message 1
    INPUT 
    if x==S
    side*=side
    blank line and PROCESS and OUTOUT (area=side)
    if x==C
    blank line and PROCESS and OUTOUT (area= 3.14*radius*2)
    End if 
    OUTPUT message 4
End

Test data: 
1.x='c', area=216.931
2.x='S', area=28.8369



I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //SET x
    char x;
    //SET side=5.37, radius=34.54321, area=0
    double side=5.37, radius=34.54321, area=0;
    //OUTPUT message 1
    cout<<" _"<<setfill('_')<<setw(40)<<"_"<<setfill(' ');
    //INPUT
    cout<<"\n Enter S for square or C for circle: ";
    cin>>x;
    //side*=side
    side*=side;
    //if x==S
    if (x=='S')
    //side*=side
    //blank line and PROCESS and OUTOUT (area=side)
    cout<<"\n area= "<<side;
    //if x==C
    else 
    //blank line and PROCESS and OUTOUT (area= 3.14*radius*2)
    cout<<"\n area= "<<( 3.14*radius*2);
    //End if
    cout<<"\n _"<<setfill('_')<<setw(40)<<"_";
    
    
    
    
    
    return 0;
}