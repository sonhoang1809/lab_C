#include <stdio.h>
 
int main()
{
    int a;
    char t;
 do{
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
    printf("y or n \n");
    getchar();
    scanf("%c", &t);}
 while (t == 'y');
    return 0;
}
