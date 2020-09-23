#include <stdio.h>
int main()
{
	int gio, phut, giay, a;
	printf("nhap giay = ");
	scanf("%d", &giay);
	 gio = giay/3600, gio;
	(a = giay%3600, a);
	phut = a/60;
	giay = giay - gio*3600 - phut*60;
	printf("KQ la : \\ %02d:%02d:%02d", gio, phut, giay);
	
	
	return 0;
	}
