/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <10/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 10/12/2022 12:00

Problem: read 30 number and display the largest 

IOFC: List of input, output, formula, and condition

Input: num[SIZE]

Output: The largest number

Formula=n/a

Condition: 
num[i]<SIZE
num[i]<num[i+1]

IO Format: Design of IO format 
line1: -------------------------
line2: Number 1: xx
line3: Number 2: yy
....
line30: Number30
line31:
line32: The Largest NUMBERS is:
line33: -------------------------
 
Variables/constants: num[SIZE]={'\0'},i=0, x=0

Algorithm: List of steps and order to solve the problem
BEGIN
    SET num[SIZE]={'\0'}, large=0
    OUTPUT message 1
    for(i=0; i<SIZE; i++)
        INPUT num[i]
    END for
    PROCESS larg=num[i]
    for(x=1; x<SIZE; x++)
        if(larg<num[x])
            PROCESS larg=num[x]
        END if
    END for 
    OUTPUT larg
    OUTPUT message2
END
    
Test data: 
1.num[0]=28, num[1]=30, num[2]=5, num[3]= 20, larg=30
2.num[0]=60, num[1]=66, num[2]=80,num[3]=50, larg=80

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
#define SIZE 30

using namespace std;

int main(){
    //SET num[SIZE]={'\0'}, large=0
    int num[SIZE]={'\0'}, larg=0, x=0;
    //OUTPUT message 1
    cout<<" -"<<setw(40)<<setfill('-')<<"-\n"<<setfill(' ');
    //for(i=0; i<SIZE; i++)
    for(int i=0; i<SIZE; i++){
        //INPUT num[i]
        cout<<" Number "<<i+1<<": ";
        cin>>num[i];
     }//END for
    //PROCESS larg=num[i]
    larg=num[x];
    //for(x=1; x<SIZE; x++)
    for(x=1; x<SIZE; x++){
        //if(larg<num[i])
        if(larg<num[x])
            //PROCESS larg=num[x]
            larg=num[x];
        //END if
     }//END for 
    //OUTPUT larg
    cout<<"\n The largest number is: "<<larg;
    //OUTPUT message 2
    cout<<"\n -"<<setw(40)<<setfill('-')<<"-";
    
    return 0;
}
