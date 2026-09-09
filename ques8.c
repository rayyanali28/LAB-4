#include<stdio.h>
int main(){
	int zone_type, driver_speed;
	int fine=1000;
	printf("Enter the Zone Type (1=School , 2= Highway , 3= Residential Area) and Drivers speed: \n");
	scanf("%d%d", &zone_type, &driver_speed);
	switch(zone_type){
		case 1:
			if(driver_speed>50){
				printf("The final fine amount is %d. \n ", fine * 2);
			}
			else if (driver_speed>30 && driver_speed<=50){
				printf("The final fine amount is %d. \n", fine);
			}
			else{
				printf("There is no fine. \n");
			}
			break;
			case 2:
				if(driver_speed>120){
					printf("The final fine amount is %d. \n ", fine * 2);
			}
			else if(driver_speed>100 && driver_speed<=120){
				printf("The final fine amount is %d. \n", fine);
			}
			else{
				printf("There is no fine. \n");
			}
			break;
			case 3:
				if(driver_speed>70){
					printf("The final fine amount is %d. \n ", fine * 2);
			}
			else if (driver_speed>50 && driver_speed<=70){
				printf("The final fine amount is %d. \n", fine);
			}
			else{
				printf("There is no fine. \n");
			}	
			break;
			default:
				printf("Invalid input! Enter input from number 1-3. \n");
				}
				return 0;
	}
