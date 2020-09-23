#include <stdio.h>
#include <math.h>
double factorial(int n);
int main()
{
	int i,n;
	
	do{
	printf("enter n= ");
	scanf("%d",&n);
	}while(n<0);
	printf("factorial n = %.4g",factorial(n));
	return 0;
}
double factorial(int n)
{
	    double p=1;
    int i;
    for (i=2; i<=n; i++) p =p * i;
    return p;
}    

	
