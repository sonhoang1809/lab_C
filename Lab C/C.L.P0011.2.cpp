#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

bool checkInputBinary(char input[]){
	
	printf("\n%d\n",((int) input[0])-48);
	for(int i=0;i<strlen(input);i++){
		char tmp =  (((((int) input[i])-48)));
		printf("%c",tmp);
		if(input[i]==tmp){
			printf("%d \n",(((int) input[i])-48));
		}
	}
	long n=0;
	int m=0;
	for(int i=0;i<strlen(input);i++){
		n=n*10+(int) input[i];
	}
	if(n<0){
		return false;
	}
	while(n>0){
		m=n%10;
		n=n/10;
		if(m>1){
			return false;
		}
	}
	return true;
}

long long inputBinary(){
	char input[100];
	long binary=0;
	printf("Input binary number: ");
	scanf("%s",&input);
	printf("%d",strlen(input));
	if(checkInputBinary(input)==false){
		printf("Enter again!!\n");
		inputBinary();
	}else{
		for(int i=0;i<strlen(input);i++){
			binary=binary*10 + (int) input[i];
		}
		return binary;
	}
	
}
int convertBiToDe(long a){
	int m=0,i=0;
	int Decimal=0;
	int n= a;
	while(n!=0){
		m=n%10;
		n=n/10;
		Decimal+=m*pow(2,i);
		++i;
	}
	return Decimal;
}
bool checkOctal(float input){
	
	if(input<0){
		return false;
	}
	if((input-((int) input))!=0){
	 return false;	
	}
	while(input>0){
		int m= (((int) input)%10);
		input=input/10;
		if (m>7){
			return false;
		}
		
	}
	return true;
}
long long inputOctal(){
	float input;
	do{
		printf("Enter octal number: ");
		scanf("%f", &input);
		
		checkOctal(input);
		if (checkOctal(input)==false){
			printf("Enter again: \n");
		}
		
    }while(checkOctal(input)!=true);
   long octal= (int) input;
	return octal;
}
int convertOcToDe(long b){
	int decimal;
	int m;
	int i=0;
	while(b!=0){
		m=b%10;
		b=b/10;
		decimal=decimal+m*pow(8,i);
		i++;
	}
	return decimal;
}

int convertHexToDe(){
	int dig;
	int t;
	int decimal;
	int cnt=0;
	char hexa[100];
	do{
		decimal=0;
		t=0;
	printf("enter hexa number: ");
	fflush(stdin);
	scanf("%s",&hexa);
	for	(int i=strlen(hexa)-1;i>=0;i--){
		switch (hexa[i]){
			case 'A':
				dig=10; break;
			case 'B':
				dig=11; break;
			case 'C':
				dig=12;break;
			case 'D':
				dig=13;break;
			case 'E':
				dig=14;break;
			case 'F':
				dig=15;break;
			case '0':
				dig=0;break;
			case '1':
				dig=1;break;
			case '2':
				dig=2;break;
			case '3':
				dig=3;break;
			case '4':
				dig=4;break;
			case '5':
				dig=5;break;
			case '6':
				dig=6;break;
			case '7':
				dig=7;break;
			case '8':
				dig=8;break;
			case '9':
				dig=9;break;
			default:
				t++;							
		}
		decimal=decimal + dig*pow(16,cnt);
		++cnt;
	}
	}while(t>0);
	return decimal;
}

int main(){
	int choice;
	do{
			printf("---MENU---\n");
			printf("1.	Convert binary number to decimal number\n");
			printf("2.	Convert octal number to decimal number\n");
			printf("3.	Convert hexadecimal number to decimal number\n");
			printf("4.	Exit\n");
		do{	
			printf("Enter an operation: ");scanf("%d",&choice);
		}while(choice<1||choice>4);
	switch(choice){
		case 1:{
			long a=inputBinary();
			printf("Decimal is: %d \n",convertBiToDe(a));
			break;
		}
		case 2:{
			long b=inputOctal();
			printf("Decimal is: %d \n",convertOcToDe(b));
			break;
		}
		case 3:{
			
			printf("Decimal is: %d \n",convertHexToDe());
			break;
		}
		case 4:
			break;		
	}}while(choice!=4);
}
