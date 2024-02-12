/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <23/9/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 23/9/2022 9:15 PM

Problem: display 2 line symbols separate it by one line message,
4 line of decimal numbers each line has 2 numbers one on the left and the other
on the right and one line symbols

IOFC: List of input, output, formula, and condition
input:n/a

output: 2 line symbols separate it by one line message,
4 line of decimal numbers each line has 2 numbers one on the left and the other
on the right and one line symbols

formula:n/a 
condition:n/a 

IO Format:n/a

Variables/constants: no1, no2

Algorithm:
Begin

SET no1=x.x, no2=y.y

OUTPUT message 1
OUTPUT message 2
OUTPUT message 3
OUTPUT message 4
OUTPUT message 5
OUTPUT message 6
OUTPUT message 7
OUTPUT message 8
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
    //SET no1=x.x, no2=y.y
  float no1=2.4;
  double no2=4.7;
  
   //OUTPUT message 1
  cout<<"\|---------------------------------------\|\n";
  //OUTPUT message 2
  cout<<setw(30)<<"The two numbers\n";
   //OUTPUT message 3
  cout<<"\|=======================================\|\n";
  cout<<fixed;
   //OUTPUT message 4
  cout<<setprecision(1)<<setw(7)<<left<<""<<no1
      <<setprecision(4)<<setw(17)<<right<<""<<no2<<endl;
   //OUTPUT message 5
  cout<<setprecision(2)<<setw(6)<<left<<""<<no1
      <<setprecision(3)<<setw(17)<<right<<""<<no2<<endl;
   //OUTPUT message 6
  cout<<setprecision(3)<<setw(5)<<left<<""<<no2
      <<setprecision(2)<<setw(17)<<right<<""<<no1<<endl;
   //OUTPUT message 7
  cout<<setprecision(4)<<setw(4)<<left<<""<<no2
      <<setprecision(1)<<setw(17)<<right<<""<<no1<<endl;
   //OUTPUT message 8
  cout<<'\|'  
      <<setfill('-')
      <<setw(40)
      <<'\|';  
    return 0;
}