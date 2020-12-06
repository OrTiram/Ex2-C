#ifndef _MYBANK_H_
#define _MYBANK_H_


 void openAccount(double depositAmount);
 void balanceInquiry(int numAccount);
 void deposit(int numAccount , double depositAmount);
 void withdrawal(int numAccount , double depositAmount);
 void closeAccount(int numAccount);
 void addingInterest(int interest);
 void printAccounts();
 void endProgram();
 int isAccountOpen(int account);
 

#endif
