#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int inputChoice(int *choice){
	do{
	printf("\n---MENU---\n");
	printf("1 - output first primes of the inputted number.\n");
	printf("2 - check a Fibonacci number. \n");
	printf("3 - sum of digits in a positive natural number. \n");
	printf("4 - Exit.\n");
	printf("Choose an option: ");scanf("%d",choice);
	}while(*choice<1||*choice>4);
	return *choice;
}
int inputPrimes(int *n){
	do{
	printf("input number of primes: ");scanf("%d",n);
	}while(*n<0||*n>50);
}
void outputPrimes(int n){
	int count;
	int t=2;
	int d=0;
	while(d<n){
		count=0;
		for(int i=2;i<=sqrt(t);i++){
			if(t%i==0){
				count++;
				break;
			}
		}
		if(count==0){		
			printf("%5d",t);
			t++;
			d++;				
		}
		else t++;
		
	}
}

int inputFibo(int *n){
	do{
		printf("enter number tested: ");scanf("%d",n);
	}while(*n<0||*n>1000);
}
int Fibo(int n){
	if(n==1||n==2) return 1;
	else return Fibo(n-1)+Fibo(n-2);
}
void ouputFibo(int n){
	for(int i=1;i<n;i++){
		printf("%d   ",Fibo(i));
	}
	printf("\n");
}
int checkFibo(int n){
	int t=1;
	int i=1;
	int count=0;
	while(t<n){
		t=Fibo(i);
		i++;
	}
	if(t==n) return 1;
	else return 0;
}

int inputDig(int *n){
	do{
		printf("Enter an Integer: ");scanf("%d",n);
	}while(n<0);
}
int sumDig(int n){
	int sum=0;
	int count=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int main(){
	int choice;
	do{
	inputChoice(&choice);
	switch(choice){
		case 1:{
			int n;
			inputPrimes(&n);
			outputPrimes(n);
			break;
		}
		case 2:{
			int n;
			inputFibo(&n);
			ouputFibo(n);
			if(checkFibo(n)==1){
				printf("It's Fibonancci term");
			}
			else{
				printf("It's not a Fibonancci term");
			} 			
			break;
		}
		case 3:{
			int n;
			inputDig(&n);
			int sum;
			sum=sumDig(n);
			printf("Sum of it's digits: %d",sum);
			break;
		}
		case 4:{
			break;
		}
	}
	}while(choice!=4);
	return 0;
}
//done
