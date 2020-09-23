#include <stdio.h>
 
int main()
{
    int a = 12;
    float b = 13.5;
    char c = 'Q';
    long d = 3454;
    char s[] = "nguyenvanquan7826"; // khai bao kieu chuoi
 
    printf("%6d %5.3f %.3f \n", a, b, a+b);
    printf("%-5d %5ld %5ld \n", a, d, a*d);
    printf("%5c \n", c);
    printf("%30s \n", s);
 
    return 0;
}
