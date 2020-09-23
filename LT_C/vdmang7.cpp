#include <stdio.h>
void find(int *,int ,int );
void nhapmang(int a[] ,int );
void xuatmang(int a[] , int );
int main()
{
	int i,n,x;
	int a[100];

	nhapmang(a,n);
	xuatmang(a,n);
	find(a,n,x);
}
void nhapmang(int a[],int n)
{
	int i;
	printf("enter number of numbers: n = "); scanf("%d",&n);	
	for(i=1;i<=n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d \t",a[i]);
		
	}
	
}
	
	
void find(int *p,int n,int x)
{
	int f=0,i;
	printf("\n input number you want to find: x= ");
	scanf("%d",&x);
	for(int i=1;i<=n;i++)
	{
	if(p[i]==x)\
	{
		f=i;
		printf("at number :%d",f);
//		break;
	}
	}
	
}
