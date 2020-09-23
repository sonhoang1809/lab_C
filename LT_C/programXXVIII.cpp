#include <stdio.h>
int main ()
{
	int a, b;
	float c, d;
	double e, f;
	printf("nhap 2 so nguyen: a, b \n");
	scanf("%d, %d", &a, &b);
	printf("nhap 2 so thuc: c, d \n");
	scanf("%g, %g",&c, &d);
	printf("nhap 2 so thuc: e, f \n");
	scanf("%lg, %lg", &e, &f);
	printf("variable: %d, addr: %u, size: %d\n", a,&a,sizeof(a));
	printf("variable: %d, addr: %d\n", b,&b,sizeof(b));
	printf("variable: %g, addr: %u, size: %d\n", c,&c,sizeof(c));
	printf("variable: %g, addr: %u\n", d,&d,sizeof(d));
	printf("variable: %lg, addr: %u\n", e,&e,sizeof(e));
	printf("variable: %lg, addr: %u\n", f,&f,sizeof(f));
	
	getchar();
	return 0;
}
