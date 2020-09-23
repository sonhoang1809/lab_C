#include <stdio.h>
#include <stdlib.h>
int input(int a[],int *n){
	printf("input number of elements: ");
	scanf("%d",n);
	for(int i=0;i<*n;i++){
		printf("element %d: ",i);
		scanf("%d",&a[i]);
	}
}
int print(int a[],int n){
	printf("we have the elements: ");
		for(int i=0;i<n;i++){
			printf("%d   ",a[i]);
		}
		printf("\n");
	}	
void check(int a[],int n){
	int m=n;
	int count=0;
	int pos;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			while(a[i]==a[j]){
				pos=j;
				count++;
				while(count>0)
				{
				
				for(int k=pos;k<n;k++){
					a[k]=a[k+1];
				}
				n--;
				count--;}
				fflush(stdin);
			}
		}
	}
	printf("we have elements after sort: ");
	for(int i=0;i<n;i++){
		printf("%d    ",a[i]);
}
	printf("\n");
}
int main(){
	int n;
	int a[50];
	do{
	
	input(a,&n);
	print(a,n);
	check(a,n);
}while(true);
}
