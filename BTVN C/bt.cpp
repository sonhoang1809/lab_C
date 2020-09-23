#include <stdio.h>
#include <math.h>
int main ()
{
	int n,i=2,prime ;
	do 
	{
	printf("nhap n = ");
	scanf("%d",&n);
	int m = sqrt(n);
	for (i=2; i<=m; i++)
	{
	if(n%i==0)
		return 0;
		
		
	else 
		printf("%d ,",i);
    }
    }while (n<2);
}
