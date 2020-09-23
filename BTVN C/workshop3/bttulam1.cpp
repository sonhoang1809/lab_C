#include <stdio.h>
#include <math.h>
int checkprime(int i);
int main()


{
	int i,num;

	do {
	
	printf("enter your number: ");
	scanf("%d",&num);
	}while(num<2);
	for(int i=2; i<=num; i++)
	{if(checkprime(i) == 1 )
	printf("%d ",i);
	}
	return 0;
}
int checkprime(int i)
{
	int i1,dem=0;
	for(i1=2; i1<= sqrt(i);i1++)
	{
	if(i%i1==0)
	dem++;}
	if(dem==0)
	return 1;
	
}
