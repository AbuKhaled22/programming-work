/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <7/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 7/10/2022 9:10

Problem: display a table of Olympic competition running distances
in meters, kilometers, yards, and miles

IOFC: List of input, output, formula, and condition

Input: n/a

output: a table of Olympic competition running distances
in meters, kilometers, yards, and miles 
 

formula:
1.km=m*0.001
2.yd=m*1.094
3.mi=m*0.0006215

      
condition:n/a

IO Format: Design of IO format 
line1:           a table of Olympic competition running distances in
line2:====================================================================================
line3: mater           kilometers         yards           miles   
line4: 100                k                yd               mi
line5: 200                k                yd               mi
line6: 400                k                yd               mi
line7: 800                k                yd               mi
line10:====================================================================================


Variables/constants: m1, m2, m3, m4


Algorithm: List of steps and order to solve the problem
Begin
     SET= m1=100, m2=200, m3=400, m4=800, yd=0.0 mi=0.0
     OUTPUT message 1 
     OUTPUT message 2 
     OUTPUT message 3
     PROCESS km=m1*0.001, yd=m1*1.094, mi=m1*0.0006215 OUTPUT message 4
     PROCESS km=m2*0.001, yd=m2*1.094, mi=m2*0.0006215 OUTPUT message 5
     PROCESS km=m3*0.001, yd=m3*1.094, mi=m3*0.0006215 OUTPUT message 6
     PROCESS km=m4*0.001, yd=m4*1.094, mi=m4*0.0006215 OUTPUT message 7
     OUTPUT message 8
End


Test data: 
1.m=100, km=0.10, yd=109.40, mi=0.06
2.m=200, km=0.20, yd=218.80, mi=0.12
3.m=400, km=0.40, yd=437.60, mi=0.25
4.m=800, km=0.80, yd=875.20, mi=0.50

I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    
    //SET= m1=100, m2=200, m3=400, m4=800, yd=0.0 mi=0.0
    int m1=100, m2=200, m3=400, m4=800;
    //OUTPUT message 1
    cout<<setw(40)<<" a table of Olympic competition running distances in\n"
        //OUTPUT message 2
        <<" ="<<setfill('=')<<setw(40)<<"="<<setfill(' ')
        //OUTPUT message 3
        <<"\n mater\t kilometers   yards\t miles\n "<<fixed
        //PROCESS km=m1*0.001, yd=m1*1.094, mi=m1*0.0006215 OUTPUT message 4
        <<"\n "<<m1<<"\t  "<<setprecision(2)<<(m1*0.001)<<"\t      "<<(m1*1.094)<<"\t "<<m1*0.0006215
        //PROCESS km=m1*0.001, yd=m1*1.094, mi=m1*0.0006215 OUTPUT message 4
        <<"\n "<<m2<<"\t  "<<setprecision(2)<<(m2*0.001)<<"\t      "<<(m2*1.094)<<"\t "<<m2*0.0006215
        //PROCESS km=m1*0.001, yd=m1*1.094, mi=m1*0.0006215 OUTPUT message 4
        <<"\n "<<m3<<"\t  "<<setprecision(2)<<(m3*0.001)<<"\t      "<<(m3*1.094)<<"\t "<<m3*0.0006215
        //PROCESS km=m1*0.001, yd=m1*1.094, mi=m1*0.0006215 OUTPUT message 4
        <<"\n "<<m4<<"\t  "<<setprecision(2)<<(m4*0.001)<<"\t      "<<(m4*1.094)<<"\t "<<m4*0.0006215
        //OUTPUT message 8
        <<"\n ="<<setfill('=')<<setw(40)<<"=";
    

    return 0;
}



