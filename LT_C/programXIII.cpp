#include <stdio.h>
 
int main()
{
    int tuoi = 0;
    // khai bao chuoi co toi da 30 ky tu
    char ten[30], tenNguoiYeu[30];
 
    printf("Ho va ten cua ban ten la gi? ");
    gets(ten); // nhap chuoi khong can dau &
 
    printf("Ban bao nhieu tuoi roi? ");
    scanf("%d", &tuoi);
    fflush(stdin);
 
    printf("Nguoi yeu cua ban ten la gi? ");
    gets(tenNguoiYeu);
 
    printf("\n====\n");
    printf("Ten: %s \nTuoi:%d \nNY:%s \n", ten, tuoi, tenNguoiYeu);
 
    return 0;
}
