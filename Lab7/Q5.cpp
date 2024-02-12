/*
Created by <Fadhel Abdullah Khaled Mohammed Thabit> on <12/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 12/11/2022  11:20

Problem: read two number and charcter and display the result of the opreation

IOFC: make a Simple Calculator Program and use two function

Input: num1, num2, op

Output:calculator program

formula: 
1.num1+num2
2.num1-num2
3.num1*num2
4.num1/num2

condition:
1.op==+
2.op==-
3.op==*
4.op==/

IO Format: 
line1: ---------------------------------------
line2:          Simple Calculator Program
line3: ---------------------------------------
line4:          A: addition
line5:          S: Subtraction
line6:          M: Multiplication
line7:          D: Division
line8: ---------------------------------------
line9: Enter two real number: 
line10: Select an operation: 
line11: 
line12: message
line13: --------------------------------------

 

Variables/constants: num1, num2, op

Algorithm: List of steps and order to solve the problem

BEGIN main
    CALL printMenu()
    CALL simpleCalculator()
    OUTPUT message
END

BEGIN printMenu()
    OUTPUT message 1
    OUTPUT message 2
    OUTPUT message 3
    OUTPUT message 4
    OUTPUT message 5
    OUTPUT message 6
    OUTPUT message 7
    OUTPUT message 8
END

BEGIN simpleCalculator()
    SET num1, num2
    SET op='\0'
    INPUT num1, num2
    INPUT op
        if op=='A'
            blank line and PROCESS and OUTPUT (num1+num2)
        else if op=='S'
            blank line and PROCESS and OUTPUT (num1-num2)
        else if op=='M'
             blank line and PROCESS and OUTPUT (num1*num2)
        else if op=='D'
             blank line and PROCESS and OUTPUT (num1/num2)
        else
            OUTPUT message 8
        End if
        
End

Test data: 
1.num1=3, num2=5 op='+', result=8
2.num1=8, num2=3 op='-', result=5
3.num1=4, num2=3 op='*', result=12
4.num1=6, num2=3 op='/', result=2

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void printMenu(void);
void simpleCalculator(void);

int main(){
    //CALL printMenu()
    printMenu();
    //CALL simpleCalculator()
    simpleCalculator();
    //OUTPUT message
    cout<<"\n -"<<setfill('-')<<setw(35)<<"-";
    
    return 0;
}


void printMenu(void){
    //OUTPUT message 1
    cout<<" -"<<setfill('-')<<setw(35)<<"-\n"<<setfill(' ')
    //OUTPUT message 2
        <<"\t Simple Calculator Program\n"
    //OUTPUT message 3
        <<" -"<<setfill('-')<<setw(35)<<"-\n"<<setfill(' ')
    //OUTPUT message 4    
        <<"\t A: addition\n"
    //OUTPUT message 5
        <<"\t S: Subtraction\n"
    //OUTPUT message 6
        <<"\t M: Multiplication\n"
    //OUTPUT message 7
        <<"\t D: Division"
    //OUTPUT message 8
        <<"\n -"<<setfill('-')<<setw(35)<<"-"<<setfill(' ');
        
    
}


void simpleCalculator(void){
    //SET num1, num2 
    float num1=0, num2=0;
    //SET op='\0'
    char op='\0';
    
    //INPUT num1, num2
        cout<<"\n Enter two real number: ";
        cin>>num1>> num2;
        //INPUT op
        cout<<" Select an operation: ";
        cin>>op;
        //if op==+
        if(op=='A')
            //blank line and PROCESS and OUTPUT (num1+num2)
            cout<<"\n the result = "<<(num1+num2);
        //END if 
        //else if op==-
        else if(op=='S')
            //blank line and PROCESS and OUTPUT (num1-num2)
            cout<<"\n the result = "<<(num1-num2);
        //END else if
        
        //else if op==*
        else if(op=='M')
            //blank line and PROCESS and OUTPUT (num1*num2)
            cout<<"\n the result = "<<(num1*num2);
        //END else if
        
        //else if op==/
        else if(op=='D')
            //blank line and PROCESS and OUTPUT (num1/num2)
            cout<<"\n the result = "<<(num1/num2);
        //END else if 
        
        //else
        else
            //OUTPUT message 4
            cout<<"\n erro ";
        //End else
    
    
    
}
   
    
 
