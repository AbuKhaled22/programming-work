/*
Created by <FADHEL ABDULAH KHALED MOHAMMED THABIT> on <3/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 3/10/2022 1:00

Problem: read the birth year of the user and display 3 line message
sprate it with one line blank

IOFC: List of input, output, formula, and condition

Input:birth

output: UPSR, PT3,SPM year of exam 

formula: 1.bith+12
         2.birth+15
         3.birth+17
condition:n/a

IO Format: Design of IO format 
line1:          Find the year of your UPSR,PT3 and SPM exam
line2:
line3: Enter your birth:xxxx
line4: -------------------------------------------------------- 
line5: the UPSR exam was on: xxxx
line6: the PT3 exam was on: xxxx
line7: the SPM exam was on: xxxx
line8: ---------------------------------------------------------


Variables/constants: year


Algorithm: List of steps and order to solve the problem
Begin
     SET= year=0
     OUTPUT message 1 and blank line
     INPUT year
     OUTPUT message 3
     PROCESS and OUTPUT year+12
     PROCESS and OUTPUT year+15
     PROCESS and OUTPUT year+17
     OUTPUT message 6
End


Test data: 
1.year=2000, UPSR=2012
2.year=2000, PT3=2015
3.year=2000, SPM=2017


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //SET= year=0
    int year;
    //OUTPUT message 1 and blank line
    cout<<"\t Find the year of your UPSR,PT3 and SPM exam\n"
         //INPUT year
        <<"\n Enter your birth: ";
    cin>>year;
    cout<<"-"<<setfill('-')<<setw(55)<<"-"<<setfill(' ')
        ////PROCESS and OUTPUT year+12 
        <<"\n the UPSR exam was on: "<<(year+12)
        //PROCESS and OUTPUT year+15
        <<"\n the PT3 exam was on: "<<(year+15)
        //PROCESS and OUTPUT year+17
        <<"\n the SPM exam was on: "<<(year+17)
        //OUTPUT message 6
        <<"\n-"<<setfill('-')<<setw(55)<<"-";
    
    
    
    
    
    return 0;
}