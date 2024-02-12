/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <7/10/2022>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 7/10/2022 10:45

Problem: display /*
Created by <your name> on <current date>
Copyright B) 2019 Dr Badariah. All rights reserved. (sample)
Date Created: DDMMYYYY Time

Problem: dispaly line message and one line blank

IOFC: List of input, output, formula, and condition

Input: n/a

output:line message and one line blank  

formula:
1.cm= km*100000
2.in= cm/2.54
      
condition:n/a

IO Format: Design of IO format 
line1:           distances from the sun to
line2:             Mercury    Venus     Earth       Mars
line3: 
line4: kilometers :
line5: centimeters:                        
line6: inches     :        


Variables/constants: cm1, cm2, cm3, cm4


Algorithm: List of steps and order to solve the problem
Begin
     SET= cm1, cm2, cm3, cm4
     OUTPUT message 1 
     OUTPUT message 2 and one blank line
     OUTPUT message 3
     PROCESS and OUTPUT message 4 cm1= 58*100000, cm2= 108.2*100000
     PROCES and OUTPUT message 4 cm3= 149.5*100000, cm4= 227.8*100000
     PROCES and OUTPUT message 5
End 
  


Test data: 
1.Mercury = 58km, cm=5800000, in=2283463.6
2.Venus =108.2km, cm=10820000, in=4259842.5
3.Earth =149.5km, cm=14950000, in=5885826.8
4.Mars =227.8km, cm=22780000, in=8968503.9


I hereby declare that this C program is the result of my own 
work. No part of the program has been copied or altered from 
other student(s)or by other student(s)or from other sources 
such as books, Internet, etc.
*/  
  
 
 
#include <iostream>
#include <iomanip>
 using namespace std;

 
 
 
int main (){
  
    //SET= cm1, cm2, cm3, cm4
  int cm1, cm2, cm3, cm4; 
  double in1;
    //OUTPUT message 1 
    cout<<setw(40)<< "distances from the sun to\n" 
     //OUTPUT message 2 and one blank line
        <<setw(46)<<"Mercury\tVenus\t  Earth\t      Mars\n" 
     //OUTPUT message 3
        <<"="<<setfill('=')<<setw(55)<<"="<<setfill(' ')
        <<"\n kilometers : 58\t108.2\t  149.5\t      227.8\n"; 
     //PROCESS cm1= 58*100000, cm2= 108.2*100000 
     cm1=58*100000, cm2=108.2 * 100000, cm3=149.5 * 100000, cm4=227.8 * 100000;
       //OUTPUT message 4
    cout<<" centimeters: "<<cm1<<"\t"<<cm2<<"  "<<cm3<<"   "<<cm4
        //PROCES and OUTPUT message 5
        <<"\n inches     : "<<fixed<<setprecision(1)<<((cm1/2.54))<<"\t"<<(cm2/2.54)<<" "<<(cm3/2.54)<<"  "<<(cm4/2.54);
    
 
 
return 0;

}