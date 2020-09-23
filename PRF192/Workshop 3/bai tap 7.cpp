#include<stdio.h>
int sumDigit(int n)
{
	int sum=0;
	do
	{
		int remainder=n%10;
		n=n/10;
		sum+=remainder;
	}
	while(n>0);
	return sum;
}
int main()
{
	int n;
	printf("n=");
	do
	{
		scanf("%d",&n);
		if (n>=0)
		{
			int S=sumDigit(n);
			printf("Sum=%d",S);
		}
	}
	while(n<0);
	getchar();
	return 0;
}
