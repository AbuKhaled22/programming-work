/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <10/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 10/12/2022 2:00

Problem: read four (4) Celsius and Fahrenheit degrees and displays a table of these 
degrees with their corresponding degrees Fahrenheit and Kelvin

IOFC: List of input, output, formula, and condition

Input: Celsius[4], Fahrenheit[4]

Output: Fahrenheit, Kelvin

formula:
1.(Celsius[]* 1.8) + 32 
2.(Fahrenheit[] + 459.67)*1.8
3.i++
4.x++

Condition:n\a

IO Format: Design of IO format 
line1: Enter four Celsius and Fahrenheit degrees:
line2: x.xx y.yy 
line3: x.xx y.yy
line4: x.xx y.yy
line5: x.xx y.yy
line6: Table of Fahrenheit and Kelvin degrees
line7: Fahrenheit   Kelvin 
line8: ----------------------------------------
line9: h.hhh        z.zzzz 
line10:h.hhh        z.zzzz 
line11:h.hhh        z.zzzz 
line12:h.hhh        z.zzzz 
line12:----------------------------------------

 
Variables/constants:
Celsius[4]={'\0'}, Fahrenheit[4]={'\0'}, i=0, x=0, sum1=0,sum2=0 

Algorithm: List of steps and order to solve the problem

BEGIN
    SET Celsius[4]={'\0'}, Fahrenheit[4]={'\0'},sum1=0, sum2=0
    OUTPUT message line1 
    for(i=0; i<4;i++)
        OUTPUT space
        INPUT Celsius[i] and Fahrenheit[i]
    END for
    OUTPUT two blank line and message line6
    OUTPUT message line7
    OUTPUT message line8
    for(x=0;x<4; x++)
        PROCESS sum1=(Celsius[x]* 1.8) + 32
        PROCESS sum2=(Fahrenheit[] + 459.67)*1.8
        OUTPUT sum1 and sum2
    END for
    OUTPUT message line12
END
    
Test data: 
1.Celsius=4.4, Fahrenheit=39.920
2.Fahrenheit=50, Kelvin=917.4060
3.Celsius=15.5, Fahrenheit=59.900
4.Fahrenheit=70, Kelvin=953.4060

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //SET Celsius[4]={'\0'}, Fahrenheit[4]={'\0'},sum1=0, sum2=0
    float Celsius[4]={'\0'}, Fahrenheit[4]={'\0'},sum1=0, sum2=0;
    //OUTPUT message line1 
    cout<<" Enter four Celsius and Fahrenheit degrees:\n";
    //for(i=0; i<4;i++)
    for(int i=0; i<4;i++){
        //OUTPUT space
        cout<<" ";
        //INPUT Celsius[i] and Fahrenheit[i]
        cin>>Celsius[i]>>Fahrenheit[i];
     }//END for
    //OUTPUT two blank line and message line6
    cout<<"\n\n Table of Fahrenheit and Kelvin degrees\n";
    //OUTPUT message line7
    cout<<" Fahrenheit   Kelvin\n"
    //OUTPUT message line8
        <<" -"<<setw(40)<<setfill('-')<<"-"<<setfill(' ');
    //for(x=0;x<4; x++)
    for(int x=0;x<4; x++){
        //PROCESS sum1=(Celsius[x]* 1.8) + 32
        sum1=(Celsius[x]* 1.8) + 32;
        //PROCESS sum2=(Fahrenheit[] + 459.67)*1.8
        sum2=(Fahrenheit[x] + 459.67)*1.8;
        //OUTPUT sum1 and sum2
        cout<<"\n "<<fixed<<setprecision(3)<<sum1<<setw(15)<<right<<setprecision(4)<<sum2;
     }//END for
    //OUTPUT message line12
    cout<<"\n -"<<setw(40)<<setfill('-')<<"-";
    
    return 0;
}



