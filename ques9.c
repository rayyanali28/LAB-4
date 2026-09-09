#include <stdio.h>
int main(){
	int bill, hour, membership;
	printf("Enter bill amount, hour of visit, and membership status(1 0r 0): \n");
	scanf("%d%d%d", &bill, &hour, &membership);
	if(hour>=15 && hour<=17 && membership==1){
		printf("The final payable bill is %.2f. \n", bill * 0.75);
	}
	else if (hour>=15 && hour<=17){
		printf("The final payable bill is %.2f. \n", bill * 0.80);
	}
	else if(membership==1){
		printf("The final payable bill is %.2f. \n", bill * 0.90);
	}
	else{
		printf("The final payable bill is %d. \n", bill);
	}
	return 0;
}
