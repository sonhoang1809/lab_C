#include <stdio.h>
#include <math.h>
#include <conio.h>
void giaiptbac2 ()
{
	float a,b,c,delta,x1,x2;
	printf("Phuong trinh bac 2 co dang ax^2 + bx + c = 0\n");
	printf("Nhap a: ");
	scanf("%f",&a);
	printf("Nhap b :");
	scanf("%f",&b);
	printf("Nhap c :");
	scanf("%f",&c);
	if (a==0)
	{
		if (b==0)
		{
			if (c==0) printf("Phuong trinh vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else
		{
			x1=-b/c;
			printf("Phuong trinh co 1 nghiem:x= %f",x1);
		}
	}
	else
	{
		delta=b*b-4*a*c ;
		if (delta<0) printf("Phuong trinh vo nghiem");
		if (delta==0)
		{
			x1=-b/(2*a);
			printf("Phuong trinh co mot nghiem kep:x= %f",x1);
		}
		if (delta>0)
		{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet\n");
			printf("x1= %f\n",x1);
			printf("x2= %f\n",x2);
		}
	}
}
void bank()
{
	int n; /*Number of year */
	float d,r,p; /*deposit, yearly rate, Amount at the n(th) year*/
	r=1.6;
	printf ("Nhap so tien ban dau: "); scanf ("%f", &d);
	printf ("So nam sau khi gui tien: "); scanf ("%d", &n);
	p=d*pow(r,n);
	printf ("So tien sau %d nam la: %lf\n ",n,p);
	
}
int menu ()
{
	int chon;
	printf ("\n1- Giai phuong trinh bat 2");
	printf ("\n2- Bank deposit problem");
	printf ("\nQuit");
	printf ("\nYour choice: ");
	scanf ("%d", &chon);
	return chon;
}
int main ()
{
	int luachon;
	do
	{
		luachon=menu();
		switch (luachon)
	{
		case 1:giaiptbac2 (); break;
		case 2:bank(); break;
		default: printf ("Goodbye - Thank you");
	}
	}
	
	while (luachon>0 && luachon <3);
	getchar ();
	return 0;
}
