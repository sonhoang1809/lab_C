#include<stdio.h>
#include<stdlib.h>
int input(int* ,int ,int );
int output(int* ,int ,int);
int main()
{
	int a[5][5],*p;
	int m,n;
	p=&a[0][0];
	printf("enter the number of the line and the collum: n, m");
	scanf("%d %d",&n,&m);
	input(p,n,m);
	output(p,n,m);
}	
int input(int *p,int n,int m)
{		
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			printf("enter the element numbers: a[%d][%d] = ",i,j);
			scanf("%d",p+i*m+j);
		}
}		

int output(int *p,int n,int m)		
{		
	for(int i=0;i<n;i++)
		{
		for(int j=0;j<m;j++)
		
			printf("%d\t",*(p+i*m+j));
			printf("\n");
		}
}			
	
