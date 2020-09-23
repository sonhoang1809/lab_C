#include <stdio.h>
int main()
{
	int i,a;
	float b=0;char t;
	do{
	printf("nhap a = ");
	scanf("%d",&a);
	for (int i=1; i<a; i++){
		if(a%i==0) {b=b+i;}}
		
		if(b==a)
		{printf("a la so hoan hao\n");
		}
		else
		{printf("a khong la so hoan hao\n");
		
		}
		printf("Y or N\n");
		getchar();
		scanf("%c", &t);
	} while(t == 'Y');
		
	return 0;
}
	
	
	
