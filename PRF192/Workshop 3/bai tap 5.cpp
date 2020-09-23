#include<stdio.h>
double Fibo(int n)
{
	int t1=1,t2=1,f,i;
	for(i==3;i<=n;i++)
	{
		f=t1+t2;
		t1=t2;
		t2=f;
	}
	return f;
}
int main()
{
	int n;
	printf("n=");
	do
	{
		scanf("%d",&n);
	}
	while(n<1);
	printf("F=%d",Fibo(n));
	getchar();
	return Fibo(n);
}
