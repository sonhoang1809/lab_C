#include <stdio.h>
#include <stdlib.h>
int total(int , int );
int minus(int , int );
int product(int, int );
float divide(float , float);

int main()

{
	int a,b,c;
	printf("welcome to my program");
	printf("choose one in the following menu");
	do{
		printf("\n1. Add \n2. minus \n3. Product \n4. Divide\n5. Exit \n");
		printf("Choose a number: ");
		scanf("%d",&a);
	switch(a)
	{
		case 1:				
					printf("you choose add two number \n");
					printf("enter two number: ");
					scanf("%d %d", &b,&c);
					printf("total of two number : %d", total(b,c));
				
				break;
		case 2:
					printf("you choose minus two number \n");
					printf(" enter two number: ");
					scanf("%d %d", &b,&c);
					printf("minus of two number : %d", minus(b,c));
				break;
		case 3:
					printf("you choose product two numeber \n");
					printf("enter two number: ");
					scanf("%d %d", &b,&c);
					printf("product of two number: %d", product(b,c));
				break;	
		case 4:
					printf("you choose product two number \n");
					printf("enter two number: ");
					scanf("%d %d", &b,&c);
					printf("divide of two number: %f", divide((float)b, (float)c));
				break;
		case 5:
					exit (0);
				break;	
	}
} while(a!=5);
return 0;
}

int total(int b, int c) {
	return b+c;
}
int product(int b, int c){
	return b*c;
}
int minus(int b, int c){
	return b-c;
}
float divide(float b, float c){
	return b/c;
}
