/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <5/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 5/10/2022 2:20

Problem: dispaly a table of Kelvin temperature units and 
Fahrenheit, and Celsius degrees

IOFC: List of input, output, formula, and condition

Input: n/a

output: table of Kelvin temperature units and 
Fahrenheit, and Celsius degrees 

formula:
1.F = 1.8 (K - 273) + 32
2.C = K - 273.15

      
condition:n/a

IO Format: Design of IO format 
line1:           table of Kelvin,Fahrenheit, and Celsius 
line2:====================================================================================
line3: Significant Value                       kelvin         fahrenhet         celsius   
line4: Absolute Zero                            0.00              f                 c
line5: Boiling point of liquid nitrogen         77.40             f                 c
line6: Sublimation points of dry ice            195.10            f                 c
line7: Intersection of Celsius and              
line8: Fahrenheit scales                        233.15            f                 c
line8: Normal human body temperature            310.00            f                 c     
line9: Water's boiling point at 1 atm           373.1339          f                 c
line10:====================================================================================


Variables/constants: k1, k2, k3,k4, k5, k6 


Algorithm: List of steps and order to solve the problem
Begin
     SET= k1=0.00, k2=77.40, k3=195.10, k4=233.15, k5=310.00, k6=373.1339
     OUTPUT message 1 
     OUTPUT message 2 
     OUTPUT message 3
     PROCESS F = 1.8 (K1 - 273) + 32, C = K1 - 273.15 OUTPUT message 4
     PROCESS F = 1.8 (K2 - 273) + 32, C = K2 - 273.15 OUTPUT message 5
     PROCESS F = 1.8 (K3 - 273) + 32, C = K3 - 273.15 OUTPUT message 6
     OUTPUT message 7
     PROCESS F =1.8 (K4 - 273) + 32, C = K4 - 273.15 and OUTPUT message 8
     PROCESS F = 1.8 (K5 - 273) + 32, C = K5 - 273.15 OUTPUT message 9
     PROCESS F = 1.8 (K6 - 273) + 32, C = K6 - 273.15 OUTPUT message 10
     OUTPUT message 10
End


Test data: 
1.k=0.00, f=-459.4, c=-273.15
2.k=77.40, f=-320.08, c=-195.75
3.k=195.10, f=-108.22, c=-78.05
4.k=233.15, f=-39.73, c=-40
5.k=310.00, f=98.6, c=36.85
6.373.1339, f=212.241, c=99.99839


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/ 


#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    //SET= k1=0.00, k2=77.40, k3=195.10, k4=233.15, k5=310.00, k6=373.1339
    float k1=0.00, k2=77.40, k3=195.10, k4=233.15, k5=310.00, k6=373.1339;
    //OUTPUT message 1
    cout<<setw(50)<<" table of Kelvin,Fahrenheit, and Celsius\n"
        //OUTPUT message 2
        <<" ="<<setfill('=')<<setw(75)<<"="<<setfill(' ')
        //OUTPUT message 3
        <<"\n Significant Value"<<setw(50)<<"kelvin\t  fahrenhet\t celsius\n"
        //PROCESS F = 1.8 (K1 - 273) + 32, C = K1 - 273.15 OUTPUT message 4
        <<" Absolute Zero:"<<setw(28)<<k1<<"\t   "<<(1.8*(k1 - 273)+32)<<"\t "<<(k1 - 273.15)
        //PROCESS F = 1.8 (K2 - 273) + 32, C = K2 - 273.15 OUTPUT message 5
        <<"\n Boiling point of liquid nitrogen:"<<setw(11)<<k2<<"\t   "<<(1.8*(k2 - 273)+32)<<"\t "<<(k2 - 273.15)
        //PROCESS F = 1.8 (K3 - 273) + 32, C = K3 - 273.15 OUTPUT message 6
        <<"\n Sublimation points of dry ice:"<<setw(15)<<k3<<"\t   "<<(1.8*(k3 - 273)+32)<<"\t "<<(k3 - 273.15)
        //OUTPUT message 7
        <<"\n Intersection of Celsius and"
        //PROCESS F = 1.8 (k4 - 273) + 32, C = k4 - 273.15 OUTPUT message 9
        <<"\n Fahrenheit scales "<<setw(28)<<k4<<"\t   "<<(1.8*(k4 - 273)+32)<<"\t "<<(k4 - 273.15)
        //PROCESS F = 1.8 (K5 - 273) + 32, C = K5 - 273.15 OUTPUT message 9
        <<"\n Normal human body temperature:"<<setw(13)<<k5<<"\t    "<<(1.8*(k5 - 273)+32)<<"\t  "<<(k5 - 273.15)
        //PROCESS F = 1.8 (K6 - 273) + 32, C = K6 - 273.15 OUTPUT message 9
        <<"\n Water's boiling point at 1 atm:"<<setw(16)<<k6<<"    "<<(1.8*(k6 - 273)+32)<<"\t  "<<(k6 - 273.15)
        //OUTPUT message 10
        <<"\n ="<<setfill('=')<<setw(75)<<"=";
    return 0;
}