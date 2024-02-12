/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <1/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 1/12/2022 Time

Problem: read final exam, quiz, lab and convert the final exam, quiz
then dispaly the total mark

IOFC: List of input, output, formula, and condition

Input: final_exam, quiz, lab

Output: the final exam, quiz, lab and the total mark and nessage

formula: 
1. final_exam*0.5
2.quiz*0.3

Condition:
1.total>=70


IO Format: Design of IO format

line1:Enter the final exam marks: 
line2:Enter the class quiz marks:
line3:Enter the lab marks:
line4:
line5:Final Exam  quiz      lab     :   Final Mark
Line6: xx.xx      xx.xx     xx.xx   :   xx.xx
line7:
line8:Message
 
Variables/constants: 
final_exam=0.0, quiz=0.0, lab=0.0, final_exam2=0.0, quiz2=0.0, total=0.0

Algorithm: List of steps and order to solve the problem

BEGIN main
    SET final_exam=0.0, quiz=0.0, lab=0.0, total=0.0
    INPUT final_exam
    INPUT quiz
    INPUT lab
    final_exam=conv50(final_exam)
    quiz=conv30(quiz)
    OUTPUT Blank line and messsge1
    PROCESS total=final_exam+quiz+lab
    OUTPUT final_exam and quiz and lab and total
    if (total>=70)
        OUTPUT message2 and total
    END if 
    else 
        OUTPUT message3 and total
    END else
END

BEGIN  conv50(final_exam2)
    PROCESS final_exam2*=0.5
    return final_exam2
END 

BEGIN conv30(quiz2)
    PROCESS quiz2*=0.3
    return quiz2
END
    
    


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

float conv50(float final_exam2);
float conv30(float quiz2);

int main(){
    //SET final_exam=0.0, quiz=0.0, lab=0.0, total=0.0
    float final_exam=0.0, quiz=0.0, lab=0.0, total=0.0;
    //INPUT final_exam
    cout<<"Enter the final exam marks: ";
    cin>>final_exam;
    //INPUT quiz
    cout<<"Enter the class quiz marks: ";
    cin>>quiz;
    //INPUT lab
    cout<<"Enter the lab marks: ";
    cin>>lab;
    //final_exam=conv50(final_exam)
    final_exam=conv50(final_exam);
    //quiz=conv30(quiz)
    quiz=conv30(quiz);
    //OUTPUT Blank line and messsge1
    cout<<"\n\nFinal Exam  quiz\t lab\t:\tFinal Mark\n";
    //PROCESS total=final_exam+quiz+lab
    total=final_exam+quiz+lab;
    //OUTPUT final_exam and quiz and lab and total
    cout<<fixed<<setprecision(2)<<final_exam<<setw(12)<<quiz<<setw(12)<<lab<<setw(4)<<":"<<setw(11)<<total<<'\n';
    //if (total>=70)
    if (total>=70)
        //OUTPUT message2 and total
        cout<<"\nYou pass with total final marks of "<<fixed<<setprecision(2)<<total;
    //END if 
    //else 
    else
        //OUTPUT message3 and total
        cout<<"\nYou failed with total final marks of "<<fixed<<setprecision(2)<<total;
    //END else
    return 0;
}

float conv50(float final_exam2){
    //PROCESS final_exam2*=0.5
    final_exam2*=0.5;
    //return final_exam2
    return final_exam2;
}

float conv30(float quiz2){
    //PROCESS quiz2*=0.3
    quiz2*=0.3;
    //return quiz2
    return quiz2;
}