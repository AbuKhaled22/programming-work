/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <12/11/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 12/11/2022 4:00

Problem: read ten alphabets between A, B and C then display the total number of each alphabet

IOFC: List of input, output, formula, and condition
Input: al

Output: the total number of each alphabet

Formula: 
1.a++
2.b++
3.c++

Condition:
1. al=='A'
2. al=='B'
3. al=='C'
4. al<=10
IO Format: Design of IO format 

line1:          count alphabets between A, B and C
line2: -----------------------------------------------
line3: Enter 1 alphabet :
line4: Enter 2 alphabet :
line5: Enter 3 alphabet :
line6: Enter 4 alphabet :
line7: Enter 5 alphabet :
line8: Enter 6 alphabet :
line9: Enter 7 alphabet :
line10: Enter 8 alphabet :
line11: Enter 9 alphabet :
line12: Enter 10 alphabet :
line13:----------------------------------------------- 
line14: The number of A :
line15: The number of B :
line16: The number of C :
line17: -----------------------------------------------


Variables/constants:  al=0, a=0, b=0, c=0, i

Algorithm: List of steps and order to solve the problem

BEGIN main
    OUTPUT message1 
    OUTPUT message2
    CALL alphabet()
    OUTPUT message3
    CALL count()
    OUTPUT message4
END

BEGIN alphabet()
    SET al=0, i=1
    while(i<=10)
        INPUT al
        switch(al)
            case 'A': a++ and break
            case 'B': b++ and break
            case 'C': c++ and break
        END switch
        i++
    END while
END

BEGIN

    OUTPUT a
    OUTPUT b
    OUTPUT c
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



void alphabet();
void count();
int a, b, c;


int main(){
    //OUTPUT message1 
    cout<<setw(40)<<" count alphabets between A, B and C\n"
    //OUTPUT message2
        <<" -"<<setfill('-')<<setw(40)<<"-\n"<<setfill(' ');
    //CALL alphabet()
    alphabet();
    //OUTPUT message3
    cout<<" -"<<setfill('-')<<setw(40)<<"-\n"<<setfill(' ');
    //CALL count()
    count();
    //OUTPUT message4
    cout<<"\n -"<<setfill('-')<<setw(40)<<"-\n"<<setfill(' ');
    return 0;
}

void alphabet(){
    //SET al=0, i=1
    char al=0;
    int i=1;
    //while(i<=10)
    while(i<=10){
        //INPUT al
        cout<<"Enter alphabet "<<i<<" : ";
        cin>>al;
        //switch(al)
        switch(al){
            //case 'A': a++ and break
            case 'A': a++;  break;
            //case 'B': b++ and break
            case 'B': b++; break;
            //case 'C': c++ and break
            case 'C': c++; break;
         }//END switch
        //i++
        i++;
     }//END while
}

void count(){
    
    //OUTPUT a
    cout<<" The number of A : "<<a
    //OUTPUT b
        <<"\n The number of B : "<<b
    //OUTPUT c
        <<"\n The number of C : "<<c;
}



