#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int inputChoice(int *choice){
	printf("\n---MENU---\n");
	printf("1- Quadratic equation.\n");
	printf("2- Bank deposit problem. \n");
	printf("3 - Exit.\n");
	do{
	printf("Choose an option: ");scanf("%d",choice);
	}while(*choice<1||*choice>3);
	return *choice;
}

float inputCoefficients(float *a,float *b,float *c){
	printf("Enter Coefficients a: ");scanf("%f",a);
	printf("Enter Coefficients b: ");scanf("%f",b);
	printf("Enter Coefficients c: ");scanf("%f",c);
}
void outputSolution(float a,float b,float c){
	float delta;
	float x1,x2;
	delta=(pow(b,2)-4*a*c);
	if(delta<0) printf("The equation has no solution\n");
	if(delta==0){
		x1=(-b)/(2*a);
		printf("The equation has 1 solution: x1 = x2 = %f\n",x1);
	}
	if(delta>0){
		x1= ((-b)+sqrt(delta))/(2*a);
		x2= ((-b)-sqrt(delta))/(2*a);
		printf("The equation has 2 solution: \n");
		printf("x1 = %f\n",x1);
		printf("x2 = %f\n",x2);
	}
}

int inputDeposits(float *money,float *rate,int *month){
	do{
		printf("Enter Money: ");scanf("%f",money);
	}while(*money<0);
	do{
		printf("Enter Interest rate: ");scanf("%f",rate);
	}while(*rate>0.1);
	do{
		printf("Enter month: ");scanf("%d",month);
	}while(*month<0);
}

float outputTotal(float money,float rate, int month){
	if(month==1) return money*(rate+1);
	else return outputTotal(money,rate,month-1)*(rate+1);
}
int main(){
	int choice;
	do{
	choice = inputChoice(&choice);
	switch(choice){
		case 1:{
			float a,b,c;
			inputCoefficients(&a,&b,&c);
			outputSolution(a,b,c);
			break;
		}
		case 2:{
			float money;
			float rate;
			int month;
			double total;
			inputDeposits(&money,&rate,&month);
			total=outputTotal(money,rate,month);
			printf("Total amount receive: %lf",total);
			break;
		}
		case 3:
			break;
	}
	}while(choice!=3);
	return 0;
}
//done
