#include<stdio.h>
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
int main()
{
	int a,b,L,G;
	do
	{
		printf("a=");
		scanf("%d",&a);
		printf("\nb=");
		scanf("%d",&b);
	}
	while(a<=0||b<=0);
	G=GCD(a,b);
	L=LCM(a,b);
	printf("GCD(%d,%d)=%d",a,b,G);
	printf("\nLCM(%d,%d)=%d",a,b,L);
	getchar();
	return 0;
}
