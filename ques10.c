#include<stdio.h>
int main(){
	int heart_rate;
	float temperature;
	printf("Enter your heart rate and temperature: \n");
	scanf("%d%f", &heart_rate, &temperature);
	if(heart_rate>120 || temperature>39){
		printf("CRITICAL-Immediate Attention. \n");
	}
	else if(heart_rate>=100 && heart_rate<=120 && temperature>=37.5 && temperature<=39){
		printf("URGENT");
	}
	else{
		printf("NORMAL-Wait in quee");
	}
	return 0;
}
