#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,wd,t,i;
	printf("program in C to calculate salary for an employee: ");
	printf("enter the number of working days (wd): ");scanf("%d",&wd);
	if(wd<=24)
	{
		t = wd*3;
		printf("the salary for an employee= %d",t);
		
	}
	else
	{
		t = 24*3+(wd-24)*2*3;
		printf("the salary for an employee= %d",t);
	}
//	return 0;
}
	
