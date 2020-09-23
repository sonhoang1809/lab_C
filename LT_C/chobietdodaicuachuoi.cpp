#include<conio.h>
#include<stdio.h>
#include<string.h>

int main()
{
    char Chuoi[255];
    int Dodai;
    printf("Nhap chuoi: ");
    gets(Chuoi);
    Dodai = strlen(Chuoi);
    printf("Chuoi vua nhap:");
    puts(Chuoi);
    printf("Co do dai %d",Dodai);
    getch();
    return 0;
}
