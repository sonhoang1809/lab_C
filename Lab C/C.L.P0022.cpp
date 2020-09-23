#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define fio "Students.txt"
#define fbin "Students.dat"

typedef struct student{
	char code[100];
	char name[100];
	char birth[100];
	float point;
}student;

int inputChoice(int *choice){
	printf("\n---MENU---\n");
	printf("1. Enter student list. \n");
	printf("2. Look up student. \n");
	printf("3. Display student list. \n");
	printf("4. Exit\n");
	do{
	printf("Choose an option: ");scanf("%d",choice);
	}while(*choice<1||*choice>4);
	return *choice;
}

int inputList(student arrSt[],int *n){
	printf("\nEnter a new student: ");	
	printf("\nStudent code: ");
	fflush(stdin);
	gets(arrSt[*n].code);
	printf("\nStudent name: ");
	fflush(stdin);
	gets(arrSt[*n].name);
	printf("\nDate of birth: ");
	fflush(stdin);
	gets(arrSt[*n].birth);
	printf("\nLearning points: ");
	float t=0;
	scanf("%g",&t);
	arrSt[*n].point=t;
	(*n)++;
}

void Display(student arrSt[],int n){
	printf("Student list:\n");
	for(int j=0;j<n;j++){
		printf("%-15s %3d","------Student ",(j+1));
		printf("\nStudent code: %s",arrSt[j].code);
		printf("\nStudent name: %s",arrSt[j].name);
		printf("\nDate of birth: %s",arrSt[j].birth);
		printf("\nLearning points: %g\n",arrSt[j].point);
	}
}
void writeFile(student arrSt[],int n){
	FILE* f = fopen(fio,"w");
	if(f==NULL) printf("Error load file");
	fprintf(f,"%d\n",n);
	for(int j=0;j<n;j++){
		fprintf(f,"%-15s %3d\n","------Student ",(j+1));
		fprintf(f,"%-20s\n",arrSt[j].code);
		fprintf(f,"%-20s\n",arrSt[j].name);
		fprintf(f,"%-20s\n",arrSt[j].birth);
		fprintf(f,"%-20.2f\n",arrSt[j].point);
	}
	fclose(f);
	printf("\nwrite successfull!!");
}
void readFile(student arrSt[],int *n){
	FILE *f;
	char buff[255];
	f=fopen(fio,"r");
	if(f==NULL) printf("Error load file");
	fscanf(f,"%d\n",n);
	for(int j=0;j<*n;j++){
		fscanf(f,"%-15s%3d\n","------Student",(j+1));
		fgets(buff,255,(FILE*)f);
		strcpy(buff,arrSt[j].code);
		fgets(buff,255,(FILE*)f);
		strcpy(buff,arrSt[j].name);
		fgets(buff,255,(FILE*)f);
		strcpy(buff,arrSt[j].birth);
		fscanf(f,"%f",&arrSt[j].point);
		printf("read successful\n");
	}
	fclose(f);
}
int main(){
	int choice;
	char filename[200];
	FILE *fout;
	int n=0;
	int m=1;
	student arrSt[100];
	readFile(arrSt,&n);
	do{
	choice = inputChoice(&choice);
	switch(choice){
		case 1:{
			inputList(arrSt,&n);		
			writeFile(arrSt,n);
			break;
		}
		case 2:{
			
			break;
		}
		case 3:{
			Display(arrSt,n);
			break;
		}
		case 4:
			break;
	}
	
	}while(choice!=4);
}

