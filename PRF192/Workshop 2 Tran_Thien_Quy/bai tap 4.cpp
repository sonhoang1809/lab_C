#include<stdio.h>
int x,y,t;
int main()
{ do 
      {
	  printf("Nhap so nguyen x:");
      scanf("%d",&x);
      printf("Nhap so nguyen y:");
      scanf("%d",&y);
      t=x;
      x=y;
      y=t;
      printf("X va Y: %d va %d\n",x,y);
      printf("\n");
	  }
   while(x!=0 && y!=0 );
}
