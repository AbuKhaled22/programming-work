/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT > on <7/11/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 7/11/2022 1:35 AM 

Problem: display smiling face and one line message after smiling face

IOFC: List of input, output, formula, and condition
input:n/a

output:smiling face and one line message after smiling face

formula:n/a 
condition:n/a 

IO Format:n/a

Variables/constants:n/a

Algorithm:
BEGIN main()
    CALL hair()
    CALL eyes()
    CALL nose() 
    CALL mouth() 
    CALL chin() 
    OUTPUT message 11
END

BEGIN hair()
    OUTPUT symbols 1
    OUTPUT symbols 2
    OUTPUT symbols 3
END

BEGIN eyes()
    OUTPUT symbols 4
    OUTPUT symbols 5
    OUTPUT symbols 6
END

BEGIN nose()
    OUTPUT symbols 7
END

BEGIN mouth()
    OUTPUT symbols 8
END

BEGIN chin()
    OUTPUT symbols 9
    OUTPUT symbols 10
END



Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/ 


#include <iostream>
using namespace std;

void hair(void);
void eyes(void);
void nose(void);
void mouth(void);
void chin(void);

int main(){
    //CALL hair()
    hair();
    //CALL eyes()
    eyes();
    //CALL nose()
    nose();
    //CALL mouth()
    mouth(); 
    //CALL chin()
    chin(); 
    
 
 
    return 0;
}
void hair(void){
    //OUTPUT symbols 1
 cout<<"\n\t @@@@@@@@@@@@@@\n"
     //OUTPUT symbols 2
     <<"      ""/ @@@@@@@@@@@@@@@@ \\\n"
     //OUTPUT symbols 3
     <<"      ""|   @@@@@@@@@@@@   |\n";
    
}

void eyes(void){
    //OUTPUT symbols 4
    cout<<"      ""|                  |\n"
     //OUTPUT symbols 5
     <<"      ""|   -----   -----  |\n"
     //OUTPUT symbols 6
     <<"     ""(|     +       +    |)\n";
}

void nose(void){
    //OUTPUT symbols 7
    cout<<"      ""|         |        |\n";
}

void mouth(void){
    //OUTPUT symbols 8
    cout<<"       ""\\      \\___/     /\n";
}

void chin(void){
     //OUTPUT symbols 9
    cout<<"         ""\\            / \n"
     //OUTPUT symbols 10
     <<"           ""\\________/  \n\n";
}











