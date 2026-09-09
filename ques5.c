#include <stdio.h>
int main(){
	int weight;
	int people;
	printf("Enter Weight and Number Of People: \n");
	scanf("%d%d", &weight, &people);
	if(weight>1000 && people>10){
		printf("Elevator cannot operate normally due to over weight and exceeding the people limit. \n");
}
	else if(people>10){
		printf("Elevator cannot operate normally due to exceeding the people limit. \n");
	}
	else if(weight>1000){
		printf("Elevator cannot operate normally due to over weight. \n");
	}
	else{
		printf("Elevator can operate normally. \n");
	}
	return 0;
}
