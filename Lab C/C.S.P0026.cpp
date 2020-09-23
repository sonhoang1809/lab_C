#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
long input(int *n){
	do{
	printf("Enter positive number: ");scanf("%d",n);
	}while(*n<1);
}
void convert(int n){
	int a[100];
	int i=0;
	while(n>0){
		a[i]=n%2;
		n=n/2;
		i++;
	}
	printf("Binary number: ");
	for(int j=i-1;j>=0;j--){
		printf("%d",a[j]);
	}
	printf("\n");
}

int main(){
	int n;
	char c='\0';
	do{
		printf("\nConvert Decimal to Binary program\n");
		input(&n);
		convert(n);
		printf("press any key to continues!!");
		fflush(stdin);
		scanf("%c",&c);
		
	}while(c!=27);
}
