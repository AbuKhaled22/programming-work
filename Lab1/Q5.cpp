/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <23/9/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 23/9/2022 5:45 PM

Problem: read 3 numbers and display it in reverse order

IOFC: List of input, output, formula, and condition
input: num1, num2, num3

output: 3 numbers in reverse order

formula:n/a 
condition:n/a 

IO Format:
Enter three (3) numbers: x.x  y.y z.z

The number in reverse order
First:             z.zz
Second:           y.yyy
 third:          x.xxxx
Variables/constants:  num1, num2, num3

Algorithm:
Begin

SET num1=0, num2=0,num3=0

INPUT num1, num2, num3
OUTPUT message 1
OUTPUT message 2
OUTPUT message 3
OUTPUT message 4
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
    //SET num1=0, num2=0,num3=0
   float num1, num2, num3;
   //INPUT num1, num2, num3
   cout<<" Enter three (3) numbers: ";
    cin>>num1>> num2>> num3;
    //OUTPUT message 1
    cout<<"\n The number in reverse order\n";
    cout<<fixed;
    //OUTPUT message 2
    cout<<setw(10)<<left<<" First:"
        <<setprecision(2)<<setw(10)<<right<<num3<<endl;
    //OUTPUT message 3
    cout<<setw(10)<<left<<" Second:"
        <<setprecision(3)<<setw(10)<<right<<num2<<endl;
    //OUTPUT message 4
    cout<<setw(10)<<left<<" Third:" 
        <<setprecision(4)<<setw(10)<<right<<num1<<endl;
    
    return 0;
}