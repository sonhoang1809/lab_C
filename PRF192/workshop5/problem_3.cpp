#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void ktngaythang (int d, int m, int y)
{
	printf ("Nhap ngay: ");
	scanf ("%d", &d);
	printf ("Nhap thang: ");
	scanf ("%d", &m);
	printf ("Nhap nam: ");
	scanf ("%d",&y);
	do
	{
		switch (m)
		    {
		    	case 1:
		    case 3:
		   	case 5:
		   	case 7:
			case 8:
			case 10:
			case 12:
			if (d>0 && d<32)
			printf ("%d/%d/%d la ngay thang nam hop le",d,m,y);
			else
			printf ("%d/%d/%d la ngay thang nam khong hop le",d,m,y);  break;			
			
			case 4:
			case 6:
			case 9:
			case 11:
			if (d>0 && d<31)
			printf ("%d/%d/%d la ngay thang nam hop le",d,m,y); 
			else
			printf ("%d/%d/%d la ngay thang nam khong hop le",d,m,y);  break;	
			
			case 2:
			if ((y%400==0)||(y%100==0 && y%4==0) && (d<=29))
			printf ("%d/%d/%d la ngay thang nam hop le",d,m,y);	
			else
			printf ("%d/%d/%d la ngay thang nam khong hop le",d,m,y); break;
			}
	}
	while ((d<0||d>31) && (m<1||m>12));
}
void ktra_C ()
{
	int d;
	char a,b,c,t;
	fflush(stdin);
	printf ("Ky tu dau: ");
	a=getchar();
	fflush(stdin);
	printf ("Ky tu thu 2: ");
	b=getchar();
	if (a>b)
	{
		t=a; a=b; b=t;
	}
	d=a-b;
	if (d!=1&d!=0)
	{
		printf ("Ki tu o giua cua %c va %c\n",a,b);
		for (c=a; c<=b;c++)
		printf ("Ki tu :%c - %d - %oh.\n",c,c,c);
	}
}
int menu ()
{
	int chon;
	printf ("\n1- Processing date data");
	printf ("\n2- Character data");
	printf ("\nQuit");
	printf ("\nYour choice: ");
	scanf ("%d", &chon);
	return chon;
}
int main ()
{
	int d,m,y;
	int luachon;
	do
	{
		luachon=menu();
		switch (luachon)
	{
		case 1:ktngaythang (d,m,y); break;
		case 2:ktra_C (); break;
		default: printf ("Bye.");
	}
	}
	
	while (luachon>0 && luachon <3);
	getchar ();
	return 0;
}
