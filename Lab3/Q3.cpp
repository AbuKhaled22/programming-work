/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <3/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 3/10/2022 1:40

Problem: read the amount of minutes the user used then 
display the descrption of the user fees per month

IOFC: List of input, output, formula, and condition

Input: min

output: 5 line message with blanks line 

formula: 1.min*5
         2.((min*5)+19.90)+((min*5)+19.90)*(0.06)
condition:n/a

IO Format: Design of IO format 
line1:                Call Bill
line2:
line3: Enter your useage per minutes:x 
line4:
line5: x minutes* the cost per minutes(5 cents): x
line6: The cost for line rental is RM 19.90
line7: The total with 6% tax = y.yy


Variables/constants: year


Algorithm: List of steps and order to solve the problem
Begin
     SET= min=0, total=0.0
     OUTPUT message 1 and blank line
     INPUT min
     OUTPUT blank line and PROCESS and OUTPUT min*5
     OUTPUT message
     PROCESS((min*5)+19.90)+((min*5)+19.90)*0.06
     OUTPUT message
End


Test data: 
1.min=30, x=150, total=159
2.min=60, x=300, total=318


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/  
  
#include <iostream>
#include <iomanip>
  using namespace std;

 
 
 
int main () {
    //SET= min=0, total=0.0
     int min;
     float total=0.0;
  
    //OUTPUT message 1 and blank line
    cout<<"\t\tCall Bill \n "
         //INPUT min
        <<"\n Enter your useage per minutes: ";
    cin>>min;
    // OUTPUT blank line and PROCESS and OUTPUT min*5
    cout<<"\n "<<min<< " minutes * the cost per minutes(5 cents)= "<<(min*5)
        //OUTPUT message
        <<"\n The cost for line rental is RM 19.90";
        //PROCESS  ((min*5)+19.90)+((min*5)+19.90)*0.06
       total=((min*5)+19.90)+((min*5)+19.90)*(0.06);
       //OUTPUT message
    cout<<"\n The total with 6\% tax = "<<fixed<<setprecision(2)<<total;
    
 
 
 
 
return 0;

 
}