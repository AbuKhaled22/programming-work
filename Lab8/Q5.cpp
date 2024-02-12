/*
Created by <FADHEL ABDULLAH KHALED MOHAMMED THABIT> on <28/11/2022>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: 28/11/2022 9:00

Problem: read the code and the quantity then display the color , the type of a gemstone 
and the amount 

IOFC: List of input, output, formula, and condition

Input: code, gram

Output: display the color , the type of a gemstone 
and the amount 

Formula: gram * price

condition:
1.code=='R'
2.code=='P'
3.code=='B'
4.code=='V'

IO Format: Design of IO format 
line1:          ~ Welcome ~
line2:          R-(Ruby)
line3:          P-(Sapphire)
line4:          B-(Aquamarine)
line5:          V-(Amethyst)
line6:
line7: Enter code ->
line8: Enter quantity (in gram) ->
line9: 
line10: Gem Type is         (color is   )
line11: Amount due: USD
line12: 
line13: [Thank you. Please come again]

 
Variables/constants: 
code='\0', gram=0, code1='\0', code2='\0',price=0
gram1=0, gram2=0, code3='\0'


Algorithm: List of steps and order to solve the problem

BEGIN main 
    SET code='\0' 
    SET gram=0, price=0
    OUTPUT message1
    printMenu()
    code=getCode()
    gram=getQty()
    printType(code)
    price=calculateAmtDue(code, gram) 
    OUTPUT message
END

BEGIN printMenu()
    OUTPUT message1
    OUTPUT message2
    OUTPUT message3
    OUTPUT message4
END

BEGIN getCode()
    SET code1='\0'
    INPUT code1
    return code1
END

BEGIN getQty()
    SET gram1=0
    INPUT gram1
    return gram1
END

BEGIN printType(code2)
    switch(code2)
        case 'R': OUTPUT message5 break
        case 'P': OUTPUT message6 break
        case 'B': OUTPUT message7 break
        case 'V': OUTPUT message8 break
        default: OUTPUT message 9 break
    END switch
END

calculateAmtDue(code3, gram2)
    SET price1=0
    switch(code3)
        case 'R': PROCESS price1=gram*100.00
            OUTPUT price1 break
        case 'P': PROCESS price1=gram*120.00
            OUTPUT price1 break
        case 'B': PROCESS price1=gram*88.00
            OUTPUT price1 break
        case 'V': PROCESS price1=gram*250.00
            OUTPUT price1 break
        default: OUTPUT message 10 break
    END switch
    return price1
END


Test data: 
1.code='R' , gram=10 , price=1000.00
2.code='P' , gram=10 , price=1200.00
3.code='B' , gram=10 , price=880.00
4.code='V' , gram=10 , price=2500.00

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/

#include <iostream>
using namespace std;

void printMenu();
char getCode();
float getQty();
void printType(char code2);
float calculateAmtDue(char code3, float gram2);

int main(){
    //SET code='\0' 
    char code='\0';
    //SET gram=0, price=0
    float gram=0, price=0;
    //OUTPUT message1
    cout<<"\t ~ Welcome ~\n";
    //printMenu()
    printMenu();
    //code=getCode()
    code=getCode();
    //gram=getQty()
    gram=getQty();
    //printType(code)
    printType(code);
    //price=calculateAmtDue(code, gram) 
    price=calculateAmtDue(code, gram);
    //OUTPUT message
    cout<<"\n\n [Thank you. Please come again]";
    
    return 0;
}

void printMenu(){
    //OUTPUT message1
    cout<<"\t R-(Ruby)\n"
    //OUTPUT message2
        <<"\t P-(Sapphire)\n"
    //OUTPUT message3
        <<"\t B-(Aquamarine)\n"
    //OUTPUT message4
        <<"\t V-(Amethyst)\n";
}

char getCode(){
    //SET code1='\0'
    char code1='\0';
    //INPUT code1
    cout<<"\n Enter code -> ";
    cin>>code1;
    //return code1
    return code1;
}

float getQty(){
    //SET gram1=0
    float gram1=0;
    //INPUT gram1
    cout<<" Enter quantity (in gram) -> ";
    cin>>gram1;
    //return gram1
    return gram1;
}

void printType(char code2){
    //switch(code2)
    switch(code2){
        //case 'R': OUTPUT message5 break
        case 'R': cout<<"\n Gem Type is Ruby (color is red)"; break;
        //case 'P': OUTPUT message6 break
        case 'P': cout<<"\n Gem Type is Sapphire (color is Pink)"; break;
        //case 'B': OUTPUT message7 break
        case 'B': cout<<"\n Gem Type is Aquamarine (color is Blue)"; break;
        //case 'V': OUTPUT message8 break
        case 'V': cout<<"\n Gem Type is Amethyst (color is Violet)"; break;
        //default: OUTPUT message 9 break
        default: cout<<"\n Unknown gem type!"; break;
     }//END switch
}

float calculateAmtDue(char code3, float gram2){
    //SET price1=0
    float price1=0;
    //switch(code3)
    switch(code3){
        //case 'R': PROCESS price1=gram*100.00
        case 'R': price1=gram2*100.00;
            //OUTPUT price1 break
            cout<<"\n Amount due: USD"<<price1; break;
        //case 'P': PROCESS price1=gram*120.00
        case 'P': price1=gram2*120.00;
            //OUTPUT price1 break
            cout<<"\n Amount due: USD"<<price1; break;
        //case 'B': PROCESS price1=gram*88.00
        case 'B': price1=gram2*88.00;
            //OUTPUT price1 break
            cout<<"\n Amount due: USD"<<price1; break;
        //case 'V': PROCESS price1=gram*250.00
        case 'V': price1=gram2*250.00;
            //OUTPUT price1 break
            cout<<"\n Amount due: USD"<<price1; break;
        //default: OUTPUT message 10 break
        default: cout<<"\n Invalid quantity purchased!";
     }//END switch
    //return price1
    return price1;
}
    
    
    
    