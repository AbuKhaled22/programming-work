/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <21/9/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 21/9/2022 11:25 AM

Problem: display one line blank and 4 line message and 
one line blank and one line message on the left

IOFC: List of input, output, formula, and condition
input:n/a
output:one line blank and 4 line message and 
one line blank and one line message on the left

formula:n/a 
condition:n/a 

IO Format:n/a 
 
Variables/constants:n/a

Algorithm:
Begin

OUTPUT message 1
OUTPUT message 2
OUTPUT message 3
OUTPUT message 4
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
int main () 
{
  //OUTPUT message 1
  cout<<"\n \"Be thankful for what you have\;\n";
  //OUTPUT message 2
  cout<<" you\'ll end up having more.\n";
  //OUTPUT message 3
  cout<<" If you concentrate on what you don't have,\n";
  //OUTPUT message 4
  cout<<" you will never, ever have enough.\"\n\n";
  //OUTPUT message 5
  cout<<setw(60);
  cout<<"(Oprah winfrey)";
  return 0;
}