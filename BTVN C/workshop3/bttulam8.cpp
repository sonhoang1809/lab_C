#include <stdio.h>
//#include <math.h>
double sothuc(int ipart,int fraction)
{
	double d_f= fraction;
	while (d_f>=1) d_f=d_f/10;
	 if (ipart<0) return ipart-d_f; 
     return ipart+d_f; 
}
int main() 

{   	
	 int ipart,fraction;
	 printf("enter ipart: ");
     scanf("%d",&ipart);
	do
	 {
	 printf("enter fraction: ");
     scanf("%d",&fraction);
 	 }
	 while (fraction<0);

     printf("Gia tri so thuc: %f",sothuc(ipart,fraction));
}
		
