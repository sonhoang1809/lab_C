#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Random(int a, int b)
{
   return a + rand()%(b-a+1);
}
 
int main()
  { int a;
    printf("Nhap so N:");
    scanf("%d",&a);
    srand(time(NULL));
    printf("a = %d\n", rand()%);
     return 0;
}
    
  
