/*
Created by <your name> on <current date>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: DDMMYYYY Time

Problem: read lab mark, convert the lab mark to be over 15 percent  If the lab score is more than 12.5, display congratulatory remarks 
on the screen. Otherwise display an encouragement remark.


IOFC: 

Input: mark

Output: display congratulatory remarks or display an encouragement remark

Formula: percent= mark/6.66

Condition: percent>12.5

IO Format: 
line1: ======================
line2: Enter your mark: 
line3: 
line4: message 
line5: ====================== 

Variables/constants: mark, percent 

Algorithm: 

Begin
    Set mark, percent
    OUTPUT message 1
    INPUT mark
    PROCESS percent= mark/6.66
    if (percent>12.5)
        Blank line and OUTPUT message 2
    else
        Blank line and OUTPUT message 3
    End if
    OUTPUT message 4
End

Test data: 
1. mark=90 , percent=13.5
2. mark=50 , percent=7.5

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/



#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //Set mark, percent
    float mark=0, percent=0;
    //OUTPUT message 1
    cout<<" ="<<setfill('=')<<setw(30)<<"="<<setfill(' ')
        //INPUT mark
        <<"\n Enter your mark: ";
    cin>>mark;
   // PROCESS percent= mark/6.66
    percent= mark/6.66;
    //if (percent>12.5)
    if (percent>12.5)
        //Blank line and OUTPUT message 2
        cout<<"\n congratulatory remarks";
    //else
    else
        //Blank line and OUTPUT message 3
        cout<<"\n encouragement remark";
    //End if
    //OUTPUT message 4
    cout<<"\n ="<<setfill('=')<<setw(30)<<"=";
    
    return 0;
}