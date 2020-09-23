#include <stdio.h>
 
int main()
{
    int a;
    printf("Nhap a = ");
    scanf("%d",&a);
 
    switch(a)
    {
        case 1: printf("Mot\n"); 
                break;
        case 2: printf("Hai\n"); 
                break;
        case 3: printf("Ba\n"); 
                break;
        case 4: printf("Bon\n"); 
                break;
        case 5: printf("Nam\n"); 
                break;
    }
 
    return 0;
}
