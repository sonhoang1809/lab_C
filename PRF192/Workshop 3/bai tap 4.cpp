#include<stdio.h>
int factorial(int n)
{
	int i;
	double f=1;
	for (i==2;i<=n;i++)
	f=f*i;
	return f;
}
int main()
{
	double n,f;
	printf("n=");
	do
	{
		scanf("%lf",&n);
	}
	while(n<0);
	factorial(n);
	printf("n!=%lf",f);
	getchar();
	return 0;
}
