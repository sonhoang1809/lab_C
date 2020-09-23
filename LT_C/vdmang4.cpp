#include <stdio.h>
int main()
{
	int i,n;
	int a[100];
	printf("enter number of numbers: n = "); scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("%d \t",a[i]);
		
	}
	int x;
	printf("\ninput number you want to find: x= ");
	scanf("%d",&x);
	
	
	for(i=1;i<=n;i++)
	{
		if(a[i]==x)
		{
			printf("the number you want to find at : %d", i);
			break;
		}
		
	}
	if(i == (n+1))
		printf("the array does not contain the value !");
}
