#include<stdio.h>
double  so_thuc(int ipart, int fraction)
{    double d_f= fraction;
     while (d_f >=1) d_f=d_f/10;
     if (ipart<0) return ipart-d_f; 
     return ipart+d_f; 
}
int main() 

{   	
	 int ipart,fraction;
	 printf("Nhap ipart: ");
     scanf("%d",&ipart);
	do
	 {
	 printf("Nhap fraction: ");
     scanf("%d",&fraction);
 	 }
	 while (fraction<0);

     printf("Gia tri so thuc: %lf",so_thuc(ipart,fraction));
}
