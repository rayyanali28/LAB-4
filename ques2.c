#include<stdio.h>
int main(){
	float marks, percentage;
	double score;
	printf("Enter your Entry Test marks and Fsc percentage: \n");
	scanf("%f%f", &marks, &percentage);
	score= ((marks/100 * 0.5 ) + (percentage/100 * 0.5))*100;
	if(score>=80){
		printf("You got Admission in Computer Science");
	}
	else if(score>=65 && score<=79){
		printf("You got Admission in Software Engineering");
	}
	else if(score>=50 && score<=64){
		printf("You got Admission in Information Technology");
	}
	else{
		printf("Your Admission is rejected");
	}
	return 0;
}
