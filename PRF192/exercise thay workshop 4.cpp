#include<stdio.h>
#include<ctype.h>
int valid(int d,int m,int y)
{   int maxd=31;
	if (d>31||d<1||m>12||m<1)
	return 0;
	if (m==4||m==9||m==6||m==11)
	maxd=30;
	else
		if (m==2)
		{
			if (y%400==0||(y%4==0&&y%100!=0))
			maxd=29;
			else maxd=28;
		}
	return d<=maxd;	   
}
    int cau1()
{
	int d,m,y;
	printf("Nhap ngay:");
	scanf("%d",&d);
	printf("Nhap thang:");
	scanf("%d",&m);
	printf("Nhap nam:");
	scanf("%d",&y);
	if (valid(d,m,y))
	printf("Valid Date");
	else printf("Invalid Date");
	getchar();
	return 0;
}
 
      int cau2()
{    char t,c,c1,c2;
     int d;
     printf("Nhap so c1:");
     fflush(stdin);
     c1=getchar();
     printf("Nhap so c2:");
     fflush(stdin);
     c2=getchar();
     if (c1>c2)
        {t=c1;
		c1=c2;
		c2=t;
		}
	 d=c2-c1;
    for(c=c1;c<=c2;c++)
       printf("%c,%d,%o,%X\n",c,c,c,c);
   
}



int getUserChoice()
{
    int choice;
    printf("\n1. Thuc hien cau 1:\n");
    printf("\n2. Thuc hien cau 2:\n");
    printf("\nQuit\n");
    printf("\nLua chon bai can thuc hien\n");
    scanf("%d",&choice);
    return choice;
}

int main()
{
    int Userchoice;
    do
    {
        Userchoice = getUserChoice();
        switch(Userchoice)
        {
            case 1: cau1(); break;
            case 2: cau2();break;
            default: printf("Ket thuc chuong trinh");
        }
    }
    while(Userchoice >0 && Userchoice <3);
    return 0;
    

}
