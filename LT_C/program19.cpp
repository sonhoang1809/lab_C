#include <stdio.h>
int main()
{
	int a,b;
	float x;
	printf("have : ax+b=0\n");
	printf("enter the first coefficient:a = \n");
	scanf("%d",&a);
	printf("enter the second coefficient:b = \n ");
	scanf("%d",&b);
	printf("we have: %d*x+%d=0\n",a,b);
	if(a==0)
	{if(b==0){
		printf("this equation is always true");}
		else{
			printf("this equation is ridiculous");
			
		}
}
	else{
		x= -b/a, x, b, a;
		printf("x= %g",x);
	}
	
return 0;

}
