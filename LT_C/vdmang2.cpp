#include <stdio.h>
int main()
{
	int n,i,s=0;
	int a[n];
	printf("enter number of numbers want to sum: n = ");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter number a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d \n",a[i]);
	}
	for(i=1;i<=n;i++)
	{
		s=s+a[i];
	}
	printf(" \n s = %d",s);
	return 0;
}
