/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <10/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 10/12/2022 11:11

Problem: read numbers and store them in an array and 
display the odd numbers and print the total

IOFC: List of input, output, formula, and condition

Input: num[SIZE]

Output: the odd numbers and the total of the odd

formula: sum+=num[i]

Condition: 
num[i]%2 !=0

IO Format: Design of IO format 
line1: Number 1: xx
line2: Number 2: yy
....
line20: Number 20:zz
line21:
line22: The ODD NUMBERS are:
line23: cc
line24: zz
line25: yy
line26: tt
line27: uu
line28:     --> Total:

Variables/constants: num[SIZE]={'\0'}, sum=0, i=0, x=0

Algorithm: List of steps and order to solve the problem
BEGIN 
    SET num[SIZE]={'\0'}, sum=0
    for(i=0;i<SIZE;i++)
        INPUT num[i]
    END for 
    OUTPUT message1
    for(x=0;x<SIZE; x++)
        if(num[x]%2 !=0)
            OUTPUT num[x]
            sum+=num[x]
        END if
    END for
    OUTPUT sum
END

Test data: 
1.num[0]=2, num[0]=5, num[0]=3, num[0]=1,num[0]=6, odd={5, 3, 1}, sum=9
2.num[0]=7, num[0]=8, num[0]=2, num[0]=9,num[0]=4, odd={7,9}, sum=16

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#define SIZE 20
using namespace std;

int main(){
    //SET num[SIZE]={'\0'}, sum=0
    int num[SIZE]={'\0'}, sum=0;
    //for(i=0;i<SIZE;i++)
    for(int i=0;i<SIZE;i++){
        //INPUT num[i]
        cout<<" Number "<<i+1<<":";
        cin>>num[i];
     }//END for 
    //OUTPUT message1
    cout<<"\n\n The ODD NUMBERS are:\n";
    //for(x=0;x<SIZE; x++)
    for(int x=0;x<SIZE; x++){
        //if(num[x]%2 !=0)
        if(num[x]%2 !=0){
            //OUTPUT num[x]
            cout<<" "<<num[x]<<'\n';
            //sum+=num[x]
            sum+=num[x];
         }//END if
     }//END for
    //OUTPUT sum
    cout<<"\t --> Total: "<<sum;
    
    return 0;
    
}
