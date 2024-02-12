/*
Created by <your name> on <current date>
Copyright © 2019 Dr Badariah. All rights reserved. (sample)
Date Created: DDMMYYYY Time

Problem: read and display e if a department store customer has exceeded 
the credit limit on a charge account

IOFC: List of input, output, formula, and condition

Input: ac_num, bg_bal, totl_chg, totl_cred, cred_limit

Output:if a department store customer has exceeded 
the credit limit on a charge account

formula: new_bal = bg_bal + totl_chg - totl_cred

condition: new_bal > cred_limit

IO Format:

line1:  ===========================================
line2:  Enter account number:
line3:  Enter the Beginning Balance:
line4:  Enter the Total Charges:
line5:  Enter the Total Credits:
line6:  Enter Credit Limit:
line7:  ===========================================
line8:  Account:
line9:  Credit Limit:
line10: Balance:
line11: ---- Credit limit Exceeded! ----
 
Variables/constants: ac_num, bg_bal, totl_chg, totl_cred, cred_limit, new_bal

Algorithm: 

Begin
    SET ac_num
    SET bg_bal, totl_chg, totl_cred, cred_limit, new_bal
    OUTPUT message 1
    INPUT ac_num
    INPUT bg_bal
    INPUT totl_chg
    INPUT totl_cred
    INPUT cred_limit
    PROCESS new_bal = bg_bal + totl_chg - totl_cred
    if (new_bal > cred_limit)
        OUTPUT message 7
        OUTPUT message 8
        OUTPUT message 9
        OUTPUT message 10
        OUTPUT message 11
    End if
End



Test data: 
1. bg_bal=100 , totl_ch=100 , totl_cred=100 , new_bal =100
2. bg_bal=50 , totl_ch=100 , totl_cred=100 , new_bal =50

I hereby declare that this C++ program is the result of 
my own work. No part of the program has been copied or 
altered from other student(s)or by other student(s)or from 
other sources such as books, Internet, etc.
*/




#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	//SET ac_num
	int ac_num=0;
	//SET bg_bal, totl_chg, totl_cred, cred_limit, new_bal
	float bg_bal=0, totl_chg=0, new_bal=0, totl_cred=0, cred_limit=0;
	//OUTPUT message 1
	cout<<" ="<<setfill('=')<<setw(30)<<"="<<setfill(' ')
        //INPUT ac_num
        << "\n Enter account number: ";
	cin >> ac_num;
    //INPUT bg_bal
    cout<< " Enter the Beginning Balance: ";
	cin >> bg_bal;
	//INPUT totl_chg
	cout << " Enter the Total Charges: ";
	cin >> totl_chg;
    //INPUT totl_cred
    cout << " Enter the Total Credits: ";
	cin >> totl_cred;
    //INPUT cred_limit
    cout << " Enter Credit Limit: ";
    cin >> cred_limit;
    //PROCESS new_bal = bg_bal + totl_chg - totl_cred
    new_bal = bg_bal + totl_chg - totl_cred;
    //if (new_bal > cred_limit)
    if ( new_bal > cred_limit ){
	    //OUTPUT message 7
	    cout<<" ="<<setfill('=')<<setw(30)<<"="<<setfill(' ')
	        //OUTPUT message 8
	        << "\n Account: " << ac_num
	        //OUTPUT message 9
			<< "\n Credit Limit: " << cred_limit 
	        //OUTPUT message 10
		    << "\n Balance: " << new_bal 
	        //OUTPUT message 11
		    << "\n ---- Credit limit Exceeded! ----";
			}
		
	return 0;
	}