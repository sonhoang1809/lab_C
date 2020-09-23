#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define mile 0.621371192//1 mile = 621371192 kilo-mét//
#define pi 3.141592654
//1 in = mi*63360
int inputFuel(float *minutes,float *speed, float *gas){
	do{
	printf("how many minutes did you drive? \n");
	scanf("%f",minutes);
	}while(*minutes<0);
	do{
		printf("what was the average speed of the car during that time? \n");
		scanf("%f",speed);
	}while(*speed<0);
	do{
		printf("how many gallons did your car use ? \n");
		scanf("%f",gas);
	}while(*gas<0);
}
float outputFuel(float minutes,float speed,float gas){
	float n;
	float h=minutes/60;
	n = (float)((speed*h)/gas);
	return n;
}

int inputCartires(float *radius,float *revolution){
	do{
		printf("what is the radius of your tires, in inches?\n");
		scanf("%f",radius);
	}while(*radius<=0);
	do{
		printf("how many revolution did your car tire's make? \n");
		scanf("%f",revolution);
	}while(*revolution<=0);
}

float CalDistance(float radius,float revolution){
	float n;
	n=pi*(2*radius/63360)*revolution;
	return n;
	
}
float Cal(float radius,float revolution,float gas){
	float n;
	n=(radius*2*pi/63360)*revolution/gas;
	return n;
}

int main(){
	int choice;
	float n;
	do{
	printf("\n----MENU----\n");
	printf("1. Calculating Fuel Economy\n");
	printf("2. Calculating Distance Traveled \n");
	printf("3. Revised Fuel Economy Calculation \n");
	printf("4. Quit\n");
	printf("Choice feater: ");scanf("%d",&choice);
	switch(choice){
		case 1:{
			float minutes;
			float speed;
			float gas;
			inputFuel(&minutes,&speed,&gas);
			printf("Your car averaged %f miles per gallon",outputFuel(minutes,speed,gas));
			break;
		}
		case 2:{
			float radius;
			float revolution;
			inputCartires(&radius,&revolution);
			printf("your car traveled %f miles",CalDistance(radius,revolution));
			break;
		}
		case 3:{
			float radius;
			float revolution;
			float gas;
			inputCartires(&radius,&revolution);
			printf("How many gallons did your car use?\n");
			scanf("%f",&gas);
			printf("Your car averaged %f miles per gallon",Cal(radius,revolution,gas));
			break;
		}
		case 4:
			break;
	}
	}while(choice<1||choice>4||choice!=4);
}
