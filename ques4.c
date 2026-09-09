#include <stdio.h>
int main(){
	int type, time;
	int student=2000;
	int regular=3500;
	int senior_citizen=2500;
	printf("Enter your Membership type(1= Student 2= Regular 3= Senior Citizen) \n");
	scanf("%d", &type);
	printf("Enter your time slot(1= Morning 2= Evening) \n");
	scanf("%d", &time);
	switch(type){
		case 1:
		      
			switch(time){
				case 1:
					printf("The morning slot monthly gym fee for student membership is Rs %d but after 15 percent discount it is Rs %.2f \n", student, student * 0.85);
					break;
					case 2:
						printf("The evening monthly gym fee for student membership is %d", student);
						break;
						default:
							printf("Invalid input! Please enter a number between 1 and 2.\n");				
			}
			break;
			case 2:
				switch(time){
					case 1:
						printf("The morning monthly gym fee for regular membership is Rs %d but after 15 percent discount it is Rs %.2f \n", regular, regular * 0.85);
						break;
						case 2:
							printf("The evening monthly gym fee for regular membership is Rs %d", regular);
							break;
							default:
							printf("Invalid input! Please enter a number between 1 and 2.\n");				
			}
			break;
				case 3:
					switch(time){
						case 1:
						printf("The morning monthly gym fee for Senior Citizen membership is Rs %d but after 15 percent discount it is Rs %.2f \n", senior_citizen, senior_citizen * 0.85);
						break;
						case 2:
							printf("The evening monthly gym fee for Senior Citizen membership is Rs %d", senior_citizen);
							break;
							default:
							printf("Invalid input! Please enter a number between 1 and 2.\n");				
			}
			break;
			default:
					printf("Invalid input! Please enter a number between 1 and 3.\n");										
					}
					return 0;
}
