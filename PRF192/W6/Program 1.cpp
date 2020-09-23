#include <stdio.h>
#include <stdlib.h>
#define MAXValue 10

int checkValue(int *a, int n);
//---------------
int main(){
	int i;
	int a[MAXValue];
	for (i=0; i<MAXValue; i++){
		printf("Input value: ");
		scanf("%d", &a[i]);
	}
	int check = checkValue(a,MAXValue);
	if (check==1){
		printf("------------\n");
		printf("Valid");
	}
	else {
		printf("------------\n");
		printf("Invalid");
	}
	getchar();
	return 0;
}
//---------------
int checkValue(int* a, int n){
	int t=0;
	int i,k;
	n=MAXValue;
	int** c = (int**) calloc (n,sizeof(int*));
	for (i=0; i<n-1; i++){
		c[i]=&a[i];
	}
	for (i=0; i<MAXValue-1; i++){
		if (i>n-2){
			t = t + (*c[i]);
		}
		else {
			*c[i] = (*c[i]) * n;
			t = t + (*c[i]);
			n--;			 
		}
	}
	if (t%11==0){
		return 1;
	}
	else {
		return 0;
	}
}
