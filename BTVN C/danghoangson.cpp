#include <stdio.h>
#include <stdlib.h>

int calculateExponent(int a, int b);
int convertBiToDe(int num1);
int convertDeToBi(int de);
void mulTable();
int countDigit(int n);
int reserse(int n);
int main() {
	int n, num1, num2, num3, num4;
	printf("Wellcome to my program\n \n");
	printf("Menu: \n1. Convert binary number to decimal. \n");
	printf("2. Convert decimal number to binary.\n");
	printf("3. Multiplication Table Up to 10. \n");
	printf("4. Count Number of Digits is an Integer. \n");
	printf("5. Reverse an Integer.\n");	
	printf("6. Exit.\n");
	do{
		printf("\nEnter the number you want to do (1..5): ");
		scanf("%d", &n);
		switch(n){
			case 1: 
				printf("\nEnter binary number to convert: ");
				scanf("%d", &num1);
				printf("Convert %d to decimal: %d", num1, convertBiToDe(num1));
			break;
			case 2:
				printf("\nEnter binary number to convert: ");
				scanf("%d", &num2);
				printf("Convert %d to decimal: %d", num2, convertDeToBi(num2));
			break;
			case 3:
				mulTable();
			break;
			case 4:
				printf("Enter integer number to count: ");
				scanf("%d", & num3);
				printf("The number of digits in this number is %d", countDigit(num3));
				break;
			case 5:
				printf("Enter integer number to reserse : ");
				scanf("%d", &num4);
				printf("The number after reserse is %d", reserse(num4));
				break;
			case 6:
				return(0);
				
		}
	}while ( n > 0 || n <= 6);
	
	return 0;
}

int convertBiToDe(int num1){
	int sum = 0, i = 0;
	do{
		if(num1 % 10 == 1){
			sum =sum + calculateExponent(2, i);
			i ++;
			num1 = num1 / 10;
		} 
		else{
			i ++;
			num1 = num1 / 10;	
		}
		
	} while ( num1 != 0);
	
	return sum;
}

int calculateExponent(int a, int b){
	int x = 1, i;
	if( b == 0) return 1;
	for( i = 1; i <= b; i++){
		x =x* a; 
	}
	return x;
}

int convertDeToBi(int de)
{
	int sum = 0, i = 1;
	do{
		sum += (de % 2) * i;
		i *= 10;
		de = de / 2;
	}while (de != 0);
	
	return sum;
}

void mulTable(){
	int i, j;
	printf("\n Multiplication Table Up to 10.\n");
	for(i = 1; i <= 9; i ++){
		for(j = 1; j <= 10; j ++){
			printf("%d\t*\t%d\t=\t%d\n", i, j, i * j);
		}
		printf("\n");
	}
}

//Count Number of Digits is an Integer.

int countDigit(int n){
	int i, dem = 0;
	do {
		n = n / 10;
		dem ++;
	}while (n != 0);
	return dem;
}

//Reverse an Integer.
int reserse(int n){
	int i, tmp = 0, dem = 1;
	do{
		for (i = 1; i < countDigit(n); i ++)  dem = dem * 10;
		tmp += (n % 10) * dem;
		n = n / 10;
		dem = 1;
	} while (n != 0);
	return tmp;
}



