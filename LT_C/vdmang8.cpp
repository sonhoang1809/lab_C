//tim phan tu xuat hien nhieu nhat trong mang

#include<stdio.h>
int main()
{
	int t=1;
	int a[10];
	int i,j,n,cs;
	printf("enter the number of the number: n= ");scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter number: a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		
		int dem=1;
		for(j=i+1;j<n;j++)
			if(a[i]==a[j]) dem=dem+1;
		if(t<dem) {
		t=dem;
		cs=i;
	}
	}
	printf("the number appear the most at %d and the number of .... is %d",cs,t);
}		
			
