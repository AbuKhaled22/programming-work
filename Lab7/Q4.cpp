/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <17/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 17/11/2022 11:45

Problem: read numbers from user and check if it is  even or odd in function

IOFC: List of input, output, formula, and condition

Input: num

Output: the total of even and odd numbers

formula: 
1.even++
2.odd++

Condition:
1.num!=999
2.num%2==0

IO Format: Design of IO format 
line1: ------------------------------------
line2: Enter the number 1: 
line3: Enter the number 2:
line4: Enter the number 3:
line5: Enter the number 4:
line6: ------------------------------------
line7: the even number= 
line8: the odd number=
line9: ------------------------------------
 
Variables/constants: num, even, odd, i

Algorithm: List of steps and order to solve the problem
BEGIN main()
    OUTPUT message1
    checkNumber()
    OUTPUT message2
    OUTPUT even
    OUTPUT odd
    OUTPUT message

BEGIN checkNumber()
    SET num=0, i=0
    do
        INPUT num
        if (num%2==0)
            even+=num
        else
            odd+=num
     while(num!=999)
END

Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void checkNumber(void);
int even=0, odd=0;

int main()
{
    //OUTPUT message1
    cout<<" -"<<setfill('-')<<setw(30)<<"-\n"<<setfill(' ');
    //checkNumber()
    checkNumber();
    //OUTPUT message2
    cout<<" -"<<setfill('-')<<setw(30)<<"-"<<setfill(' ');
    //OUTPUT even
    cout<<"\n the even = "<<even;
    //OUTPUT odd
    cout<<"\n the odd = "<<odd;
    //OUTPUT message3
    cout<<"\n -"<<setfill('-')<<setw(30)<<"-";

    return 0;
}


void checkNumber(void){
    int num=0, i=0;
    //do
    do{
        i++;
        //INPUT num
        cout<<" Enter the number "<<i<<":";
        cin>>num;
        //if (num%2==0)
        if (num%2==0)
            //even++
            even+=num;
        //else
        else
            //odd++
            odd+=num;
     //while(num!=999)
     }while(num!=999);
    
}
