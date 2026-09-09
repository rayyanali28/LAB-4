#include <stdio.h>
int main(){
	int income, age, existing_repayment;
	printf("Enter your monthly income, age and existing loan repayment: \n");
	scanf("%d%d%d", &income, &age, &existing_repayment);
	if(income<=30000){
		printf("Rejected due to Income");
	}
		else if(age<21){
			printf("Rejected due to Age");
		}
			else if(age>60){
				printf("Rejected due to Age");
			}
										else if(existing_repayment > income * 0.4){
							printf("Rejected due to high Debt ratio");
						}
						else{
							printf("APPROVED");
						}
						return 0;
			}
