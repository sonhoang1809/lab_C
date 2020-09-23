#include <stdio.h>
int chenthem(int a[],int n);
int main()
{
	int i;
	int n,x,t;
	int a[100];
	int chenthem(int a[],int n);
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
	chenthem(a,n);
}
int chenthem(int a[],int n)
{
	int k,x;
	printf("\n enter local you want to chen: k= ");scanf("%d",&k);
	printf("\n enter number you want to chen: x= ");scanf("%d",&x);
	n=n+1;
	for(int i=n;i > k;i--)
	{
		a[i]=a[i-1];
	
	}
		a[k]=x;
	printf("the array after chen: ");
	for(int i=1;i<=n;i++)
	{
		printf("%d \t",a[i]);
	}
	}	
