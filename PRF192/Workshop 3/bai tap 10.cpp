#include<stdio.h>
void MinMaxDigit(int n)
{
	int min,max,remainder;
	remainder=n%10;
	n=n/10;
	min=max=remainder;
	while(n>0)
	{
		remainder=n%10;
		n=n/10;
		if(min>remainder) min=remainder;
		if(max<remainder) max=remainder;
	}
	printf("Max digit is %d",max); 
	printf("\nMin digit is %d",min);
}
int main()
{
	int n;
	printf("Enter an integer:");
	do
	{
		scanf("%d",&n);
		MinMaxDigit(n);
	}
	while(n<0);
	getchar();
	return 0;
}
