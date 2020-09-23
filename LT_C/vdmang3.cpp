#include <stdio.h>
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
int main()
{
	int n,i,s;
	int a[n];
	printf("enter n= "); scanf("%d",&n);
	nhapmang(a, n);
	xuatmang(a, n);
}
void nhapmang(int a[], int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
	printf("enter number a[%d]= ",i); scanf("%d",&a[i]);
	}
}
void xuatmang(int a[],int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d \n",a[i]);
	}
}		
