#include <stdio.h>
#include <math.h>
int GCD(int a,int b);
int LCM(int a,int b);
int main()
{
	int a,b,G,L;
	do 
	{
	printf("enter a= ");scanf("%d",&a);
	printf("enter b= ");scanf("%d",&b);
	}while(a<=0||b<=0);
	G=GCD(a,b);
	L=LCM(a,b);
	printf("GCD(%d,%d)=%d",a,b,G);
	printf("\nLCM(%d,%d)=%d",a,b,L);
	getchar();
	return 0;
}
int GCD(int a,int b)
{
	while(a!=b)
	if (a>b) a-=b;
	else b-=a;
	return a;
}
int LCM(int a,int b)
{
	while(a!=b)
	return ((a*b)/GCD(a,b));
}	
