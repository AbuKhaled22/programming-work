/*
Created by <your name> on <current date>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: DDMMYYYY Time

Problem: Modify the program written for Question (1), check the validity of the lab 
mark entered to be between 0 to 100 only, read mid-term exam mark 
between 0 to 25 and final exam mark between 0 to 100


IOFC: 

Input: mark, mid, final

Output: total score of each student

Formula: 
1-percent= mark/6.66
2-mid_final= (mid+final)/2.08
3-total=mid_final+percent

Condition: 
1-mark>=0 && mark<=100
2-percent>12.5
3-total>=40

IO Format: 
line1:  ======================
line2:  Enter your mark: 
line3: 
line4:  message 
line5:  ====================== 
line6:  Enter your mid-term exam mark(0-25):
line7:  Enter your final exam(0-100):
line8:  total score: 
line9:  message
line10: message

Variables/constants: mark, percent, mid, final, mid_final, total 

Algorithm: 

Begin
    Set mark, percent, mid, final, mid_final, total
    OUTPUT message 1
    INPUT mark
    PROCESS percent= mark/6.66
    if (mark>=0 && mark<=100)
        if (percent>12.5)
            Blank line and OUTPUT message 2
        else
            Blank line and OUTPUT message 3
        End if
    else
        OUTPUT message4
    End if 
    OUTPUT message 5
    INPUT mid
    INPUT final
    PROCESS mid_final= (mid+final)/2.08
    PROCESS total=mid_final+percent
    if (total>=40)
        OUTPUT message 8
    else
        OUTPUT message 9
    End if    
    OUTPUT message 10
    
End

Test data: 
1. mark=90 , percent=13.5
2. mid=15 ,final=50 ,mid_final=31.25
3. mid_final=31.25 , percent=13.5 , total=44.75

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    
    //Set mark, percent, mid, final, mid_final, total
    float mark=0, percent=0, mid=0, final=0, mid_final=0, total=0;
    //OUTPUT message 1
    cout<<" ="<<setfill('=')<<setw(30)<<"="<<setfill(' ')
        //INPUT mark
        <<"\n Enter your lab mark(0-100): ";
    cin>>mark;
   // PROCESS percent= mark/6.66
    percent= mark/6.66;
    if (mark>=0 && mark<=100){
        
        //if (percent>12.5)
        if (percent>12.5)
            //Blank line and OUTPUT message 2
            cout<<"\n passing grade";
        //else
        else
            //Blank line and OUTPUT message 3
            cout<<"\n falling grade";
        //End if
     
        //OUTPUT message 5
        cout<<"\n ="<<setfill('=')<<setw(30)<<"=";
        //INPUT mid
        cout<<"\n Enter your mid-term exam mark(0-25): ";
        cin>>mid;
        //INPUT final
        cout<<" Enter your final exam(0-100): ";
        cin>>final;
        //PROCESS mid_final= (mid+final)/2.08
        mid_final= (mid+final)/2.08;
        // PROCESS total=mid_final+percent
        total=mid_final+percent;
        //if (total>=40)
        if (total>=40)
            //OUTPUT message 8
            cout<<" total score: "<<fixed<<setprecision(1)<<total<<"\n PASS";
        //else
        else
            //OUTPUT message 9
            cout<<" total score: "<<fixed<<setprecision(1)<<total<<"\n FAIL";
        //End if 
         }
    //else
    else 
        cout<<" error ";
    //End if 
    
    //OUTPUT message 10
        cout<<"\n ="<<setfill('=')<<setw(30)<<"=";
    
    return 0;
}