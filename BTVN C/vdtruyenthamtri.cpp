//truyen tham tri
#include <stdio.h>
#include <math.h>
void Input(int *,int *);
void Add(int,int);
int main()
{
	int a,b;
	Input(&a,&b);// truyen dia chi cua a va b
	Add(a,b);
}
void Input(int *x, int *y)//a truyen tham tri cho x, b truyen tham tri cho y
{
	printf("enter 2 numbers: ");
	scanf("%d %d",x,y);
}
void Add(int x,int y)
{
	printf("total of the 2 numbers is %d",x+y);
}		
	
