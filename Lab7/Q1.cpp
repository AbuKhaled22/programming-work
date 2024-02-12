/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT > on <7/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 7/11/2022 12:45PM

Problem:  print a table of degrees Celcius with 
 degrees Fahrenheit using Function

IOFC: List of input, output, formula, and condition

Input: n/a

Output: table of degrees Celcius with 
degrees Fahrenheit
 
formula: n/a 

Condition: 
1.Celcius<=100&&  Fahrenheit<=212



IO Format: Design of IO format

line1: ____________________________________________
line2: Degree Celcius    Degree Fahrenheit
line3:    0.00               32.00
line4:    20.00               68.00
line5:    40.00              104.00
line6:    60.00              140.00
line7:    80.00              176.00
line8:    100.00              212.00
line9: ____________________________________________

Variables/constants: Celcius,  Fahrenheit 

Algorithm: List of steps and order to solve the problem

BEGIN main()
    CALL design
End  

BEGIN design()
    OUTPUT message 1
    CALL DEGREE
    OUTPUT message 3
End

BEGIN degree()
    SET Celcius=0.00,  Fahrenheit=32.00
    OUTPUT message 2
    While(Celcius<=100 && Fahrenheit<=212)
        OUTPUT Celcius, Fahrenheit
        Celcius+=20
        Fahrenheit+=36
    End While
End

Test data: Provide a set of test data (if any) - input & 
expected output

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/






#include <iostream>
#include <iomanip>
using namespace std;

void design(void);
void degree(void);


int main(){
    //CALL design
    design();
    return 0;
}

void design(void){
    //OUTPUT message 1
    cout<<" _"<<setfill('_')<<setw(40)<<"_\n"<<setfill(' ');
    //CALL DEGREE
    degree();
    //OUTPUT message 3
    cout<<" _"<<setfill('_')<<setw(40)<<"_";
    
}

void degree(void){
    //SET Celcius=0.00,  Fahrenheit=32.00
     float Celcius=0,  Fahrenheit=32; 
    //OUTPUT message 2
    cout<<setw(10)<<left<<"  Degree Celcius  "<<setw(20)<<right<<"  Degree Fahrenheit\n";
   //while(Celcius<=100 && Fahrenheit<=212)
    while(Celcius<=100.00 && Fahrenheit<=212.00){
        //OUTPUT Celcius, Fahrenheit
        cout<<fixed<<setprecision(2)<<setw(5)<<left<<" "<<Celcius<<setw(20)<<right<<Fahrenheit<<endl;
        //Celcius+=20
        Celcius+=20;
        //Fahrenheit+=36
        Fahrenheit+=36;} 
    //End While
}