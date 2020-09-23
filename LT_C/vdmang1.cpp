/* Ex1: write a C program that input n integer numbers and show the total of the numbers.*/
#include <stdio.h>
int main()
{
	int n,total,a[20];
	printf("input the number of the elements: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("input data for element %d: ",i);
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
	sum=sum+a[i];}
	printf("\n total of the array: %d",sum);
	
}

