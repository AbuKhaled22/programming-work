/*
Created by <your name> on <current date>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: DDMMYYYY Time

Problem: read the usage of water in thousands of gallons and dispaly
the cost for particular month and if the user still have unpaid from previous monthe

IOFC: 

Input: use, last fee

Output: the cost of the use age 

Formula: 
1.cost1= 35+(use*1.1)
2.cost2= cost1+last fee+2 

condition:
1.value of last fee greater than zero 


IO Format: Design of IO 
line1:              water bill
line2: ++++++++++++++++++++++++++++++++++++++++++++
line3: Enter your useage of  
line4: water in thousands of gallon:
line5: 
line6: Enter the unpid fees: 
line7: +++++++++++++++++++++++++++++++++++++++++++++
line8: the last update fees: 
line9: take note that there are RM2 fine if there was unpid money
 
Variables/constants: use, last fees, cost1

Algorithm: List of steps and order to solve the problem

Begin  
    SET use=0, last fees=0, cost1=0
    OUTPUT message 1
    OUTPUT message 2
    OUTPUT message 3
    INPUT use
    Blank line and INPUT last fee
    OUTPUT message 4
    cost1= 35+(use*1.1)
    if last fees>0
    PROCESS and OUTPUT (cost1+last fee+2)
    else
    OUTPUT cost1
    End if
End

Test data: 
1.use=20, last fees=0, cost1=57
2.use=25, last fees=5, cost2=69.5

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/  
  
#include <iostream>
#include <iomanip>
  using namespace std;

 
 
 
int main(){
  
 
float use=0, lastfees=0, cost1 = 0;
  
cout << setw (30) << " Water bill" 
    <<"\n +"<< setfill ('+')<< setw (30) << "+" << setfill (' ') 
    <<"\n Enter your useage of\n"
    <<" water in thousands of gallon: ";
cin>>use;
cout<<"\n Enter the unpid fees: ";
cin>> lastfees;
cout<<"\n +"<<setfill('+')<<setw(30)<<"+"<<setfill(' ');
cost1= 35+(use*1.1);

if (lastfees>0)
cout<<"\n the last update fees: "<<(cost1+ lastfees + 2);

else
cout<<"\n the last update fees: "<<cost1;

return 0;

}