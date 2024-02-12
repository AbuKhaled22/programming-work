/*
Created by <FADHEL ABDULLAH KHALED > on <26/9/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 26/9/2022 12:25

Problem: read 2 number for width and height and display the area of rectangle

IOFC: List of input, output, formula, and condition

Input:weight, height

output:the area of rectangle

formula: weight*height

condition:n/a

IO Format: Design of IO format 
 Enter width = x.x
 Enter height = x.x

 Area of this rectangle = x.xxx
 
Variables/constants: weight,height


Algorithm: List of steps and order to solve the problem

Begin
     SET= weight=0, height=0, area=0
     INPUT weight, height
     PROCESS area = width * height
     OUTPUT area
End


Test data: 
1. weight=3, height=2, arae=6
2. weight=6, height=3, area=18


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/  
  
#include <iostream>
#include <iomanip>
  using namespace std;

 
int
main ()
{
  
 
float width;
  
float height;
  
float area;
  
 
 
cout << " Enter width: ";
  
cin >> width;
  
cout << " Enter height: ";
  
cin >> height;
  
area = width * height;
  
cout << fixed;
  
cout << "\n Area of this rectangle = ";
  
cout << setprecision (3) << area;
  
 
 
 
 
 
return 0;

}
