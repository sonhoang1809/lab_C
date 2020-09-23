#include<stdio.h>
int point(double x,double y, double r)
{
	double d2=x*x+y*y;
	double r2=r*r;
	if(d2<r2) return 1;
	else  if(d2==r2) return 0;
	else return -1;
}
int main()
{
	int result;
	double x,y,r;
	printf("Nhap toa do:");
	scanf("%lf,%lf",&x,&y);
	printf("\nNhap ban kinh R=");
	do
	{
		scanf("%lf",&r);
	}
	while(r<0);
	result=point(x,y,r);
	if (result==-1)
	printf("This point is in the circle");
	else 
		if (result==0)
		printf("This point is on the circle");
		else printf("This point is out of the circle");
	getchar();
	return 0;
}
