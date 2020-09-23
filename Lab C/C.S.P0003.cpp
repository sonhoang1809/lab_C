#include<stdio.h>
#include<stdlib.h>


int inputArray(int a[],int *n){
	do{
	
	printf("size of array: ");scanf("%d",n);
	}while(*n<=0);
	for(int i=0;i<*n;i++){
		printf("enter element[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void outputSort(int a[],int n){
	printf("The array sorted in ascending:\n");
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%3d",a[i]);
	}
	printf("\n");
}
int inputNew(int a[],int *n){
	(*n)++;
	printf("enter new number: ");scanf("%d",&a[*n-1]);
	
}
int main(){
	char sc;
	int a[100];
	int n;
	do{
		inputArray(a,&n);
		outputSort(a,n);
		inputNew(a,&n);
		outputSort(a,n);
		printf("\npress ESC to exit program!!: \n");
		fflush(stdin);
		scanf("%c",&sc);

	}while(sc!=10);
	
}
