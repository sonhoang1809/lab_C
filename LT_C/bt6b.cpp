#include <stdio.h>
int main()
{
	int i,n,t=1;
	printf("nhap n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(int j=n;j>=i;j--)
		{
			printf("* ");
		}
		printf("\n");
	//	for(int j=1; j<=t;j++)
	//	{
	//		printf("  ");
	//		if(t==n) return 0;
	//	}
	//t++;
	}
}
	
	
	
	
	

	
