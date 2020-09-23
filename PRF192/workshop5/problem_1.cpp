#include <stdio.h>
#include <stdlib.h>
int intRandom (int min, int max )
{
	int i;
	i= min+ rand()%(max-min+1);
	return i;
}
int main ()
{
	int total,x,y,count;
	do
	{
		printf ("Total sought: ");
		scanf ("%d", &total);
	}
	while (total<2||total>12);
	count=1;
	do
	{
		x=intRandom(2,6);
		y=intRandom(2,6);
		printf ("Resoult of throw %d: %d +%d\n",count,x,y);
		count++;
	}
	while (x+y!=total);
	printf("\nKet qua sau %d lan do xux xac", count-1);
	getchar ();
	return 0;
}
