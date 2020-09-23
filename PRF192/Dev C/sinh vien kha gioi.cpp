#include <stdio.h>
int main()
{    float diem,hocbong;
     printf("Nhap diem bat ki");
     scanf("%f",&diem);
     if (diem>=8)
        {
		  printf("Sinh vien gioi \n");
          printf("Hoc bong 5trieu \n");
          printf("diem nhan 10 = %f",diem*10);
    }
     else 
	   	   if (diem>=6.5) 
        {
		  printf("Sinh vien kha \n");
          printf("Hoc bong 3trieu \n");
          printf("diem nhan 5 = %f",diem*5);
         }
		   else 
          printf("sinh vien trung binh \n");
}
