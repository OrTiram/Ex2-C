#include "myBank.h"
#include <stdio.h>

double BANK_ACCOUNT [50][2] = {0};

void openAccount(double depositAmount){

//Bank close = 0 , Bank open = 1 
	for(int i = 0 ; i < 50 ; i++){
		if(BANK_ACCOUNT[i][1] == 0.0 ){//Column 1 represents the status of the account
	      BANK_ACCOUNT[i][0] = depositAmount; 
		  printf("New account number is: %d \n",901+i);
		  BANK_ACCOUNT[i][1] = 1.0 ;
		  break;
	 }
	}
  }

void balanceInquiry(int numAccount){
	if(BANK_ACCOUNT[numAccount-901][1] == 1 ){//This means that the account is open
	printf("The balance of account number %d is: %.2lf\n" ,numAccount , BANK_ACCOUNT[numAccount-901][0]);
	}
	if(BANK_ACCOUNT[numAccount-901][1] == 0){
		printf("This account is closed\n");
	}
}

void deposit(int numAccount , double depositAmount){
	if(BANK_ACCOUNT[numAccount-901][1] == 1 ) {
		BANK_ACCOUNT[numAccount-901][0] = BANK_ACCOUNT[numAccount-901][0] + depositAmount ;
		printf(" The new balance is: %.2lf\n" ,BANK_ACCOUNT[numAccount-901][0]);
	}
		if(BANK_ACCOUNT[numAccount-901][1] == 0){
		printf("This account is closed\n");
	}
}

void withdrawal(int numAccount , double depositAmount){
	if(BANK_ACCOUNT[numAccount-901][1] == 1 && depositAmount <= BANK_ACCOUNT[numAccount-901][0]){
	 BANK_ACCOUNT[numAccount-901][0] = BANK_ACCOUNT[numAccount-901][0] - depositAmount;
	 printf(" The new balance is: %.2lf\n" ,BANK_ACCOUNT[numAccount-901][0]);
	}
	if(BANK_ACCOUNT[numAccount-901][1] == 0){
		printf("This account is closed\n");
	}
	if(depositAmount > BANK_ACCOUNT[numAccount-901][0]){
		printf(" Cannot withdraw more than the balance\n");
	}
}

void closeAccount(int numAccount){
	if(BANK_ACCOUNT[numAccount-901][1] == 1 ) {
		BANK_ACCOUNT[numAccount-901][1] = 0; 
		printf("Closed account number %d",numAccount);
		
	}
	else if(BANK_ACCOUNT[numAccount-901][1] == 0){
		printf("This account is already closed");
	}
}

void addingInterest(int interest){
	for(int i = 0 ; i < 50 ; i++){
			if(BANK_ACCOUNT[i][1] == 1 ){
			BANK_ACCOUNT[i][0] = BANK_ACCOUNT[i][0] + ((BANK_ACCOUNT[i][0] * interest ) / 100 );
			
		}
	}
}

void printAccounts(){
	for(int i = 0 ; i < 50 ; i++){
		if(BANK_ACCOUNT[i][1] == 1 ){
			printf("The balance of account number %d is: %.2lf\n", 901 + i ,BANK_ACCOUNT[i][0]);
			
		}
	}
}

void endProgram(){
	for(int i = 0 ; i < 50 ; i++){ 
	BANK_ACCOUNT[i][1] = 0;
	}
}

  int isAccountOpen(int numAccount){
	  if (BANK_ACCOUNT[numAccount-901][1]==0){
		  printf("This account is closed\n");
		  return 0;
	  }
	  else{
		  return 1;
	  
	  }
  }

	
