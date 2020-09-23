#include <stdio.h>
int main()
{
	int a = 2;
	float b = 9.5;
	char c = 'S';
	long d = 456789;
	char* s = "danghoangson"; // KHAI BAO KIEU CHUOI
	
	printf("vd ve cach su dung lenh printf\n");
	printf("tong cua %d va %f là %f \n", a, b, a+b);
	printf("tich cua %d va %ld là %ld \n", a, d, a*d);
	printf("ky tu c là %c \n", c);
	printf("chuoi s là %s \n", s);
	printf("dinh dang so mu cua b là %e \n", b);
	printf("so he 16 va he 8 cua %d là %x và %o \n", a, a, a);
	printf("ma ASCII cua %c là %d", c, c);
	
	return 0;
	}
	
