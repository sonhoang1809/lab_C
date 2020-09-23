#include <stdio.h>
#include <math.h>
int getRelPos ( double x, double y, double r);
int main()
{
	int x,y;
	double r;
	do {
	printf("we have a circle with r = "); scanf("%lf",&r);
	}while(r<0);
	printf("A(x;y) \n");
	printf("x= ");scanf("%d",&x);
	printf("y= ");scanf("%d",&y);
	int result = getRelPos(x,y,r);
     if (result ==1) printf("The point is in the circle");
     else if (result==0) printf("The point is on the circle");
     else printf("The point is out of the circle");
     return 0;
}
int getRelPos ( double x, double y, double r)
{
	
	double d2=x*x + y*y;  /* d2= x2+ y2  */
	double r2= r*r;            /* r2*/  
	if (d2<r2) return 1 ; /* d2<r2 'the point is in the circle */
	else if (d2==r2) return 0 ; /* d2=r2 'the point is on the circle */
	return -1 ; /* d2 > r2 'the point is out of the circle */
}

	

