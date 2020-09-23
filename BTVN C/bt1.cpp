#include <stdio.h>
#include <stdlib.h>
int add(int ,int );
int minus(int ,int );
int product(int ,int );
float divide(float ,float );

int main()
{
	int a,b,c;
	printf("welcome to my program\n");
	do 
	{
	printf("choose one of the following menu\n");
	printf(" 1.add \n 2.minus \n 3. product \n 4. divide \n 5.exit\n");
	scanf("%d",&a);
	switch (a)
		{
		
		case 1 :
			{
			printf("you chose add number\n");
			printf("enter your number you want add :\n");
			scanf("%d %d",&b,&c);
			printf("add two number: %d \n", add(b,c));
			break;
			}
		case 2:
			{
			printf("you chose minus number\n");
			printf("enter your number you want minus :\n");
			scanf("%d %d",&b,&c);
			printf("minus two number: %d \n", minus(b,c));
			break;
			}	
		case 3:
			{
			printf("you chose product number\n");
			printf("enter your number you want product :\n");
			scanf("%d %d",&b,&c);
			printf("product two number: %d \n", product(b,c));
			break;
			}
		case 4:
			{
			printf("you chose divide number\n");
			printf("enter your number you want divide :\n");
			scanf("%d %d",&b,&c);
			printf("divide two number: %f\n", divide(float(b),float(c)));
			break;
			}
		case 5:
			exit (0);
			break;
		}
	}while (a!=5);
	return 0;
}
int add(int b, int c)
	{return b+c;
		}
int minus(int b, int c)
	{return b-c;
		}	
int product(int b, int c)
	{return b*c;
		}	
float divide(float b, float c)
	{return b/c;
			}		
