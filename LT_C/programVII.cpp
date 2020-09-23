#include <stdio.h>
 
int a = 1, b = 5; // khai bao bien toan cuc, no se duoc dung o bat ky dau ke tu dong nay.
 
int main()
{
    // khai bao 2 bien trong ham main, no se duoc dung trong toan bo ham main ke tu dong nay
    int c = 4, d = 6; 
 
    if(c < d)
    {
        int e = 6, d = 8;  // khai bao bien e va d, no duoc dung trong doan nay.
        c = 7;
        printf("gia tri cac bien trong khoi:\n");
        printf("e = %d \t d = %d \t c = %d\n", e, d, c);
    } // den day bien e, d vua khai bao khong con hoat dong nua.
 
    // printf("gia tri bien e = %d\n", e);  // lenh nay sai vi bien e khong con ton tai nua
 
    printf("gia tri cac bien trong ham main:\n");
    printf("c = %d \t d = %d\n", c, d);
 
    printf("gia tri cac bien toan cuc:\n");
    printf("a = %d \t b = %d\n", a, b);
 
    return 0;
}
