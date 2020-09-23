#include <stdio.h>
 
int main() 
{
    /* khai bao bien x va bien con tro px */
    int x, *px; 
    px = &x;
    /* &x : tra ve dia chi cua bien x
     * px = &x : gan dia chi cua bien x cho px hay px tro den x
     */
 
 do{
    printf("nhap x = ");scanf("%d",&x);
 
    printf("Vi tri cua bien x la %p \n", &x);
    printf("Noi dung cua bien x la %d \n", x);
    printf("Vi tri cua bien x la %p \n", px);
    printf("Noi dung cua bien x la %d \n", *px);
 
    *px = 7826;
    printf("\n -------- \n\n");
 
    printf("Noi dung cua bien x la %d \n", x);
    printf("Noi dung cua bien x la %d \n", *px);
 }while(x!=0);
    return 0;
}
