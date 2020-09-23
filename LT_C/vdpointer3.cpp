#include <stdio.h>
#include <stdlib.h>
 
int main() 
{
    int *px, *qx;
    px = (int *) malloc(sizeof(int));
    qx = (int *) calloc(1, sizeof(int));
 
    printf("Vi tri con tro px la %p \n", px);
    printf("Gia tri con tro px tro toi la %d \n", *px);
 
    printf("Vi tri con tro qx la %p \n", qx);
    printf("Gia tri con tro qx tro toi la %d \n", *qx);
    return 0;
}
