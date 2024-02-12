/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <30/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 30/10/2022 9:30

Problem: display a Basic Guessing Game

IOFC: List of input, output, formula, and condition

Input: num

OUTPUT: message

formula: n/a

condition:
1-i<3
2-num==666

IO Format: Design of IO format 

line1:       Guessing Game (3 chance)
line2: -------------------------------------
line3: Enter the number : 
line4: 
line5: message 
line6: -------------------------------------
 
Variables/constants: num

Algorithm: List of steps and order to solve the problem

Begin
    SET num=0
    OUTPUT message 1
    OUTPUT message 2
    for(int i=0;i<0;i++)
        INPUT num 
        if(num==666)
            OUTPUT message3
            break
        else
            OUTPUT message 4
    End for 
    OUTPUT message 5
End

Test data: Provide a set of test data (if any) - input & 
expected output

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/




#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    //SET num=0
    int num=0;
    //OUTPUT message 1
    cout<<setw(30)<<" Guessing Game (3 chance)\n"
    //OUTPUT message 2
        <<" -"<<setfill('-')<<setw(30)<<"-\n"<<setfill(' ');
    //for(int i=0;i<0;i++)
    for(int i=0;i<3;i++){
        //INPUT num 
        cout<<" Enter the number : ";
        cin>>num;
        //if(num==666)
        if(num==666){
           //OUTPUT message3
           cout<<"\n corect answer \n";
           //break
           break;}
        //else
        else
            //OUTPUT message 4
            cout<<"\n incorect answer\n\n";}
    //End for 
    //OUTPUT message 5
    cout<<" -"<<setfill('-')<<setw(30)<<"-";
 
    return 0;
    
}