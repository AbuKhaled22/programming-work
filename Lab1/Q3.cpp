/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <21/9/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 21/9/2022 12:15

Problem: display one line symbols with message,one line blank,2line message,
one line blank,one line message,one line message on the left,2line message,
one line blank,one line message,one line blank and one line symbols

IOFC: List of input, output, formula, and condition
input:n/a

output: one line symbols with message,one line blank,2line message,
one line blank,one line message,one line message on the left,2line message,
one line blank,one line message,one line blank and one line symbols

formula:n/a
condition:n/a 

IO Format:n/a 
 
Variables/constants:n/a

Algorithm:
begin

OUTPUT message 1
OUTPUT message 2
OUTPUT message 3
OUTPUT message 4
OUTPUT message 5
OUTPUT message 6
OUTPUT message 7
OUTPUT message 8
OUTPUT message 9

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
    // OUTPUT message 1
    cout<<" \\----------------By Oprah winfrey------------------------\%\n\n";
     // OUTPUT message 2
    cout<<"\tDo the one thing you think you cannot do.\n";
     // OUTPUT message 3
    cout<<"\tFail at it.\n\n";
     // OUTPUT message 4
    cout<<"\tTry again.\n";
     // OUTPUT message 5
    cout<<setw(60);
    cout<<"Do better the second time.\n\n";
     // OUTPUT message 6
    cout<<"\tThe only people who never tumble are those\n"
        <<"\twho never mount the high wire.\n\n"; // message 7
    cout<<"\tThis is your moment. Own it.\n\n"; // message 8
    // OUTPUT message 9
    cout<<" \%--------------------------------------------------------\\";
    
    return 0;
}