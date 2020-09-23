#include <stdio.h>
#include <stdlib.h>
int random (int min, int max)
{
	int r;
	r= min + rand()%(max-min+1);
	return r;
}
int main ()
{
	int count1, count2, a,b, total;
	do
	{
		printf ("Nhap vao ket qua muon xo so:");
		scanf ("%d", &total );
	}
	while (total<2||total>20);
	count1=1;
	count2=2;
	do
	{
		a=random(2,20);
		b=random(2,20);
		printf("Result of picks %d and %d:%d+%d\n",count1, count2, a, b);
		count1++;
		count2++;
	}
	while (a+b!=total);
	printf ("\nKet qua sau %d lan chon", count2-1);
	getchar ();
	return 0;
	
}
