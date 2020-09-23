#include <stdio.h>
void Input(int,int);
void add(int,int);
void motnghiem(int , int );
void hainghiem(int , int , float );
void vonghiem();
int main()
{
	int a,b,c;
	float delta,x1,x2;
	printf("nhap he so cho pt: a*x^2+b*x+c=0 \n");
	printf("nhap a =");
	scanf("%d",&a);
	printf("nhap b =");
	scanf("%d",&b);
	printf("nhap c =");
	scanf("%d",&c);
	delta=b*b-4*a*c;
	if (delta<0) vonghiem();
	else 
	{
		if(delta==0)
			motnghiem(b,a);
		else
			hainghiem(a,b,delta);
	}

return 0;
}
void vonghiem(){
	printf("vo nghiem");
}
void motnghiem(int b,int a){
	x1=x2=-b/(2*a);
	printf("pt co nghiem kep x1=x2=%f",x1,x2);
}
void hainghiem(int a,int b,float delta){
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("pt co 2 nghiem x1=%f \n x2=%f",x1,x2);
}							
