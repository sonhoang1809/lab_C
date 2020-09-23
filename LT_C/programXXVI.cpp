#include <stdio.h>
#include <conio.h>
int main()
{
	char c='A'; int i=1; long l=1000;
	float f= 0.5f; double d=12.089;
	printf("Variable c: at addr: %u, value: %c, size: %d\n", &c, c, sizeof(c));
	printf("Variable i: at addr: %u, value: %d, size: %d\n", &i, i, sizeof(i));
	printf("Varible l: at addr: %u, value: %ld, size: %d\n", &l, l, sizeof(l));
	printf("Varible f: at addr: %u, value: %f, size: %d\n", &f, f, sizeof(f));
	printf("Varible d: at addr: %u, value: %lf, size: %d\n", &d, d, sizeof(d));
	getch();
}
