/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <31/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 31/10/2022 5:45PM

Problem: reads n integer values less than 100 and display
outputs whether the sequence entered is sorted in ascending order, descending order, or is unordered.

IOFC: List of input, output, formula, and condition

Input: value, num[b]

IO Format: Design of IO format 

line1: How many integer values to read? 4
line2: Enter the 1 integer: 10 
line3: Enter the 2 integer: 8
line4: Enter the 3 integer: 6
line5: Enter the 4 integer: 4
line6: The number are sorted in descnding order

Variables/constants: value=0, num[30]={0}, a=0, b=0, c=0, d=1, i=0, z=1

Algorithm: List of steps and order to solve the problem
Begin
    SET SET value=0, num[30]={0}, a=0, b=0, c=0, d=1, i=0, z=1
    INPUT value
    for(int i=1;i<=value;i++)
        INPUT num[b]
        b++
    End for 
    for(i=1; i<=value; i++)
        if(num[c] <= num[z])
            z++
            c++
        End if
        else if  (num[a]>=num[d])
            d++
            a++
        End else if
    End for
    if(c==value|| z==value)
        OUTPUT message 1
    End if
    else if(d==value || a==value)
        OUTPUT message 2
    End else if 
    else
        OUTPUT message 3
    //End else
    

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

    //SET value=0, num[30]={0}, a=0, b=0, c=0, d=1, i=0, z=1
    int value=0, num[30]={0}, a=0, b=0, c=0, d=1, i=0, z=1;
    //INPUT value
    cout<<" How many integer values to read? "; 
    cin>>value;
    //for(int i=1;i<=value;i++)
    for(int i=1;i<=value;i++){
        //INPUT num[b]
        cout<<" Enter the "<<i<<" integer:  ";
        cin>>num[b];
        //b++
        b++; }
    //End for 
    //for(i=1; i<=value; i++)
    for(i=1; i<=value; i++){
        //if(num[c] <= num[z])
        if(num[c] <= num[z]){
            //z++
            z++;
            //c++
            c++;}
        //End if
        //else if  (num[a]>=num[d])
        else if  (num[a]>=num[d]){
           //d++
            d++;
            //a++
            a++;}
        //End else if
     }
     //End for 
    //if(c==value|| z==value)
    if(c==value|| z==value)
        //OUTPUT message 1
        cout<<" Your numbers are sorted in ascending order ";
    //End if
    //else if(d==value || a==value)
    else if(d==value || a==value)
        //OUTPUT message 2
        cout<<" The numbers are sorted in descending order";
    //End else if
    //else
    else 
        //OUTPUT message 3
        cout<<" The numbers are sorted in unordered";
    //End else
    
    
    return 0;
}