/*
Created by <FADHEL ABDULLAH KHALLED MOHAMMED THABIT> on <2/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 2/12/2022 4:20

Problem: read a the voucher amount and display the best bookstore

IOFC: List of input, output, formula, and condition

Input: voucher

Output:the best bookstore

formula:

1.((10*50)/250)
2.((10*50)/300)
3.((10*20)/150)

Condition:
1.voucher==50
2.voucher==100
3.voucher==150
4.voucher==200
5.voucher==250
6.voucher==300
7.voucher==350
8.voucher==400
9.voucher==450
10.voucher==500

IO Format: Design of IO format
line1: ----------------------------------------------
line2: Enter the voucher amount:
line3:
line4: message
line6: ----------------------------------------------
 
Variables/constants:  voucher1=0, voucher2=0,m=0,k=0,p=0

Algorithm: List of steps and order to solve the problem
BEGIN main 
    SET voucher1=0
    SET m=0.0, k=0.0, p=0.0
    OUTPUT message1
    voucher1=amount()
    switch(voucher1)
        case 50 :
        case 100 :
        case 150 :
        case 200 :
        case 250 :
        case 300 :
        case 350 :
        case 400 :
        case 450 :
        case 500 : 
            m=((10*50)/250)
            k=((10*50)/300)
            p=((10*20)/150)
            printMsg(m,k,p)
            break
        default :
            OUTPUT message2
    END switch
    OUTPUT message3
END

BEGIN amount()
    SET voucher2=0
    INPUT voucher2
    return voucher2
END

BEGIN printMsg(m2,k2,p2)
    if(m2>k2 && m2>p2)
        OUTPUT message4 
    END if 
    else if(k2>m2 && k2>p2)
        OUTPUT message5 
    ENd else if 
    else if(p2>m2 && p2>k2)
        OUTPUT message6
    END else if
END
    


Test data: 
1. m=((10*50)/250), m=2
2. k=((10*50)/300), k=1.66
3. p=((10*20)/150), p=1.33

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int amount();
void printMsg(float m2, float k2, float p2);

int main(){
    //SET voucher1=0
    int voucher1=0;
    //SET m=0.0, k=0.0, p=0.0
    float m=0.0, k=0.0, p=0.0;    
    //OUTPUT message1
    cout<<" -"<<setw(30)<<setfill('-')<<"-\n"<<setfill(' ');
    //voucher1=amount()
    voucher1=amount();
    //switch(voucher1)
    switch(voucher1){
        //case 50 :
        case 50 :
        //case 100 :
        case 100 :
        //case 150 :
        case 150 :
        //case 200 :
        case 200 :
        //case 250 :
        case 250 :
        //case 300 :
        case 300 : 
        //case 350 :
        case 350 : 
        //case 400 :
        case 400 :
        //case 450 :
        case 450 :
        //case 500 :
        case 500 :
            //m=((10*50)/250)
            m=((10*50)/250);
            //k=((10*50)/300)
            k=((10*50)/300);
            //p=((10*20)/150)
            p=((10*20)/150);
            //printMsg(m,k,p)
            printMsg(m,k,p);
            //break
            break;
        //default :
        default :
            //OUTPUT message2
            cout<<" invalid";
            //break
            break;
     }//END switch
    //OUTPUT message3
    cout<<"\n -"<<setw(30)<<setfill('-')<<"-";
    return 0;
}

int amount(){
    //SET voucher2=0
    int voucher2=0;
    //INPUT voucher2
    cout<<" Enter the voucher amount:";
    cin>>voucher2;
    //return voucher2
    return voucher2;
}

void printMsg(float m2, float k2, float p2){
    //if(m2>k2 && m2>p2)
    if(m2>k2 && m2>p2)
        //OUTPUT message4 
        cout<<"\n MPA is the best";
    //END if 
    //else if(k2>m2 && k2>p2)
    else if(k2>m2 && k2>p2)
        //OUTPUT message5 
        cout<<"\n Kinokaya is the best";
    //ENd else if 
    //else if(p2>m2 && p2>k2)
    else if(p2>m2 && p2>k2)
        //OUTPUT message6
        cout<<"\n Pupil is the best";
    //END else if
}




