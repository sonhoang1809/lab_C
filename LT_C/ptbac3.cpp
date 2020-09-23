#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,delta; char ch = 'Y';
	float x1,x2; 
	do{
	printf("ta co pt bac 2: a*x2 + b*x + c = 0\n ");
	printf("nhap cac he so a,b,c \n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	fflush(stdin);
	delta = b*b - 4*a*c;
	if( delta <0)
		printf("pt nay vo nghiem\n ");
	else
		if(delta = 0)
		{
			x1=x2=-b/(2*a);
			printf("x1=x2= %f",x1,x2);
		}
		else
		{	
			x1= (-b+sqrt(delta))/(2*a);
			x2= (-b-sqrt(delta))/(2*a);
			printf("x1= %f; \n x2=%f \n",x1,x2);
			
			}
		printf("Do you want continue (press Y or y)");
		scanf("%c", &ch);
		getchar();
		}while(ch == 'Y' );
}
