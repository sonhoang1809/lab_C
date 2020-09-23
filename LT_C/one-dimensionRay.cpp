#include <stdio.h>
int main()
{
	int a[20],n;
	do{
		printf("input the number of elements: ");
		scanf("%d",&n);
		fflush(stdin);
	}while((n<0)||(n>20));
	for(int i=0;i<n;i++){
		printf("input data for element %d: ",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
