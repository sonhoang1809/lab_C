#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int m;
	m=sqrt(n);
	int i;
	if (n<2) return 0;
	for (i=2; i<=m; i++)
	if (n%i==0) return 0;
	return 1;
}
int main()
{
	int n,i;
	printf("n=");
	do
	{
		scanf("%d",&n);
	}
	while (n<2);
	for (n>=2; i<=n; i++)
	if (prime(i))
	printf("primes:%d\n",i);
	getchar();
	return 0;
}
