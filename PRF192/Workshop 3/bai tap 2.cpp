#include<stdio.h>
int valid(int d,int m,int y)
{   int maxd=31;
	if (d>31||d<1||m>12||m<1)
	return 0;
	if (m==4||m==9||m==6||m==11)
	maxd=30;
	else
		if (m==2)
		{
			if (y%400==0||(y%4==0&&y%100!=0))
			maxd=29;
			else maxd=28;
		}
	return d<=maxd;	
}
int main()
{
	int d,m,y;
	printf("date:");
	scanf("%d_%d_%d",&d,&m,&y);
	if (valid(d,m,y))
	printf("Valid Date");
	else printf("Invalid Date");
	getchar();
	return 0;
}
