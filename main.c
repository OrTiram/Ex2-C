#include "myBank.h"
#include <stdio.h>


int main(){
	char tran = 'M';
	double amountDeposit = 0;
	int accountNumber = 0;
	int interestRate = 0;
	
	while(tran != 'E'){
	  printf("\n");	
      printf("Please choose a transaction type:\n");
      printf(" O-Open Account\n");
      printf(" B-Balance Inquiry\n");
      printf(" D-Deposit\n");
      printf(" W-Withdrawal\n");
      printf(" C-Close Account\n");
      printf(" I-Interest\n");
      printf(" P-Print\n");
      printf(" E-Exit\n");
//	  do{scanf("%c", &tran);
//	  } while(tran == ' ');
       scanf(" %c" , &tran);
	   switch(tran){
	//case O 		
		case 'O':
		printf("Please enter amount for deposit: ");
		if(scanf("%lf", &amountDeposit) == 1){
		if(amountDeposit > 0){
			openAccount(amountDeposit);
		}
		else {
		printf("Invalid Amount\n");
		}
	   }
	   else{
		   printf("Failed to read the amount\n");
	   }
	    break;
		
		
	//case B
	case 'B':
	printf("Please enter account number: "); 	
	if(scanf("%d", &accountNumber) == 1 ){
		if(accountNumber >= 901 && accountNumber <= 950 ){
	     balanceInquiry(accountNumber);
	     }
	    else{
			printf("Invalid account number\n");
		}
	}
	 else{
		 printf("Failed to read the account number\n");
	 }
	
	break;
	
	
    //case D	
	case 'D':
	printf("Please enter account number: ");
	if(scanf("%d", &accountNumber) == 1 ){
		if(accountNumber >= 901 && accountNumber <= 950 ){
			if(isAccountOpen(accountNumber)==0){
				break;
			}
			
		else{	
        printf("Please enter the amount to deposit:");
		if(scanf("%lf", &amountDeposit) == 1){
		   if(amountDeposit > 0){
			deposit(accountNumber,amountDeposit);
		}
		else {
		printf(" Cannot deposit a negative amount\n");
		}
	  }
	  	else {
		printf(" Failed to read the amount\n");
		}
	   }
	  }
		else {
		printf("Invalid account number\n");
		}
	  }
	    else{
			printf("Failed to read the account number\n");
		}
	
	break;
	
	
	//case w
	case 'W':
	printf("Please enter account number: ");
	if(scanf("%d", &accountNumber) == 1 ){
		if(accountNumber >= 901 && accountNumber <= 950 ){
			if(isAccountOpen(accountNumber)==0){
				break;
			}
			else{
        printf("Please enter the amount to withdraw:");
		if(scanf("%lf", &amountDeposit) == 1){
		//if(amountDeposit > 0){
		withdrawal(accountNumber,amountDeposit);
		//}
		//else {
		//printf("Cannot withdraw a negative amount\n");
		//}
	  }
	  	else {
		printf("Failed to read the amount\n");
		}
	   }
	  } 
		else {
		printf("Invalid account number\n");
		}
	}
	    else{
			printf("Failed to read the account number\n");
		}
		
	break;
	
	
	case 'C':
	printf("Please enter account number: "); 
	if(scanf("%d", &accountNumber) == 1 ){
		if(accountNumber >= 901 && accountNumber <= 950 ){
	     closeAccount(accountNumber);
		 printf("\n");
	     }
	    else{
			printf("Invalid account number\n");
		}
	}
	 else{
		 printf("Failed to read the account number\n");
	 }
	 
	 break;
	 
	 
	 //case I 
	 case 'I':
	 printf("Please enter interest rate: ");
	 if(scanf("%d", &interestRate) == 1 ){
		if(interestRate > 0){
			addingInterest(interestRate);
		}	
        else{
			printf("Invalid interest rate\n");
		}			
	 }
	 else{
		 printf("Failed to read the interest rate\n");
	 }
		break;
		
		case 'P':
		printAccounts();
		break;
		
		case 'E' :
		endProgram();
		break;
		
		default :
		printf("Invalid transaction type\n" );
		break;
	}		
  
}
	

	
	return 0;
}