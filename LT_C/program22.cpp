#include <stdio.h>
int main()
{ int n,i;
float j,s=0;
	printf("nhap n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{j=1.0/i;
	s=s+j;
	}
	printf("%f",s);
	
}
