#include <stdio.h>
int main ()
{
	int a, b = 0,i ;
	char e,y,n;
	do{
		do{
			printf(" enter your value : ");
			fflush(stdin);
			scanf("%d", &a);
		}while(a < 0 || a != (int)a);
		
		for (i=2; i<= a / 2;i++){
			if(a % i == 0) b++;
		}
		if(b==0)
		printf("a la so nguyen to\n");
		else 
		printf("a ko la so nguyen to\n");
		fflush(stdin);
		//getchar();
		scanf("%c", &e);
	
	}
	while (e =='y');
	
	return 0;
	}
