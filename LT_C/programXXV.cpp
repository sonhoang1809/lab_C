#include <stdio.h>
int main()
{
	float a, b;
	printf("nhap a = ");
	scanf("%f", &a);
	printf("nhap b = ");
	scanf("%f", &b);
	if(a > b)
	{ 
	printf("a lon hon b");
	}
	else
	{	
		if (a < b)
	{printf("b lon hon a");}
		else 
		{ printf("a bang b");}
		}
		
		return 0;
		}
