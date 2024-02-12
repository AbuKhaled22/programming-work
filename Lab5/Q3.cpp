/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <17/10/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 17/10/2022 1:50

Problem: Write a program that prints on the screen a degree classification of a user based on entered 
gender, and CGPA

IOFC: 

Input: gender, CGPA

Output:Degree classification

formula:n\a

condition:
1.gender==F && CGPA>3.75
2.gender==F && 3.00=<CGPA<=3.74
3.gender==M && 2.5=<CGPA<=2.99
4.gender==M && 2.00=<CGPA<=2.49

IO Format: 
line1:                    Degree classification
line2: -----------------------------------------------
line3: Enter your gender F for female M for male:
line4: Enter your CGPA: 
line5: -----------------------------------------------
line6: The Degree classification is: 
 

Variables/constants: gender, CGPA

Algorithm: List of steps and order to solve the problem

Begin
    SET  CGPA=0
    SET gender='\0'
    OUTPUT message 1
    OUTPUT message 2
    INPUT gender
    INPUT CGPA
    OUTPUT message3
    if (gender==F && CGPA>3.75)
        OUTPUT message 3
    else if (gender==F && 3.00<=CGPA<=3.74)
         OUTPUT message 4
    else if (gender==M && 2.5<=CGPA<=2.99)
        OUTPUT message 5
    else if (gender==M && 2.00<=CGPA<=2.49)
        OUTPUT message 6
    End if
End

Test data: n/a


I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //SET  CGPA=0
    float CGPA=0;
    //SET gender='\0'
    char gender='\0';
    //OUTPUT message 1
    cout<<setw(30)<<"Degree classification \n"
        //OUTPUT message 2
        <<"-"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ')
        //INPUT gender
        <<" Enter your gender F for female M for male: ";
    cin>>gender;
    //INPUT op
    cout<<" Enter your CGPA: ";
    cin>> CGPA;
    //OUTPUT message3
    cout<<"-"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');
    //if (gender=='F' && CGPA>3.75)
    if (gender=='F' && CGPA>3.75)
        //OUTPUT message 3
        cout<<" The Degree classification is: First-Class Honours"; 
    //else if (gender=='F' && 3.00<=CGPA<=3.74)
    else if (gender=='F' && 3.00<=CGPA<=3.74)
        //OUTPUT message 4
        cout<<" The Degree classification is: Upper Second-Class Honours";
    //else if (gender=='M' && 2.5<=CGPA<=2.99)
    else if (gender=='M' && 2.5<=CGPA<=2.99)
        //OUTPUT message 5
        cout<<" The Degree classification is: Lower Second-Class Honours";
    //else if (gender=='M' && 2.00<=CGPA<=2.49)
    else if (gender=='M' && 2.00<=CGPA<=2.49)
        //OUTPUT message 6
        cout<<" The Degree classification is: Third-Class Honours";
    //End if
    
    
    return 0;
}



