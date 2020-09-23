#include <stdio.h>
int main()
{
	int i,n,t=0,e,m,f,g,j,z,a1,b1;
	int a[100];
	float aver;
	int sum=0;
//	char c;
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
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
	
		if(a[i]>t)
		t=a[i];
	}	
	printf("the max number of the array: %d",t);
	printf("\n\n");
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
		
	}
		aver=sum*1.0/n;
	printf("marks that are greater than or equal to average of all the marks: \n");
	for(i=1;i<=n;i++)
	{
		if(a[i]>=aver)
		printf("(%d,%d)\t",i,a[i]);
	}		
		
	
	printf("\n\n");
	printf("enter a local to insert :e=  ");scanf("%d",&e);
	m=n+1;
	for(i=m;i>=e;i--)
	{
		a[i]=a[i-1];
	}
	printf("enter number you want to insert: a[e]= ");scanf("%d",&a[e]);
	for(i=1;i<=m;i++)
	{
	printf("%d\t",a[i]);
		
	}
	printf("\n\n");

	for(i=1;i<=n+1;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n\n");
	printf(" Delete a mark from the array");
	printf("enter a local you want to delete: f= ");scanf("%d",&f);
	
	for(i=f;i<=n;i++)
	{
		a[i]=a[i+1];
		}
		printf("\n\n");	
	g=n-1;	
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a[i]);
		}
	printf("\n\n");
	for(i=1;i<n;i++)
	{
		for(j= i+ 1;j<=n;j++)
		{
			if(a[i]>a[j]){
			z= a[i];
			a[i]=a[j];
			a[j]=z;
			}
		}
	}	
	printf("Sort the array: \n");
	for(i=1;i<=n;i++)
	{
	printf("%d\t",a[i]);
	}	
	printf("\n\n");
	printf("6.Input two float numbers a1 and b1 (a1<b1). Show marks that are greater than or equal to a1 and less than or equal to b1. \n");
	printf("enter 2 number a1,b1: ");scanf("%d,%d",&a1,&b1);
	printf("marks that are greater than or equal to %d : \n",a1);
	for(i=1;i<=n;i++)
	{
		if(a[i]>=a1)
		printf("%d \t",a[i]);
	}
	printf("\n");
	printf(" less than or equal to %d: \n",b1);
	for(i=1;i<=n;i++)
	{
		if(a[i]<=b1)
		printf("%d \t",a[i]);
	}	
			
}				

