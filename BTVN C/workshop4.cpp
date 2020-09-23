#include<stdio.h>
#include<stdlib.h>
void processPrimes(int n){
	int t=0,b;
	printf("input number: n= ");scanf("%d",&n);
	b=n/2;
	for(int i=1;i<b;i++)
	{
		if(n%i==0)
		t=t+1;
		
	}
	if(t>0)
	printf("this number is not a prime");
	else printf("this number is a prime");
}
void findMaxMin(int n){
	int t=0,a[10];
	printf("enter numbers of number: n= ");scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("a[%d]= ",i);scanf("%d",&a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		printf("a=[%d]\t",i);
	}
	for(int i=1;i<=n;i++)
	{
		if(t<a[i])
		t=a[i];
	}
	printf("max: %d",t);
	for(int i=1;i<=n;i++)
	{
		t=a[1]; 
		if(t>a[i])
		t=a[i];
	}
	printf("min: %d",t);
}

int main()
{
	int c,n;
	do{
	
	printf("Write a C program that will execute repetitively using a simple menu as following: \n");
	printf("1-	Process primes\n");
	printf("2-	Print min, max digit in an integer;\n");
	printf("3-	Quit\n");
	printf("Select an operation:\n");scanf("%d",&c);
	switch(c)
	{
		case 1:
			processPrimes(n);
			break;
		case 2:
			findMaxMin(n);
			break;
		case 3: 
			exit (0);	
			break;
	}
	}while(c!=3);
	return 0;
}

 
