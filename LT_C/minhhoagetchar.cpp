#include <stdio.h>

int main ()
{
   char c;

   printf("Nhap : ");
   c = getchar();
 
 while(c != EOF){
 	if(c=='  ') c=='_';
 		
   putchar(c);
   	c = getchar();
   
}
  
}
