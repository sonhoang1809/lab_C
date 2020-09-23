#include <stdio.h>
#include <stdlib.h>
int Max(int b,int c);
int Min(int b,int c);
double Average(int b,int c);
int NumberOE(int b, int c);
void Swap(int* b,int* c);

int main()
{
	int i,t,a,b,c;
	printf("welcome to my program \n");
	printf("enter 2 numbers to perform: "); scanf("%d %d",&b,&c);
	do{
	printf("choose 1 command to perform \n");
	printf("1.Max \n2.Min \n3.Average \n4.NumberOE \n5.Swap \n6.Quit \n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 1:
			printf("max number: %d ",Max(b,c));
			
			break;
		case 2:
			printf("min number: %d ",Min(b,c));
			
			break;
		case 3:
			printf("average 2 numbers: %f ",Average(b,c));
			
			break;
		case 4:
			printf("NumberOE: %d ",NumberOE(b,c));
			
			break;
		case 5:
			Swap(&b,&c);
			break;
		case 6:
			return 0;	
	}
	}while(a!=6);
}
int Max(int b, int c)
{
	if(b<c) return c;
	return b;
}
int Min(int b, int c)
{
	if(b<c) return b;
	return c;
}
double Average(int b,int c)
{
	return (b+c)/2;
	
}
int NumberOE(int b, int c)
{
	int i;
	for(i= Min(b,c);i<=Max(b,c);i++)
	if(i%2==0) printf("%d  ",i);
	
}
void Swap(int *b, int *c)
{
	int t;
	t=*b;
	*b=*c;
	*c=t;
	printf("swap of two numbers: %d  %d \n",*b,*c);
}

