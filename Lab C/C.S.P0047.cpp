#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct student{
	char name[100];
}student;

int getUserChoice(){
	int choice;
	printf("\n----------MENU----------\n");
	printf("1.	Add a student name into the array.\n");
	printf("2.	Remove a student name.\n");
	printf("3.	Search a student name.\n");
	printf("4.	Output student names in ascending orders alphabetically.\n");
	printf("5.	Exit!!\n");
	do{
	printf("choose an operation: "); scanf("%d",&choice);
	}while(choice<1||choice>5);
	return choice;
}

int add(student st[],int *n){
	if(*n>=100){
		printf("List is full!!\n");
	}else{
		printf("input student name: ");
		fflush(stdin);
		gets(st[*n].name);
		(*n)++;
	}
}

void print(student st[],int n){
	printf("total student: %d\n",n);
	for(int i=0;i<n;i++){
		printf("%d. %s\n",(i+1),st[i].name);
	}
}

void remove(student st[],int *n){
	if(n==0){
		printf("this list is empty\n");
	}
	else{
		char s[100];
		printf("name: ");
		fflush(stdin);
		gets(s);
		int pos=0;
		int t=0;
		for(int i=0;i<*n;i++){
			if(strcmp(s,st[i].name)==0){
				pos=i;
				t++;
			}
		}
		if(t==0) printf("the student name is not existed\n");
		else{
			for(int i=pos;i<*n;i++){
				strcpy(st[i].name,st[i+1].name);
				(*n)--;
			}
			printf("Student name: %s has been removed successfull\n",s);
		}
	}
}

void search(student st[],int n){
	if(n==0){
		printf("this list is empty\n");
	}
	else{
		char s[100];
		printf("name: ");
		fflush(stdin);
		gets(s);
		int t=0;
		for(int i=0;i<n;i++){
			if(strcmp(s,st[i].name)==0){
				printf("you find student: \n");
				printf("student %d: %s\n",(i+1),st[i].name);
				t++;
			}
		}
		if(t==0) printf("the student name is not existed\n");
	}
}

void printAs(student st[],int n){
	if(n==0){
		printf("this list is empty\n");
	}
	else{
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(strcmp(st[i].name,st[j].name)>0){
					char t[100];
					strcpy(t,st[i].name);
					strcpy(st[i].name,st[j].name);
					strcpy(st[j].name,t);
				}
			}
		}
	}
}

int main(){
	int choice;
	student st[100];
	int n=0;
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:{
				add(st,&n);
				print(st,n);
				break;
			}
			case 2:{
				remove(st,&n);
				print(st,n);
				break;
			}
			case 3:{
				search(st,n);
				break;
			}
			case 4:{
				printAs(st,n);
				print(st,n);
				break;
			}
			case 5:{
				
				break;
			}
		}
	}while(choice!=5);
}
