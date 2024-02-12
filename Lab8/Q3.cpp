/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <2/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 2/12/2022 12:22

Problem: display menu and read Ritcher Scale then display a message usin function

IOFC: List of input, output, formula, and condition

Input: num

Output: message

formula: n/a

Condition: 
1.num==-999
2.num>=0 && num<=5.0
3.num>=5.1 && num<=6.5
4.num>=6.6 && num<=7.5
5.num>7.5

IO Format: Design of IO format 

line1: Ritcher Scale            Characteristics
line2: 0-5.0                    Little or no damage
line2: 5.1-6.5                  Serious damage or wall cracks
line3: 6.6-7.5                  Disaster or houses and building collapse
line4: Higher                   Catastrophe, most building destroyed
line5: --------------------------------------------------------------------
line6: Enter ritcher scale or -999 to quit:
line7: 
line8: message
 
Variables/constants: num, num2, num3  

Algorithm: List of steps and order to solve the problem

BEGIN main 
    SET num=0.0
    OUTPUT message 1
    OUTPUT message 2
    OUTPUT message 3
    OUTPUT message 4
    OUTPUT message 5
    OUTPUT message 6
    do
        num= getInput()
        CALL printMsg(num)
     while(num !=-999)
    END do while loop
END

BEGIN getInput()
    SET num2=0.0
    INPUT num2
    return num2
END

BEGIN printMsg(num3)
    if(num3>=0 && num3<=5.0)
        OUTPUT message 7
    END if 
    else if(num3>=5.1 && num3<=6.5)
        OUTPUT message 8
    END else if
    else if(num>=6.6 && num<=7.5)
        OUTPUT message 9
    END else if
    else if(num>7.5)
        OUTPUT message 10
    END else if 
END

Test data:n/a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

float getInput();
void printMsg(float num3);

int main(){
    //SET num=0.0
    float num=0.0;
    //OUTPUT message 1
    cout<<setw(20)<<left<<" Ritcher Scale"<<right<<"Characteristics\n"
    //OUTPUT message 2
        <<setw(22)<<left<<" 0 – 5.0"<<right<<"Little or no damage\n"
    //OUTPUT message 3
        <<setw(22)<<left<<" 5.1 – 6.5"<<right<<"Serious damage or wall cracks\n"
    //OUTPUT message 4
        <<setw(22)<<left<<" 6.6 – 7.5"<<right<<"Disaster or houses and building collapse\n"
    //OUTPUT message 5
        <<setw(20)<<left<<" Higher"<<right<<"Catastrophe, most building destroyed\n"
    //OUTPUT message 6
        <<" -"<<setw(60)<<setfill('-')<<"-"<<setfill(' ');
    //do
   do{
        //num= getInput()
        num= getInput();
        //CALL printMsg(num)
        printMsg(num);
     //while(num !=-999)
     } while(num !=-999);
    //END do while loop 
    
    return 0;
}

float getInput(){
    //SET num2=0.0
    float num2=0.0;
    //INPUT num2
    cout<<"\n\n Enter ritcher scale or -999 to quit: ";
    cin>>num2;
    //return num2
    return num2;
    }
    

void printMsg(float num3){
   
    //if(num3>=0 && num3<=5.0)
    if(num3>=0 && num3<=5.0)
        //OUTPUT message 7
        cout<<"\n Little or no damage";
    //END if 
    //else if(num3>=5.1 && num3<=6.5)
    else if(num3>=5.1 && num3<=6.5)
        //OUTPUT message 8
        cout<<"\n Serious damage or wall cracks";
    //END else if
    //else if(num3>=6.6 && num3<=7.5)
    else if(num3>=6.6 && num3<=7.5)
        //OUTPUT message 9
        cout<<"\n Disaster or houses and building collapse";
    //END else if
    //else if(num3>7.5)
    else if(num3>7.5)
        //OUTPUT message 10
        cout<<"\n Catastrophe, most building destroyed ";
    //END else if 
    
}

