/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <21/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 21/10/2022 10:30

Problem:  reads two number  and display the month and the year 

IOFC: 

Input: num1, num2

output: monthe and the year

Formula: n/a

condition: 
1.num1== 1
2.num1== 2
3.num1== 3
4.num1== 4
5.num1== 5
6.num1== 6
7.num1== 7
8.num1== 8
9.num1== 9
10.num1== 10
11.num1== 11
12.num1== 12

IO Format:

line1:                 Months and year
line2: ==========================================
line3: Enter the number of the month and the year: 
line4:
line5: The month is: 
line6: the year is :
line7: ===========================================
 
Variables/constants:  num1, num2

Algorithm: 

Begin
    SET num1=0, num2=0
    OUTPUT message 1
    OUTPUT message 2
    INPUT num1, num2
    switch(num1)
        case 1:OUTPUT message 3 break
        case 2:OUTPUT message 4 break
        case 3:OUTPUT message 5 break
        case 4:OUTPUT message 6 break
        case 5:OUTPUT message 7 break
        case 6:OUTPUT message 8 break
        case 7:OUTPUT message 9 break
        case 8:OUTPUT message 10 break
        case 9:OUTPUT message 11 break
        case 10:OUTPUT message 12 break
        case 11:OUTPUT message 13 break
        case 12:OUTPUT message 14 break
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
    //SET num1=0, num2=0
    int num1=0, num2=0;
    //OUTPUT message 1
    cout<<setw(30)<<" Months and year\n"
    //OUTPUT message 2
        <<" ="<<setfill('=')<<setw(45)<<"="<<setfill(' ')
    //INPUT num1, num2
        <<"\n Enter the number of the month and the year: ";
    cin>>num1>>num2;
    //switch(num1)
    switch(num1){
        //case 1:OUTPUT message 3 break
        case 1:cout<<"\n The month is January\n the year is:"<<num2;break;
        //case 2:OUTPUT message 4 break
        case 2:cout<<"\n The month is Fbruary\n the year is:"<<num2;break;
        //case 3:OUTPUT message 5 break
        case 3:cout<<"\n The month is March\n the year is:"<<num2;break;
        //case 4:OUTPUT message 6 break
        case 4:cout<<"\n The month is Abril\n the year is:"<<num2;break;
        //case 5:OUTPUT message 7 break
        case 5:cout<<"\n The month is May\n the year is:"<<num2;break;
        //case 6:OUTPUT message 8 break
        case 6:cout<<"\n The month is June\n the year is:"<<num2;break;
        //case 7:OUTPUT message 9 break
        case 7:cout<<"\n The month is July\n the year is:"<<num2;break;
        //case 8:OUTPUT message 10 break
        case 8:cout<<"\n The month is August\n the year is:"<<num2;break;
        //case 9:OUTPUT message 11 break
        case 9:cout<<"\n The month is September\n the year is:"<<num2;break;
        //case 10:OUTPUT message 12 break
        case 10:cout<<"\n The month is October\n the year is:"<<num2;break;
        //case 11:OUTPUT message 13 break
        case 11:cout<<"\n The month is November\n the year is:"<<num2;break;
        //case 12:OUTPUT message 14 break
        case 12:cout<<"\n The month is December\n the year is:"<<num2;break;
        //default
        default:
            //OUTPUT message 15
            cout<<"\n invaild number"; }
    //End switch
    //OUTPUT message 16
    cout<<"\n ="<<setfill('=')<<setw(45)<<"=";
    return 0;
}