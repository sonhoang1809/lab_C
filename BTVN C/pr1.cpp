#include <stdio.h>
#include <math.h>
int prime(int );
int main()
{
	int i,n,dem;
	do{
	
	printf("nhap n = ");
	scanf("%d",&n);
	}while (n<2);
	for(i=2;i<=n;i++)
	{
	if(n%i==0)
	dem=dem+1;
	if(dem=0)
	printf("%d",i);
	}
}
