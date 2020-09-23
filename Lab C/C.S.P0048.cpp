#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void write(char fName[]){
	FILE* f=fopen(fName,"a");
	if(f!=NULL){
		printf("Enter content: ");
		char c[100];
		gets(c);
		fputs(c,f);
	}
	fclose(f);
}

void read(char fName[]){
	FILE *f=fopen(fName,"r");
	if(f!=NULL){
		char c[100];
		while(!feof(f)){
			fgets(c,255,f);
			printf("%s",c);
		}
	}
	fclose(f);
}

int main(){
	char fName[100];
	printf("\n==========Text management==========\n");
	printf("Enter file name to save content: ");gets(fName);
	write(fName);
	
	printf("file content: \n");
	read(fName);
}
