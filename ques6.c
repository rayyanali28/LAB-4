#include <stdio.h>
int main(){
	int plan, min;
	printf("Enter your plan choice: Plan 1: 1000 minutes in Rs.500,  Plan 2: 2000 minutes in 800, Plan 3: Unlimited minutes in Rs.1200  Plan 4: Custom plan billed at Rs. 1/minute \n");
	scanf("%d", &plan);
	switch(plan){
		case 1:
			printf("Enter minutes used: \n");
			scanf("%d", &min);
			if(min>1000){
				printf("Total bill is %d \n", (min - 1000) * 2 + 500);
			}
			else{
				printf("Total bill is 500. \n");
			}
			break;
			case 2:
				printf("Enter minutes used: \n");
			    scanf("%d", &min);
			    if(min>2000){
				printf("Total bill is %d \n", (min - 2000) * 2 + 800);
			}
			else{
				printf("Total bill is 800. \n");
			}
			break;
			case 3:
				printf("Total bill is 1200. \n");
			break;
			case 4:
				printf("Enter minutes used: \n");
			    scanf("%d", &min);
			    printf("Total bill is %d. \n", min * 1);
			    break;
			    default:
			    	printf("Invalid input! Please Enter numbers between 1 and 4. \n");
					}
					return 0;
				}
				
			
