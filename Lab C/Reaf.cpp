#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void ReadDigits(int digit){
	if(digit==0) printf("  ");
	if(digit==1) printf(" one ");
	if(digit==2) printf(" two ");
	if(digit==3) printf(" three ");
	if(digit==4) printf(" four ");
	if(digit==5) printf(" five ");
	if(digit==6) printf(" six ");
	if(digit==7) printf(" seven ");
	if(digit==8) printf(" eight ");
	if(digit==9) printf(" nine ");
}
void Read2Number(int n){
	if(n<20){
		switch(n%10){
				case 0:{
					printf("ten ");
					printf("\n");
					break;
				}	
				case 1:{
					printf("eleven ");
					printf("\n");
					break;
				} 
				case 2:{
					printf("twelve ");
					printf("\n");
					break;
				} 
				case 3:{
					printf("thirteen ");
					printf("\n");
					break;
				} 
				case 4:{
					printf("fourteen ");
					printf("\n");
					break;
				} 
				case 5:{
					printf("fifteen ");
					printf("\n");
					break;
				} 
				case 6:{
					printf("sixteen ");
					printf("\n");
					break;
				} 
				case 7:{
					printf("seventeen ");
					printf("\n");
					break;
				} 
				case 8:{
					printf("eighteen ");
					printf("\n");
					break;
				} 
				case 9:{
					printf("nineteen ");
					printf("\n");
					break;
				} 
			}
		}
	else{
		switch(n/10){
			
					case 2:{
						printf("twenty ");
						break;
					} 
					case 3:{
						printf("thirty ");
						break;
					} 
					case 4:{
						printf("forty ");
						break;
					} 
					case 5:{
						printf("fifty ");
						break;
					} 
					case 6:{
						printf("sixty ");
						break;
					} 
					case 7:{
						printf("seventy ");
						break;
					} 
					case 8:{
						printf("eighty ");
						break;
					} 
					case 9:{
						printf("ninety ");
						break;
					} 
				}
				ReadDigits(n%10);
		}
		
}
int CountNumberOfDigits(int n){
	int count=0;
	while(n>0){
		n=n/10;
		count++;
	}
	return count;
}
void ReadNumber(int n){
/* 12345 = 54321 ->dao so*/
	int reverse=0;
	int a=n;
	while(a>0){
		reverse=reverse*10+a%10;
		a=a/10;		
	}
	printf("%d\n",reverse);
	int count= CountNumberOfDigits(reverse);
	if(count<3) {
			Read2Number(n);
		}
	else{
	while(reverse!=0){
		while(count>3){
		/*vd doc so 4321*/
		ReadDigits(reverse%10);
		if(count==4) printf(" thousand ");
		if(count==3) printf(" hundred ");
		count--;
		n=n-pow(10,count)*(reverse*10);
		reverse=reverse/10;
	
		}
		Read2Number(n);
		reverse=reverse/10;
	}}
	
}
int main(){
	int n;
	do{
		printf("\n");
		printf("Please enter string in numeric format: ");
		scanf("%d",&n);
		printf("The converted string: ");
		ReadNumber(n);
	}while(true);
}

