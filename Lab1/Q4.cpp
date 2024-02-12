/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <19/9/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 19/9/2022 1:40 PM

Problem: print 3 line message that the user can enter a number in each line,
print one line blank and display one line message with user's number

IOFC: List of input, output, formula, and condition

input: 
1.num1 
2.num2 
3.num3

output: 3 line message that the user can enter a number in each line,
print one line blank and display one line message with user's number

formula:n/a 
condition:n/a 

IO Format:
Enter first number:x
Enter second number:y
Enter third number:z
The number in reverse order: z    y   x
 
Variables/constants: num1,num2,num3

Algorithm:
Begin
SET num1=0, num2=0,num3=0
INPUT num1, num2, num3
OUTPUT message num1  num2  num3
End

Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/  
  
#include <iostream>
  
using namespace std;

 
 
int
main ()
{
  //SET num1=0, num2=0,num3=0
int num1, num2, num3;
  
 //INPUT num1
cout << " Enter first number: ";
cin >> num1;
  //INPUT num2
cout << " Enter second number: ";
cin >> num2;
  //INPUT num3
cout << " Enter third number: ";
cin >> num3;
  //OUTPUT message num1  num2  num3
cout << "\n The number in reverse order: " << num3 << "    " << num2 <<
    "    " << num1;
  
 
return 0;

}
