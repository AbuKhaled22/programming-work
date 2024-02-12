/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <22/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 22/10/2022 9:30

Problem:  reads two number and display the pH Value and Examble Element 

IOFC: 

Input: num

output: pH Value and Examble Element

Formula: n/a

condition: 
1.num == 1
2.num == 2
3.num == 3
4.num == 4
5.num == 5
6.num == 6
7.num == 7
8.num == 8
9.num == 9
10.num== 10
11.num== 11
12.num== 12
13.num== 13
14.num== 14
15.num== 15

IO Format:

line1:          pH Value and Examble Element
line2: ==========================================
line3: Enter number from (1-15): 
line4:
line5: The pH Value is: 
line6: The Examble Element is :
line7: ===========================================
 
Variables/constants:  num

Algorithm: 

Begin
    SET num=0
    OUTPUT message 1
    OUTPUT message 2
    INPUT num
    switch(num)
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
        case 13:OUTPUT message 15 break
        case 14:OUTPUT message 16 break
        case 15:OUTPUT message 17 break
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
    //SET num=0
    int num=0;
    //OUTPUT message 1
    cout<<setw(40)<<" pH Value and Examble Element\n"
    //OUTPUT message 2
        <<" ="<<setfill('=')<<setw(45)<<"="<<setfill(' ')
    //INPUT num
        <<"\n Enter number from (1-15): ";
    cin>>num;
    //switch(num)
    switch(num){
        //case 1:OUTPUT message 3 break
        case 1:cout<<"\n The pH Value is:0\n The Examble Element is: Battery acid ";break;
        //case 2:OUTPUT message 4 break
        case 2:cout<<"\n The pH Value is:1\n The Examble Element is: Sulfuric acid";break;
        //case 3:OUTPUT message 5 break
        case 3:cout<<"\n The pH Value is:2\n The Examble Element are: Lemon juice, vinegar";break;
        //case 4:OUTPUT message 6 break
        case 4:cout<<"\n The pH Value is:3\n The Examble Element are: Orange juice, soda";break;
        //case 5:OUTPUT message 7 break
        case 5:cout<<"\n The pH Value is:4\n The Examble Element are: Acidic rain, acidic lake";break;
        //case 6:OUTPUT message 8 break
        case 6:cout<<"\n The pH Value is:5\n The Examble Element are: Bananas, Clean rain";break;
        //case 7:OUTPUT message 9 break
        case 7:cout<<"\n The pH Value is:6\n The Examble Element are: Healthy lake, mil";break;
        //case 8:OUTPUT message 10 break
        case 8:cout<<"\n The pH Value is:7\n The Examble Element is: Pure water";break;
        //case 9:OUTPUT message 11 break
        case 9:cout<<"\n The pH Value is:8\n The Examble Element are: Sea water, eggs";break;
        //case 10:OUTPUT message 12 break
        case 10:cout<<"\n The pH Value is:9\n The Examble Element is: Baking soda";break;
        //case 11:OUTPUT message 13 break
        case 11:cout<<"\n The pH Value is:10\n The Examble Element is: Milk of Magnesia";break;
        //case 12:OUTPUT message 14 break
        case 12:cout<<"\n The pH Value is:11\n The Examble Element is: Ammonia";break;
        //case 13:OUTPUT message 15 break
        case 13:cout<<"\n The pH Value is:12\n The Examble Element is: Soapy water";break;
        //case 14:OUTPUT message 16 break
        case 14:cout<<"\n The pH Value is:13\n The Examble Element is: Bleach";break;
        //case 15:OUTPUT message 17 break
        case 15:cout<<"\n The pH Value is:14\n The Examble Element is: Liquid drain cleaner";break;
        //default
        default:
            //OUTPUT message 15
            cout<<"\n invaild number"; }
    //End switch
    //OUTPUT message 16
    cout<<"\n ="<<setfill('=')<<setw(45)<<"=";
    
    return 0;
}