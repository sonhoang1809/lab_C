#include <stdio.h>
int main()
{
	int a = 2;
	float b = 9.5;
	char c = 'S';
	long d = 456789;
	char* s = "danghoangson"; // KHAI BAO KIEU CHUOI
	
	printf("vd ve cach su dung lenh printf\n");
	printf("tong cua %d va %f l� %f \n", a, b, a+b);
	printf("tich cua %d va %ld l� %ld \n", a, d, a*d);
	printf("ky tu c l� %c \n", c);
	printf("chuoi s l� %s \n", s);
	printf("dinh dang so mu cua b l� %e \n", b);
	printf("so he 16 va he 8 cua %d l� %x v� %o \n", a, a, a);
	printf("ma ASCII cua %c l� %d", c, c);
	
	return 0;
	}
	
