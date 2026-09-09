#include <stdio.h>
int main(){
	int policy_status, vehicle_age, claim_amount;
	printf("Enter policy status(1 or 0), vehicle age and claim amount: \n");
	scanf("%d%d%d", &policy_status, &vehicle_age, &claim_amount);
	if(policy_status==1 && vehicle_age<10 && claim_amount<=500000){
		printf("Your Vehicle claim is approved for Rs.%d \n", claim_amount);
	}
	else if(policy_status==1 && vehicle_age>=10 && vehicle_age<=15 && claim_amount<=500000){
		printf("50 percent of your vehicle claim is approved for Rs.%.2f \n", claim_amount * 0.5);
	}
	else{
		printf("Your vehicle claim is not approved. \n");
	}
	return 0;
}
