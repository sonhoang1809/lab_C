#include<stdio.h>
int x;
int main()
{ 
    int sum =0;
    do
    { printf("Nhap gia tri x=");
     scanf("%d",&x);
     if(x!=0)
      sum += x;/*Sum=sum+x*/
     }
    while (x!=0); 
    printf("\n Tong Sum=%d",sum);
    return 0;
    
}

