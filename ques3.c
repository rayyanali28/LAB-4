#include<stdio.h>
int main (){
	int acc_type, acc_balance;
	printf("Enter your Account type(1=Savings 2= Current 3=Fixed deposit)\n:");
	scanf("%d",&acc_type);
	printf("Enter your account balance: ");
	scanf("%d",&acc_balance);
	switch(acc_type){
		case 1:
			if(acc_balance>100000){
				printf("Your annual interest earned is %.2f \n", acc_balance * 0.04);
			}
			else{
				printf("Your annual interest earned is %.2f \n", acc_balance * 0.02);
			}
			break;
			case 2:
				printf("There is no interest earned.\n");
			         break;
				         case 3:
					         printf("Your annual interest earned is %.2f \n", acc_balance * 0.08);
					            break; 
					                default:
					            	      printf("Invalid input! Please eneter a number between 1 and 3.\n");
	}
                                               return 0;
}
