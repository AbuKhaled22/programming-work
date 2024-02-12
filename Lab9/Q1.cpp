/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <5/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 5/12/2022 2:00

Problem: declare and initialize an array of 12 elements, and display the content of the array

IOFC: List of input, output, formula, and condition

Input: n\a

Output: numbers

Formula: 
1.sum+=arr[i]
2.sum/12

Condition: n\a

IO Format: Design of IO format

line1: ---------------------------------------
line2: 50 67 87 89 65 90 35 20 88 101 99 77
line3: The average= 
line4: ---------------------------------------

 
Variables/constants: 
1.arr[12]={50, 67, 87, 89, 65, 90, 35, 20, 88, 101, 99, 77,}
2.sum=0


Algorithm: List of steps and order to solve the problem

BEGIN 
    SET float arr[12]{50, 67, 87, 89, 65, 90, 35, 20, 88, 101, 99, 77}, sum=0
    OUTPUT message 1
    for(i=0; i<12; i++)
        OUTPUT arr[i]
        sum+=arr[i]
    END for
    PROCESS and OUTPUT sum/12
    OUTPUT message 2
END

Test data: 
arr[]={50, 67, 87, 89, 65, 90, 35, 20, 88, 101, 99, 77}, sum=72.33

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    //SET float arr[12]{50, 67, 87, 89, 65, 90, 35, 20, 88, 101, 99, 77}, sum=0
    float arr[12]{50, 67, 87, 89, 65, 90, 35, 20, 88, 101, 99, 77}, sum=0;
    //OUTPUT message 1
    cout<<" -"<<setw(40)<<setfill('-')<<"-\n "<<setfill(' ');
    //for(i=0; i<12; i++)
    for(int i=0; i<12; i++){
        //OUTPUT arr[i]
        cout<<arr[i]<<" ";
        //sum+=arr[i]
        sum+=arr[i];
     }//END for
    //PROCESS and OUTPUT sum/12
    cout<<"\n The average= "<<fixed<<setprecision(2)<<sum/12;
    //OUTPUT message 2
    cout<<"\n -"<<setw(40)<<setfill('-')<<"-";
    
    return 0;
}

