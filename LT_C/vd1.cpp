#include <stdio.h>
#include <math.h>
int total(int a,int b); 
int product (int a,int b);
int main()
{
	
	int a,b;
	
	do 
	{	
		printf("enter 2 number ");
		scanf("%d %d",&a,&b);
		fflush(stdin);
	}while(a!= (int)a || a < 0 || b != (int)b || b < 0);
	printf("total of the two number:%d \n",total(a,b));
	printf("square of the number is %g \n",sqrt(a));
	printf("product of the two numbers: %d \n", product(a,b));
	return 0;
}

int total(int a, int b)
{
	return a+b;
}
int product(int a,int b)
{
	return a*b;
}
