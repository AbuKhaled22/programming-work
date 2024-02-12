/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <1/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 1/11/2022 9:00

Problem: Using nested loop and selection structure
to print the shape 

IOFC: List of input, output, formula, and condition

Input:n/a

OUTPUT: shape

formula: n/a

condition

IO Format: Design of IO format 

line1:     00
line2:    0000
line3:   000000
line4:  00000000
line5: 0000000000 
 
Variables/constants: x=0, c=0, b=0, a=0

Algorithm: List of steps and order to solve the problem

BEgin
    SET x=0
    if(x==0)
    for(int c=0; c<5; c++)
        for (int a = 1; a <= 5 - c; a++)
            OUTPUT Speace
        for(int b=0; b<c; b++)
            OUTPUT message
        End for
        OUTPUT message
    End for
    if(x==1)
    for(int c=0; c<5; c++)
        for (int a = 1; a <= 5 - c; a++)
            OUTPUT Speace
        for(int b=2; b<10; b++)
            OUTPUT message
        End for
        OUTPUT message
    End for

End

Test data: Provide a set of test data (if any) - input & 
expected output

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/





#include <iostream>
using namespace std;




int main(){
    //SET x=0
    int x=0;
    //if(x==0)
    if(x==0){
        //for(int c=0; c<5; c++)
        for(int c=0; c<5; c++){
            //for (int a = 1; a <= 5 - c; a++)
            for (int a = 1; a <= 5 - c; a++) {
            //OUTPUT Speace
            cout << " ";}
            // for(int b=2; b<10; b++)
            for(int b=0; b<=c; b++){
                // OUTPUT message
                cout<< x<<x;}
             //End for
         cout<<"\n"; }
        //End fo
     } 
    //if(x==0)
    if(x==1){
        //for(int c=0; c<5; c++)
        for(int c=0; c<5; c++){
            //for (int a = 1; a <= 5 - c; a++)
            for (int a = 1; a <= 5 - c; a++) {
            //OUTPUT Speace
            cout << " ";}
            // for(int b=2; b<10; b++)
            for(int b=0; b<=c; b++){
                // OUTPUT message
                cout<< x<<x;}
             //End for
         cout<<"\n"; }
        //End if
     } 
    
    
    return 0;
}