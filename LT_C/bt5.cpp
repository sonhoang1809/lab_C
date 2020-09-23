#include <stdio.h>
#include <stdlib.h>

/* tim trung binh cac so duong nhap tu ban phim, ket thuc khi go 1 so am */

int main() 
{
	int a;
	float tb,dem=0,sum=0;
	do
	{
	scanf("%d",&a);
	if(a>0)
	{sum = sum +a;
	dem = dem+1;}

	}
	while (a>=0);printf("tb = %g",sum/dem);
	return 0;}
