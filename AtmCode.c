#include <stdio.h>
#include <stdlib.h>
#define balance "=>  Your Account balance is: "

int main(){

	int pin=1111, userPinInput, user_choice;
	float money_balance=2000, userMoney=0;

	printf("\n****   Welcome to City Bank ATM service   ****\n\n");
	
	printf("Please enter your PIN: ");
	scanf(" %d", &userPinInput);

	if(userPinInput == pin){		
		
		printf("\n*** MENU ***\n\n");			
		
		do{			
			printf("\n1. Draw Money\n");
			printf("2. Deposit Money\n");
			printf("3. Check Balance\n");
			printf("4. Exit\n\n");
			printf("Please choose from menu: ");
			scanf(" %d", &user_choice);
			if(user_choice>4){
				printf("\n=>  Please choose one of the following (1/4) :\n");
			}
		}while(user_choice<=0 || user_choice>4);

		switch(user_choice){										
			
			case(1): printf("\nHow much money do you need: ");
					 scanf(" %f", &userMoney);					 					
					 if(userMoney > money_balance){
					 	printf("\n=>  You dont have such amount of money\n\n");
					  }else if(userMoney <= money_balance){
					 	printf("\n%s %.2f$\n\n", balance, money_balance-userMoney);
					  }
					  printf("Do you need anything else? (1. Yes / 2. No): ");
					  scanf(" %d",&user_choice);
					  if(user_choice==1){
					  	return main();
					  }	 					 	
					  break;

			case(2): printf("\nHow much money will you deposit: ");
					 scanf(" %f", &userMoney);	 
					 printf("\n%s %.2f$\n\n", balance, money_balance+userMoney);
					 printf("Do you need anything else? (1. Yes / 2. No): ");
					 scanf(" %d",&user_choice);
					 if(user_choice==1){
					  	return main();
					 }	 						 
					 break;

			case(3): printf("\n%s %.2f$\n\n", balance, money_balance);
					 printf("Do you need anything else? (1. Yes / 2. No): ");
					 scanf(" %d",&user_choice);
					 if(user_choice==1){
					  	return main();
					 }	 					
					 break;		 				 
		}			 					
	
	}else{	
		int tries;

		printf("\n=>  YOU HAVE ENTERED WRONG PIN!\n\n");		
		for(tries=1;tries<4;tries++){
			printf("(%d/3) Please enter your PIN carefully: ", tries);
			scanf(" %d", &userPinInput);
			if(tries<4 && userPinInput==pin){
				printf("\nCorrect PIN ==> return to Main Menu\n");
				return main();
			}
		}
	}
	
	printf("\n****   THANK YOU FOR USING CITY BANK ATM SERVICE   ****\n\n");
	return EXIT_SUCCESS;

}
