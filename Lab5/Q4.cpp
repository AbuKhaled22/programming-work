/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <21/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 21/10/2022 9:40

Problem:  reads a character and prints on the screen Month 

IOFC: 

Input: letter

output: monthe

Formula: n/a

condition: 
1.letter=='A'
2.letter=='B
3.letter=='C'
4.letter=='D'
5.letter=='E'
6.letter=='F'
7.letter=='G'
8.letter=='H'
9.letter=='I'
10.letter=='J'
11.letter=='K'
12.letter=='L'

IO Format:

line1:                 Months
line2: ==========================================
line3: Enter the first letter of the month: 
line4:
line5: The month is: 
line6: ===========================================
 
Variables/constants: letter

Algorithm: 

Begin
    SET letter='\0'
    OUTPUT message 1
    OUTPUT message 2
    INPUT letter
    switch(letter)
        case 'A':OUTPUT message 3 break
        case 'B':OUTPUT message 4 break
        case 'C':OUTPUT message 5 break
        case 'D':OUTPUT message 6 break
        case 'E':OUTPUT message 7 break
        case 'F':OUTPUT message 8 break
        case 'G':OUTPUT message 9 break
        case 'H':OUTPUT message 10 break
        case 'I':OUTPUT message 11 break
        case 'J':OUTPUT message 12 break
        case 'K':OUTPUT message 13 break
        case 'L':OUTPUT message 14 break
        default
            OUTPUT message 15
    End switch
    OUTPUT message 16
End

Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    
    //SET letter='\0'
    char letter='\0';
    //OUTPUT message 1
    cout<<setw(30)<<" Months\n"
    //OUTPUT message 2
        <<" ="<<setfill('=')<<setw(45)<<"="<<setfill(' ')
    //INPUT letter
        <<"\n Enter one letter from (A-L) the first letter\n is the first monthe and so on: ";
    cin>>letter;
    //switch(letter)
    switch(letter){
        //case 'A':OUTPUT message 3 break
        case'A': cout<<"\n The month is January";break;
        //case 'B':OUTPUT message 4 break
        case'B': cout<<"\n The month is Fbruary"; break;
        //case 'C':OUTPUT message 5 break
        case 'C': cout<<"\n The month is March";break;
        //case 'D':OUTPUT message 6 break
        case 'D': cout<<"\n The month is Abril";break;
        //case 'E':OUTPUT message 7 break
        case 'E': cout<<"\n The month is May"; break;
        //case 'F':OUTPUT message 8 break
        case 'F': cout<<"\n The month is June";break;
        //case 'G':OUTPUT message 9 break
        case 'G': cout<<"\n The month is July"; break;
        //case 'H':OUTPUT message 10 break
        case 'H': cout<<"\n The month is August";break;
        //case 'I':OUTPUT message 11 break
        case 'I': cout<<"\n The month is September";break;
        //case 'J':OUTPUT message 12 break
        case 'J': cout<<"\n The month is October";break;
        //case 'K':OUTPUT message 13 break
        case 'K': cout<<"\n The month is November";break;
        //case 'L':OUTPUT message 14 break
        case 'L': cout<<"\n The month is December";break;
        //default
        default:
            //OUTPUT message 15
            cout<<"\n invaild character"; }
    //End switch
    //OUTPUT message 16
    cout<<"\n ="<<setfill('=')<<setw(45)<<"=";  
    
    return 0;
}