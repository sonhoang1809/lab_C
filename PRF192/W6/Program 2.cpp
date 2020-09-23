#include <stdio.h>
#include <stdlib.h>
#define MAXN 100

int isFull (int* a, int n);
int isEmpty(int* a, int n);
int menu();
void add(int value, int* a, int*pn);
int search(int x, int* a, int n);
void printAsc(int* a, int n);
void print(int* a, int n);
void valueRange (int* a, int x, int y, int n);
//-------------------------
int main(){
	int a[MAXN];
	int n=0;
	int value;
	int userChoice;
	int minVal,maxVal;
	minVal = maxVal = 0;
	do {
		userChoice = menu();
		switch(userChoice){
			case 1:
				if (isFull(a,n)){
					printf("\nSorry! The array is full.\n");
				}
				else {
					printf("Input an added value: ");
					scanf("%d", &value);
					add(value, a, &n);
					printf("Added");
				}
				break;
			case 2:
				if (isEmpty(a,n)) {
					printf("\nSorry! The array is empty.\n");
				}
				else {
					printf("Input the searched value: ");
					scanf("%d", &value);
					int pos = search(value, a, n);
					if (pos <0){
						printf("Not found!\n");
					}
					else printf("Postion is found: %d", pos);
				}
				break;
			case 3:	
				print(a,n);
				break;
			case 4:
				do {
					printf("Note: maxVal > minVal!!!\n");
					printf("Input minVal: ");
					scanf("%d", &minVal);
					printf("Input maxVal: ");
					scanf("%d", &maxVal);
				}
				while (maxVal<minVal);
				valueRange(a,minVal,maxVal,n);
				break;
			case 5:
				printAsc(a,n);
				break;
			default: printf("\nGoodbye.\n");
		}
	}
	while (userChoice>0 && userChoice<6);
	getchar();
	return 0;
}
//-------------------------
void valueRange (int* a, int x, int y, int n){
	int posMin = search(x,a,n);
	int posMax = search(y,a,n);
	int check = 0;
	int i;
	for (i=posMin;i<posMax;i++){
		if (a[i]<a[posMax] && a[i]>a[posMin]){
			printf("%d", a[i]);
			check++;
		}
	}
	if (check==0){
		printf("Not found!\n");
	}
}
int isFull (int* a, int n){
	return n==MAXN;
}
int isEmpty(int* a, int n){
	return n==0;
}
int menu(){
	printf("\n----------------------\n");
	printf("One-Dimesional Array of Integers");
	printf("\n1- Add a value");
	printf("\n2- Search a value");
	printf("\n3- Print out the array");
	printf("\n4- Print out values in a range");
	printf("\n5- Print out the array in ascending order");
	printf("\nOther- Quit");
	printf("\nSelect: ");
	int choice;
	scanf("%d",&choice);
	return choice;
}
void add(int value, int* a, int*pn){
	a[*pn]=value;
	(*pn)++;
}
int search(int x, int* a, int n){
	int i;
	for (i=0;i<n;i++) {
		if (a[i]==x) {
			return i;
		}
	}
	return -1;
}
void printAsc(int* a, int n){
	int** adds = (int**)calloc(n, sizeof(int*));
	int i,j;
	for (i=0; i<n; i++) {
		adds[i] = &a[i];
	}
	int* t;
	for (i=0;i<n-1;i++){
		for (j=n-1; j>i; j--){
			if (*adds[j] < *adds[j-1]){
				t=adds[j];
				adds[j]=adds[j-1];
				adds[j-1]=t;
			}
		}
	}
	for (i=0;i<n;i++){
		printf("%d", *adds[i]);
	}
	free(adds);
}
void print(int* a, int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d", a[i]);
	}
}


