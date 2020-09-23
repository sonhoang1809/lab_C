#include <stdio.h>
 
int main()
{
    float x = 100, y = 50; // So tien ban va vo ban co
    float z; // so tien nhap moi
 
    printf("Nhap so tien = ");
    scanf("%f", &z);
 
    if( z > 0 ) // neu so tien nhap vao lon hon 0 thi cong vao vi
    {
        x = x + z / 2;
        y = y + z / 2;
    } else
    {
        x = x + z;
    }
 
    printf("So tien cua ban = %.2f \n", x);
    printf("So tien cua vo ban = %.2f \n", y);
 
    return 0;
}
