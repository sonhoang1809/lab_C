#include<stdio.h>
int main()
{
	int a[100];
	int i,n,t=0;
	printf("enter number of number: n= ");scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		if(t<a[i])
		t=a[i];
	}
	printf("%d",t);
}			
