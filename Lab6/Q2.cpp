/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <27/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 27/10/2022 10:15

Problem:  Using do..while loop, print all the lowercase and uppercase alphabets

IOFC: 

Input:n/a

Output: all the lowercase and uppercase alphabets

formula: n/a

condition: 
1.ch1<='z'
2.ch2=='A'
3.ch2<='Z'

IO Format: 
line1:            Alphabets
line2: =================================
line3: lowercase: x x
line4: uppercase: y y
line5: =================================
 
Variables/constants: ch1='a',ch2'A'

Algorithm:  

Begin
    SET ch1='a',ch2'A'
    OUTPUT message 1
    OUTPUT messgae 2
    OUTPUT message 3
    do
        OUTPUT ch1
        ch1++
    while(ch1<='z')  
    if(ch2=='A')
        OUTPUT message4
    do
        OUTPUT ch2
        ch2++
    while(ch2<='Z')
    OUTPUT message 5
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

    //SET ch1='a',ch2'A'
    char ch1='a', ch2='A';
    //OUTPUT message 1
    cout<<setw(40)<<"Alphabets"
    //OUTPUT messgae 2
        <<"\n ="<<setfill('=')<<setw(65)<<"="<<setfill(' ')
    //OUTPUT message 3 
        <<"\n lowercase: ";
    //do
    do{
        //OUTPUT ch1
        cout<<ch1<<" ";
        //ch1++
        ch1++;
     //while(ch1<='z')   
    }while(ch1<='z');
    //if(ch2=='A')
    if(ch2=='A')
        //OUTPUT message4
        cout<<"\n uppercase: ";
    //do    
    do{
        //OUTPUT ch2
        cout<<ch2<<" ";
        //ch2++
        ch2++;
    //while(ch2<='Z')    
    }while(ch2<='Z');
    //OUTPUT message 5
    cout<<"\n ="<<setfill('=')<<setw(65)<<"=";
    
 
 
    return 0;
}