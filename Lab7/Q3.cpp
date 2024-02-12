/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT > on <11/11/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 11/11/2022 10:45 AM 

Problem: read a number then display a face 

IOFC: List of input, output, formula, and condition

input:num

output: face 

formula:n/a 

condition:
1.num!=0
2.x==1
3.x==2
4.x==3
5.y==1
6.y==2
7.y==3

IO Format:
line1: Faces:
line2:          1 - Happy
line3:          2 - Sad
line4:          3 - Angry
line5:          0 - to Quit
line6: Enter option: 

Variables/constants:num, x, y

Algorithm:
BEGIN main()
    SET num=0
    OUTPUT MESSAGE 1
    OUTPUT MESSAGE 2
    OUTPUT MESSAGE 3
    OUTPUT MESSAGE 4
    OUTPUT MESSAGE 5
    INPUT num
    if (num!=0)
    	CALL hair()
    	CALL eyes(num)
    	CALL nose() 
    	CALL mouth(num) 
    	CALL chin()
     END if 
END

BEGIN hair()
    OUTPUT symbols 1
    OUTPUT symbols 2
    OUTPUT symbols 3
END

BEGIN eyes(int x)
    if(x==1)
        OUTPUT symbols 4
        OUTPUT symbols 5
        OUTPUT symbols 6
    else if(x==2)
        OUTPUT symbols 7
        OUTPUT symbols 8
        OUTPUT symbols 9
    else if(x==3)
        OUTPUT symbols 10
        OUTPUT symbols 11
        OUTPUT symbols 12
END

BEGIN nose()
    OUTPUT symbols 13
END

BEGIN mouth(int y)
    if(y==1)
        OUTPUT symbols 14
        OUTPUT symbols 15
    else if(y==2)
        OUTPUT symbols 16
        OUTPUT symbols 17
        
    else if(y==3)
        OUTPUT symbols 18
        OUTPUT symbols 19
        
    
END

BEGIN chin()
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
void eyes(int x);
void nose(void);
void mouth(int y);
void chin(void);

int main(){
    //SET num=0
    int num=0;
    //OUTPUT MESSAGE 1
    cout<<" Faces:\n"
    //OUTPUT MESSAGE 2
        <<"\t 1 - Happy\n"
    //OUTPUT MESSAGE 3
        <<"\t 2 - Sad\n"
    //OUTPUT MESSAGE 4
        <<"\t 3 - Angry\n"
    //OUTPUT MESSAGE 5
        <<"\t 0 - to Quit\n"
    //INPUT num 
        <<" Enter option: ";
    cin>>num;
    //if (num!=0)
    if (num!=0){
        //CALL hair()
        hair();
        //CALL eyes()
        eyes(num);
        //CALL nose()
        nose();
        //CALL mouth()
        mouth(num); 
        //CALL chin()
        chin(); }
    //END if
    
 
 
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

void eyes(int x){
    //if(x==1)
    if(x==1)
        //OUTPUT symbols 4
        cout<<"      ""|                  |\n"
         //OUTPUT symbols 5
            <<"      ""|   -----   -----  |\n"
         //OUTPUT symbols 6
            <<"     ""(|     +       +    |)\n";
     //END if
    //else if(x==2)
    else if(x==2)
        //OUTPUT symbols 7
        cout<<"      ""|                  |\n"
            //OUTPUT symbols 8
            <<"      ""|     /       \\    |\n"
            //OUTPUT symbols 9
            <<"     ""(|   / -       - \\  |)\n";
    //else if(x==3)
    else if(x==3)
        //OUTPUT symbols 10
        cout<<"      ""|   ---       ---  |\n"
            //OUTPUT symbols 11
            <<"      ""|      \\     /     |\n"
            //OUTPUT symbols 12
            <<"     ""(|     * \\   / *    |)\n";
}

void nose(void){
    //OUTPUT symbols 7
    cout<<"      ""|         |        |\n";
}

void mouth(int y){
    //if(y==1)
    if(y==1)
    //OUTPUT symbols 8
    cout<<"       ""\\      \\___/     /\n"
        //OUTPUT symbols 9
        <<"         ""\\            / \n";
    //else if(y==2)
    else if(y==2)
        //OUTPUT symbols 16
        cout<<"       ""\\      _____     /\n"
            //OUTPUT symbols 17
            <<"         ""\\   /     \\  / \n";
        
    //else if(y==3)
    else if(y==3)
        //OUTPUT symbols 18
        cout<<"       ""\\      (___)     /\n"
            //OUTPUT symbols 19
            <<"         ""\\            / \n";
}

void chin(void){
     //OUTPUT symbols 10
    cout<<"           ""\\________/  \n\n";
}











