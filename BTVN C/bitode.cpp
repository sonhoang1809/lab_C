#include <stdio.h>
#include <stdlib.h>
int convertBiToDe(int n);
int calculateExponent(int a, int b );
int main()
{
	int n,sum;
	printf("enter binary to convert: "); scanf("%d",&n);
	printf("Convert %d to decimal: %d", n, convertBiToDe(n));
}
int convertBiToDe(int n)
{
	int i,sum=0;
	do
	{
	if(n%10 ==1)
	{
		sum = sum + calculateExponent(2,i);
		i++;
		n=n/10;
	}
	else 
	{
	i++;	
	n=n/10;
	}
	}while (n!=0);
return sum;
}
int calculateExponent(int a,int b)
{
	int x=1,i;
	if(b==0) return 0;
	for (i=1;i<=b;i++)
	x=x*a;

return x;
}		
