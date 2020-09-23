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

bool checkCode(char code[],student arrSt[],int n){
	for(int i=0;i<n;i++){
		if(strcmp(code, arrSt[i].code) == 0){
			printf("This code is exited!!");
			return false;
		} 
	}
	return true;
}

int inputList(student arrSt[],int *n){
	printf("\nEnter a new student: ");
	do{
	printf("\nStudent code: ");
	fflush(stdin);
	gets(arrSt[*n].code);
	}while(checkCode(arrSt[*n].code,arrSt,*n)==false);
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
		printf("\n%-15s %3d","------Student ",(j+1));
		printf("\nStudent code: %s",arrSt[j].code);
		printf("\nStudent name: %s",arrSt[j].name);
		printf("\nDate of birth: %s",arrSt[j].birth);
		printf("\nLearning points: %g\n",arrSt[j].point);
	}
}

void writeBin(student arrSt[], int n){
    FILE *f = fopen(fbin,"wb");
    if(f==NULL) printf("Error load file");
    else fwrite(arrSt,sizeof(student),n,f);
    fclose(f);
}

void writeFile(student arrSt[],int n){
	FILE* f = fopen(fio,"w");
	if(f==NULL) printf("Error load file");
	for(int j=0;j<n;j++){
		fprintf(f,"%-15s %3d\n","------Student ",(j+1));
		fprintf(f,"%-20s\n",arrSt[j].code);
		fprintf(f,"%-20s\n",arrSt[j].name);
		fprintf(f,"%-20s\n",arrSt[j].birth);
		fprintf(f,"%-20.2f\n",arrSt[j].point);
	}
	fclose(f);
	writeBin(arrSt, n);
	printf("\nwrite successfull!!");
}

void readBin(student arrSt[], int *n){
    FILE *f = fopen(fbin,"rb");
    fseek(f,0,SEEK_END); //Nhay ve cuoi file, di chuyen di 0 vi tri
    (*n) = (ftell(f)+1)/sizeof(student); //ftell(); tra ve vi tri hien tai cua con tro
    // SEEK_CUR: di chuyen bat dau tu vi tri hien tai cua con tro, chi dung trong fseek()
    fseek(f,0,SEEK_SET); //Nhay ve dau file, di chuyen di 0 vi tri
    fread(arrSt,sizeof(student),(*n),f);
    fclose(f);
}

void readBi(student arrSt[],int *n){
	FILE *f=fopen(fbin,"rb");
	fseek(f,0,SEEK_END);
	(*n)=(ftell(f)+1)/sizeof(student);
	fseek(f,0,SEEK_SET);
	fread(arrSt,sizeof(student),(*n),f);
	fclose(f);	
}
void search(student arrSt[],int n){
	char s[100];
	int d=0;
	printf("Enter name you want to search: ");
	fflush(stdin);
	gets(s);
	for(int i=0;i<n;i++){
		if(strcmp(s,arrSt[i].name)==0){
			printf("\n%-15s %3d","------Student ",(i+1));
			printf("\nStudent code: %s",arrSt[i].code);
			printf("\nStudent name: %s",arrSt[i].name);
			printf("\nDate of birth: %s",arrSt[i].birth);
			printf("\nLearning points: %g\n",arrSt[i].point);
			d++;
		}

	}
	if(d==0) printf("This name is not existed!!");
}
int main(){
	int choice;
	int n=0;
	int m=1;
	student arrSt[100];

	do{
	choice = inputChoice(&choice);
	switch(choice){
		case 1:{
			inputList(arrSt,&n);		
			writeFile(arrSt,n);
			break;
		}
		case 2:{
			readBi(arrSt,&n);
			search(arrSt,n);
			break;
		}
		case 3:{
			readBi(arrSt,&n);
			Display(arrSt,n);
			break;
		}
		case 4:
			break;
	}
	
	}while(choice!=4);
}

