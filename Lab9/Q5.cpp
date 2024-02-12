/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <11/12/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 11/12/2022 15:30

Problem: read the size of an array and numbers then dispaly 
a menu that the user can choose from and dsplay the number based on user 
using function

IOFC: List of input, output, formula, and condition

Input: size, num[]

Output: menu and operation based on the user

Formula:
1.i++
2.x++
3.y--
4.y-1
5.size-1
6.z++
7.size-z-1
8.a+1
9.a++
10.c++
11.size-f-1
12.f++
13.e++
14.f+1
15.g++
16.h++

Condition:
1.i<size
2.ope==0
3.ope==1
4.ope==2 
5.ope==3 
6.ope==4 
7.ope==5 
8.x<size
9.y==size 
10.y>0
11.z<size-1
12.a<size-z-1
13.num3[a]<num3[a+1]
14.c<size
15.e<size-1
16.f<size-f-1
17.num4[f]>num4[f+1]
18.g<size
19.h<size
20.num6==num[h]


IO Format: Design of IO format 
line1: ---------------------------------------
line2: Enter the size of an array:
line3: Enetr the numbers : 
line4: x
line5: x
line6: x
line7: x
line8:
line9:  0 : Exit
line10: 1 : Print Array
line11: 2 : Reverse Array
line12: 3 : Ascending Array
line13: 4 : Descending Array
line14: 5 : Search Array
line15:
line16: Enter a number based on the menu:
line17:
line18: message
line19: ---------------------------------------
 
Variables/constants: 
size=0, num[]={'\0'},

Algorithm: List of steps and order to solve the problem

BEGIN main
    SET num[]={'\0'}, ope=0
    OUTPUT message line1
    INPUT size  
    for(i=0;i<size,i++)
        OUTPUT space
        INPUT num[i]
    END for
    OUTPUT Blank line and message line9
    OUTPUT message line10
    OUTPUT message line11
    OUTPUT message line12
    OUTPUT message line13
    OUTPUT message line14
    INPUT ope
    switch(ope)
        case 0: break
        case 1: Print Array(num)  break
        case 2: Reverse Array(num)  break
        case 3: Ascending Array(num)  break
        case 4: Descending Array(num) break
        case 5: Search Array(num)  break
        default : OUTPUT message
    END switch
    OUTPUT message line19
END
    
BEGIN Print Array(num1[])
    for(x=0;x<size;x++)
        OUTOUT num1[x]
    END for
END 

BEGIN Reverse Array(num2[])
    SET y=0
    for(y==size;y>0;y--)
        OUTPUT num1[y-1]
    END for
END 

BEGIN Ascending Array(num4[])
    SET d=0;
    for(e=0;e<size-1;e++)
        for(f=0;f<size-f-1;f++)
            if(num4[f]>num4[f+1])
                d=num4[f]
                num4[f]=num4[f+1]
                num4[f+1]=d
            END if 
        END for
    END for 
     for(g=0;g<size;g++)
        OUTPUT num4[g]
    END for
END

BEGIN Descending Array(num3[])
    SET b=0;
    for(z=0;z<size-1;z++)
        for(a=0;a<size-z-1;a++)
            if(num3[a]<num3[a+1])
                b=num3[a]
                num3[a]=num3[a+1]
                num3[a+1]=b
            END if 
        END for
    END for 
     for(c=0;c<size;c++)
        OUTPUT num3[c]
    END for
END 

 

BEGIN Search Array(num5[])
    SET num6=0, k=0
    INPUT num6 
    for(h=0; h<size; h++)
        if(num6==num[h])
            k++
        END if
    END for 
    if(k==1)
        OUTPUT message1
    END if 
    else 
        OUTPUT message2
    END else
END
    
    
Test data:n\a

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void PrintArray(int num1[]);
void ReverseArray(int num2[]);
void AscendingArray(int num4[]);
void DescendingArray(int num3[]);
void SearchArray(int num5[]);

int size=0;

int main(){
    //OUTPUT message line1
    cout<<" -"<<setw(40)<<setfill('-')<<"-\n"<<setfill(' ');
    //INPUT size  
    cout<<" Enter the size of an array: ";
    cin>>size;
    //SET num[]={'\0'}, ope=0
    int num[size]={'\0'}, ope=0;
    //OUTPUT message line3
    cout<<" Enetr the numbers :\n";
    //for(i=0;i<size,i++)
    for(int i=0;i<size;i++){
        //OUTPUT space
        cout<<" ";
        //INPUT num[i]
        cin>>num[i];
     }//END for
    //OUTPUT Blank line and message line9
    cout<<"\n  0 : Exit\n"
    //OUTPUT message line10
        <<"  1 : Print Array\n"
    //OUTPUT message line11
        <<"  2 : Reverse Array\n"
    //OUTPUT message line12
        <<"  3 : Ascending Array\n"
    //OUTPUT message line13
        <<"  4 : Descending Array\n"
    //OUTPUT message line14
        <<"  5 : Search Array\n"
    //INPUT ope
        <<" Enter a number based on the menu: ";
    cin>>ope;
    //switch(ope)
    switch(ope){
        //case 0: break
        case 0: break;
        //case 1: PrintArray(num)  break
        case 1: PrintArray(num);  break;
        //case 2: ReverseArray(num)  break
        case 2: ReverseArray(num);  break;
        //case 3: AscendingArray(num)  break
        case 3: AscendingArray(num);  break;
        //case 4: DescendingArray(num) break
        case 4: DescendingArray(num); break;
        //case 5: SearchArray(num)  break
        case 5: SearchArray(num);  break;
        //default : OUTPUT message
        default : 
            cout<<" Invaild number"; break;
     }//END switch
    //OUTPUT message line19
    cout<<"\n -"<<setw(40)<<setfill('-')<<"-";
    
    return 0;
}

void PrintArray(int num1[]){
    //for(x=0;x<size;x++)
    for(int x=0;x<size;x++){
        //OUTPUT num1[x]
        cout<<" "<<num1[x];
     }//END for
}

void ReverseArray(int num2[]){
    //SET y=0
    int y=0;
    //for(y==size;y>0;y--)
    for(y=size;y>0;y--){
        //OUTOUT num1[y-1]
        cout<<" "<<num2[y-1];
     }//END for
}





void AscendingArray(int num4[]){
    //SET d=0;
    int d=0;
    //for(e=0;e<size-1;e++)
    for(int e=0;e<size-1;e++){
        //for(f=0;f<size-f-1;f++)
        for(int f=0;f<size-f-1;f++){
            //if(num4[f]>num4[f+1])
            if(num4[f]>num4[f+1]){
                //d=num4[f]
                d=num4[f];
                //num4[f]=num4[f+1]
                num4[f]=num4[f+1];
                //num4[f+1]=d
                num4[f+1]=d;
             }//END if 
         }//END for
     }//END for 
    //for(g=0;g<size;g++)
    for(int g=0;g<size;g++){
        //OUTPUT num4[g]
        cout<<" "<<num4[g];
     }//END for
}

void DescendingArray(int num3[]){
    //SET b=0;
    int b=0;
    //for(z=0;z<size-1;z++)
    for(int z=0;z<size-1;z++){
        //for(a=0;a<size-z-1;a++)
        for(int a=0;a<size-z-1;a++){
            //if(num3[a]<num3[a+1])
            if(num3[a]<num3[a+1]){
                //b=num3[a]
                b=num3[a];
                //num3[a]=num3[a+1]
                num3[a]=num3[a+1];
                //num3[a+1]=b
                num3[a+1]=b;
             }//END if 
         }//END for
     }//END for 
    //for(c=0;c<size;c++)
    for(int c=0;c<size;c++){
        //OUTPUT num3[c]
        cout<<" "<<num3[c];
     }//END for
}


void SearchArray(int num5[]){
    //SET num6=0
    int num6=0, k=0;
    //INPUT num6
    cout<<" Enter The number: ";
    cin>>num6;
    //for(h=0; h<size; h++)
    for(int h=0; h<=size; h++){
        //if(num6==num[h])
        if(num6==num5[h])
            k++;
        //END if
     }//END for 
     if(k==1)
        //OUTPUT message1
        cout<<" Positive  integer";
    //END if
    else 
        //OUTPUT message2
        cout<<" Negative integer";
    //END else
    
}



