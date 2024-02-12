/*Created by <FADHEL ABDULLAH KHALED> on <27/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 27/11/2022  6:50

Problem: read number of student and ask for carry mark and final exam and 
display the total score and message using dffrent function

IOFC: List of input, output, formula, and condition

Input: n,carry_mark, final

OUTPUT: total score and message

formula: 
1.total=(final1*0.5)+carry_mark1
2.i++
3.b++
4.a++

condition:
1.i<n
2.b<100
3.a<50
4.final>100
5.total>=80 || total<=100
6.total>=60 || total<=79
7.total>=50 || total<=59
8.total>=0 || total<=49

IO Format: Design of IO format 
line1: -----------------------------------------
line2:      Printing Messages Just for Fun
line3: -----------------------------------------
line4: How many students? 2
line5:
line6: Student: 1
line7: Enter carry mark: 400.00
line8:       Invalid data. Please re-enter.
line9:
line10:Enter carry mark: 40.00
line11:Enter final exam mark: 915.00 
line12:      Invalid data. Please re-enter.
line13:
line14:Enter carry mark: 40.00 
line15:Enter final exam mark: 95.00
line16:      Total score is 87.50
line17:
line18:You are an extraordinary student.
line19:-----------------------------------------
line20:
line21:Student: 2
line22:Enter carry mark: 32.00 
line23:Enter final exam mark: 88.00
line24:      Total score is 76.00
line25:
line26:You are good at this course.
line27:-----------------------------------------
line28:                                                                            
line29:Have a nice day!
 
Variables/constants:
n=0, carry_mark=0, final=0, i=0, b=0, a=0, total=0,
carry_mark1=0, final1=0, score=0, score1=0

Algorithm: List of steps and order to solve the problem

BEGIN main
    SET carry_mark1=0, final1=0, score=0,n=0
    SET n=0
    printMenu()
    INPUT n
    for(i=1; i<=n; i++)
        OUTPUT message 4
        for(int b=0; b<100; b++)
            carry_mark1=getCarryMark()
            final1=getFinalMark()
            if(final1>100)
                OUTPUT message 5
            END if
            else
                break
            END else
        END for
        score=calculateScore(carry_mark1, final1)
        printMessage(score)
        
    END for
    BLANK line and OUTPUT message 15
END
  
BEGIN printMenu()
    OUTPUT message 1
    OUTPUT message 2
    OUTPUT message 3
END

BEGIN getCarryMark()
    SET carry_mark=0
    for(int a=0; a<50; a++)
        INPUT carry_mark
        if (carry_mark>50)
            OUTPUT message 4
        END if
        else 
            return carry_mark
        END else
    END for
END
   
BEGIN getFinalMark()
    SET final=0
    INPUT final
    return final
END

BEGIN calculateScore(carry_mark2, final2)
    SET score1
    PROCESS total= (final2*0.5)+carry_mark2
    return score1
END 

BEGIN printMessage(total)
    OUTPUT total
    if(total>=80 || total<=100)
        BLANK line and OUTPUT message 6
        OUTPUT message 7
    END if
    else if(total>=60 || total<=79)
        BLANK line and OUTPUT message 9
        OUTPUT message 10
    END else if
    else if(total>=50 || total<=59)
        BLANK line and OUTPUT message 11
        OUTPUT message 12
    END else if
    else if(total>=0 || total<=49)
        BLANK line and OUTPUT message 13
        OUTPUT message 14
    END else if
END




Test data:
1.carry_mark=40.00, final=95.00, total=87.50
2.carry_mark=32.00, final=88.00, total=76.00
I hereby declare that this C++ program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources such 
as books, Internet, etc.*/

#include <iostream>
#include <iomanip>

using namespace std;

void printMenu(void);
float getCarryMark(void);
float getFinalMark(void);
float calculateScore(float carry_mark2, float final2);
void printMessage(float total);

int main()
{
    //SET carry_mark1=0, final1=0, score=0,n=0
    float carry_mark1=0, final1=0, score=0;
    //SET n=0
    int n=0;
    //printMenu()
    printMenu();
    //INPUT n
    cout<<" How many students? ";
    cin>>n;
    //for(i=1; i<=n; i++)
    for(int i=1; i<=n; i++){
        //OUTPUT message 4
        cout<<"\n student: "<<i;
        //for(int b=0; b<100; b++)
        for(int b=0; b<100; b++){
            //carry_mark1=getCarryMark()
            carry_mark1=getCarryMark();
            //final1=getFinalMark()
            final1=getFinalMark();
            //if(final1>100)
            if(final1>100)
                //OUTPUT message 5
                cout<<"\t Invalid data. Please re-enter.\n";
            //END if
            //else
            else
                //break
                break;
            //END else
        }//END for
        //score=calculateScore(carry_mark1, final1)
        score=calculateScore(carry_mark1, final1);
        //printMessage(score)
        printMessage(score);
    }//END for
    //BLANK line and OUTPUT message 15
    cout<<"\n Have a nice day!";
    
    return 0;
}

void printMenu(void){
    //OUTPUT message 1
    cout<<" -"<<setfill('-')<<setw(45)<<"-"<<setfill(' ')
    //OUTPUT message 2
           <<"\n\t  Printing Messages Just for Fun\n"
    //OUTPUT message 3
           <<" -"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');
}

float getCarryMark(void){
    //SET carry_mark=0
    float carry_mark=0;
    //for(int a=0; a<50; a++)
    for(int a=0; a<50; a++){
        //INPUT carry_mark
        cout<<"\n Enter carry mark: ";
        cin>>carry_mark;
        //if (carry_mark>50)
        if (carry_mark>50)
            //OUTPUT message 4
            cout<<"\t Invalid data. Please re-enter.\n";
        //END if
        //else 
        else 
            //return carry_mark
            return carry_mark;
        //END else
    }//END for
}

float getFinalMark(){
    //SET final=0
    float final=0;
    //INPUT final
    cout<<" Enter final exam mark: ";
    cin>>final;
    //return final
    return final;
}

float calculateScore(float carry_mark2, float final2){
    //SET score1
    float score1=0;
    //PROCESS score1= (final2*0.5)+carry_mark2
    score1= (final2*0.5)+carry_mark2;
    //return score1
    return score1;
}

void printMessage(float total){
    //OUTPUT total
    cout<<fixed<<setprecision(2)<<"\t Total score is "<<total;
    //if(total>=80 || total<=100)
    if(total>=80 && total<=100){
        //BLANK line and OUTPUT message 6
        cout<<"\n\n You are an extraordinary student.\n"
        //OUTPUT message 7
        <<" -"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');}
    //END if
    //else if(total>=60 || total<=79)
    else if(total>=60 && total<=79){
        //BLANK line and OUTPUT message 9
        cout<<"\n\n You are good at this course.\n"
        //OUTPUT message 10
        <<" -"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');}
    //END else if
    //else if(total>=50 || total<=59)
    else if(total>=50 && total<=59){
        //BLANK line and OUTPUT message 11
        cout<<"\n\n Not good enough but don’t give up easily. \n"
        //OUTPUT message 12
        <<" -"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');}
    //END else if
    //else if(total>=0 || total<=49)
    else if(total>=0 && total<=49){
        //BLANK line and OUTPUT message 13
        cout<<"\n\n You better repeat this course.\n"
        //OUTPUT message 14
        <<" -"<<setfill('-')<<setw(45)<<"-\n"<<setfill(' ');}
    //END else if
    
}

