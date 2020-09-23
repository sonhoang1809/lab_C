#include <stdio.h>
int find(int *,int ,int );
int main()
{
	int i,n;
	int a[100];
	printf("enter number of numbers: n = "); scanf("%d",&n);
//	nhapmang(a,i);
//	xuatmang(a,i);
	
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
	
	if(find(a,n,x)==0) printf("the array does not contain the value ");
	else printf("the value at %d",find(a,n,x));	
}
int find(int *p,int n,int x)
{
	int f=0;
	for(int i=1;i<=n;i++)
	if(p[i]==x)\
	{
		f=i;
		break;
	}
	return f;
}
