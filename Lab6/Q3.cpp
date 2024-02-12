/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT > on <27/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 27/10/2022 11:45

Problem:  Using for loop,print all the even and odd numbers from 0 to n,
Also, print the sum of odd and even numbers
IOFC: 

Input:n/a

Output: even, odd number and the sum of odd and even

formula: 
sum= x+y

condition: 
1.even<=2*n
2.even %2 ==0
3.odd<=2*n
4.odd %2 !=0

IO Format: 
line1:             numbers
line2: =================================
line3: even : a a
line4: odd  : b b
line5: sum = z
line5: =================================
 
Variables/constants: even=2, odd=1, n=0

Algorithm:  

Begin
    SET n=0, x=0, y=0
    OUTPUT message 1
    OUTPUT messgae 2
    OUTPUT message 3
    for(int even=2;even<=2*n;even++)
        if(even %2 ==0)
            OUTPUT message 4
            PROCESS x+=even
        End if
    End for    
    OUTPUT message 5
    for(int odd=1;odd<=2*n;odd++)
        if(odd %2 !=0)
            OUTPUT message 6
            PROCESS y+=odd
        End if
    End for
    PROCESS and OUTPUT message 7
    OUTPUT message 8
End

Test data:
1-x=30, y=25 sum= 55
2-x=

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/




#include <iostream>
#include <iomanip>
using namespace std;




int main(){
    
    //SET n=0, x=0, y=0
    int n=5, x=0, y=0;
    //OUTPUT message 1
    cout<<setw(20)<<"Numbers "
    //OUTPUT messgae 2
        <<"\n ="<<setfill('=')<<setw(30)<<"="<<setfill(' ')
    //OUTPUT message 3
        <<"\n even: ";
    //for(int even=2;even<=2*n;even++)
    for(int even=2;even<=2*n;even++){
        //if(even %2 ==0)
        if(even %2 ==0){
            //OUTPUT message 4
            cout<<even<<" ";
           //PROCESS x+=even
            x+=even;} 
        //End if
        }
    //End for  
    //OUTPUT message 5
    cout<<"\n odd: ";
    //for(int odd=1;odd<=2*n;odd++)
    for(int odd=1;odd<=2*n;odd++){
        //if(odd %2 !=0)
        if(odd %2 !=0){
            //OUTPUT message 6
            cout<<odd<<" ";
            //PROCESS y+=odd
         y+=odd; }
        //End if 
        }
    //End for
    //PROCESS and OUTPUT message 7
    cout<<"\n sum = "<< x+y;
    //OUTPUT message 8
    cout<<"\n ="<<setfill('=')<<setw(30)<<"=";
    
    
    return 0;
}