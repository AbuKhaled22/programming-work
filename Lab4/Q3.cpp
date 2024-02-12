/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT > on <24/9/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 24/9/2022 10:30 AM 

Problem: raed the letter and display smiling face or angry face

IOFC: List of input, output, formula, and condition
input: x

output:smiling face or angry face

formula:n/a 
condition:
value is equal to S display smiling face
value is not equal to S display Angry face

IO Format:
line1:      MY SMILING/ANGRY FACE
line2: Enter option [S/A]:
line3 face message

Variables/constants:n/a

Algorithm:
Begin
    SET x='\0'
    INPUT x
    if(x=='S')
        OUTPUT symbols 1
        OUTPUT symbols 2
        OUTPUT symbols 3
        OUTPUT symbols 4
        OUTPUT symbols 5
        OUTPUT symbols 6
        OUTPUT symbols 7
        OUTPUT symbols 8
        OUTPUT symbols 9
        OUTPUT symbols 10
        OUTPUT message 11
    else
        OUTPUT symbols 12
        OUTPUT symbols 13
        OUTPUT symbols 14
        OUTPUT symbols 15
        OUTPUT symbols 16
        OUTPUT symbols 17
        OUTPUT symbols 18
        OUTPUT symbols 19
        OUTPUT symbols 20
        OUTPUT symbols 21
        OUTPUT message 22
    
End

Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/ 


#include <iostream>
using namespace std;


int main(){
    
    char x;
    
    cout<< "MY SMILING/ANGRY FACE\n "
        <<" Enter option [S/A]: ";
    cin>>x;
    
    if(x=='S')
     //OUTPUT symbols 1
 cout<<"\n\t $$$$$$$$$$$$$$\n"
     //OUTPUT symbols 2
     <<"      ""/ $$$$$$$$$$$$$$$$ \\\n"
     //OUTPUT symbols 3
     <<"      ""|   $$$$$$$$$$$$   |\n"
     //OUTPUT symbols 4
     <<"      ""|                  |\n"
     //OUTPUT symbols 5
     <<"      ""|   -----   -----  |\n"
     //OUTPUT symbols 6
     <<"     ""(|     +       +    |)\n"
     //OUTPUT symbols 7
     <<"      ""|         |        |\n"
     //OUTPUT symbols 8
     <<"       ""\\      \\___/     /\n"
     //OUTPUT symbols 9
     <<"         ""\\            / \n"
     //OUTPUT symbols 10
     <<"           ""\\________/  \n\n"
     //OUTPUT message 11
     <<"          ""Smiling Face";
     
     else 
     //OUTPUT symbols 12
 cout<<"\n\t $$$$$$$$$$$$$$\n"
     //OUTPUT symbols 13
     <<"      ""/ $$$$$$$$$$$$$$$$ \\\n"
     //OUTPUT symbols 14
     <<"      ""|   $$$$$$$$$$$$   |\n"
     //OUTPUT symbols 15
     <<"      ""|                  |\n"
     //OUTPUT symbols 16
     <<"      ""|    /\\       /\\   |\n"
     //OUTPUT symbols 17
     <<"     ""(|     *       *    |)\n"
     //OUTPUT symbols 18
     <<"      ""|         |        |\n"
     //OUTPUT symbols 19
     <<"       ""\\      \\----/    /\n"
     //OUTPUT symbols 20
     <<"         ""\\            / \n"
     //OUTPUT symbols 21
     <<"           ""\\________/  \n\n"
     //OUTPUT message 22
     <<"          ""Angry Face";
     
 
 
    return 0;
}