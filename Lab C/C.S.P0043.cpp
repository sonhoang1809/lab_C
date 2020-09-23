#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int getUserChoice(){
	int choice;
	printf("MENU:\n");
	printf("1- Add a value\n");
	printf("2- Search a value\n");
	printf("3- Remove the first existence of a value\n");
	printf("4- Remove all existences of a value\n");
	printf("5- Print out the array \n");
	printf("6- Sort the array in ascending order (positions of elements are preserved)\n");
	printf("7- Sort the array in descending order (positions of elements are preserved)\n");
	printf("8- Exit!!\n");
	do{
		printf("choose an operation: ");scanf("%d",&choice);
	}while(choice<0||choice>8);
	return choice;
}

int add(int a[],int *n){
	printf("add an value to array: \n");
	printf("a[%d]= ",*n);scanf("%d",&a[*n]);
	(*n)++;
}

void search(int a[],int n){
	int c;
	int t=0;
	printf("position of number: ");
	scanf("%d",&c);
	for(int i=0;i<n;i++){
		if(c==a[i]){
			printf("%d at position %d of the array \n",c,i);
			t++;
		}
	}
	if(t==0) printf("This number is not existed at Array!!");
}

void remove(int a[],int *n){
	if(*n==0){
		printf("This list is empty\n");
	}
	else{
		int c;
		int t=0;
		printf("enter number to remove: ");
		scanf("%d",&c);
		for(int i=0;i<*n;i++){
			if(c==a[i]){
				t++;
				for(int j=i;j<*n;j++){	
					a[j]=a[j+1];				
				}
				i--;
				(*n)--;
				break;
			}
		}
		
		if(t==0) printf("This number is not existed at Array!!\n");
	}
}

void removeAll(int a[],int *n){
	if(*n==0){
		printf("This list is empty\n");
	}
	else{
		int c;
		int t=0;
		printf("enter number to remove: ");
		scanf("%d",&c);
		for(int i=0;i<*n;i++){
			if(c==a[i]){
				t++;
				for(int j=i;j<*n;j++){				
					a[j]=a[j+1];
				}
				(*n)--;
				i--;
			}
		}
		if(t==0) printf("This number is not existed at Array!!");
	}
}

void print(int a[], int n){
	printf("Print out the array: \n");
	for(int i=0;i<n;i++){
		printf("a[%d] = %d\n",i,a[i]);
	}
}

void sortAc(int a[],int n){
	int t;
	int b[100];
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(b[j] > b[j+1]){
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[i]==a[j]){
				printf("a[%d] = %d\n",j,a[j]);
			}
		}
	}
	printf("sort acending successful!!\n");	
}
void sortDes(int a[],int n){
	int t;
	int b[100];
	for(int i=0;i<n;i++){
		b[i] = a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(b[j] < b[j+1]){
				t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(b[i]==a[j]){
				printf("a[%d] = %d\n",j,a[j]);
			}
		}
	}
	printf("sort descending successful!!\n");	
}

int main(){
	int a[100];
	int n=0;
	int choice;
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:{
				add(a,&n);
				print(a,n);
				break;
			}
			case 2:{
				search(a,n);
				break;
			}
			case 3:{
				print(a,n);
				remove(a,&n);
				print(a,n);
				break;
			}
			case 4:{
				print(a,n);
				removeAll(a,&n);
				print(a,n);
				break;
			}
			case 5:{
				print(a,n);
				break;
			}
			case 6:{
				sortAc(a,n);
				break;
			}
			case 7:{
				sortDes(a,n);
				break;
			}
			case 8:{
				
				break;
			}
		}
	}while(choice!=8);
}
