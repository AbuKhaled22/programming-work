/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <27/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 27/10/2022 9:00

Problem: dispaly all numbers in reverse order from n to 1 using while loop

IOFC: 

Input: number 

Output: numbers in reverse order from n to 1

formula: n/a

condition: n/a

IO Format: 

line1: =================================
line2: Enter a number: 
line3: x x x x x 
line4: =================================
 
Variables/constants: n=0, i=0 

Algorithm:  

Begin
    SET num=0
    OUTPUT message 1
    INPUT num
    while (num>=1)
        OUTPUT num
         num--
    End while 
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

    //SET num=0
    int num=0;
    //OUTPUT message 1
    cout<<" ="<<setfill('=')<<setw(30)<<"="<<setfill(' ')
        //INPUT num
        <<"\n Enter a number: ";
    cin>>num;
    // while (num>=1)
    while(num>=1){
        //OUTPUT num
        cout<<num<<"\n";
        //num--
        num--;}
    //End while
      return 0;
}