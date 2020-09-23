#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
/* check whether the fine existed or not */
int exist (char* filename)
{
	int existed = 0 ;
	/* try opening it for reading */
	FILE *f= fopen(filename,"r");
	if (f!=NULL)
	{
		existed = 1;
		fclose(f);
	}
	return existed;
}
/* write a file from lines inputted until the 0-line entered */
int writeFile(char* filename){
	
	if(exist (filename)== 1){
		printf("the file %s existed. Override it Y/N?: ",filename);
		if( toupper(getchar())=='N') return 0;
		
	}
	char line[201];
	int length=0;
/* open file for writting */
	FILE *f= fopen(filename,"w");
	fflush(stdin); /* clear input buffer*/
	
	do{
		gets(line); /* get a character*/
		length = strlen (line);
		if(length>0) fprintf(f,"%s\n",line); /*write \n to file */
	}
	while(length>0);
	fclose(f);
	return 1;	
}
int printFile(char* filename){

	if( exist(filename)== 0){
		printf(" the file %s does not exist. \n",filename);
		return 0;
	}
/* open file for reading */
	FILE *f= fopen(filename,"r");
	char line[201];
/* when data can be read from the file to variable, process variable */
	while (fscanf(f,"%[^\n]%*c",line) puts(line);
	fclose(f);
	return 1;	
}
int main(int argCount, char* args[]){
	char filename[81];
	printf("program for writing then reading file\n");
	printf("enter a file name: ");
	gets(filename);
	printf("write file: \n");
	if(writeFile(filename)==1){
		printf("data in this file %s: \n",filename);
		if(printFile(filename)==0) printf("file error!\n");
	}
	else printf("writing file fail!\n",filename);
	getchar();
	return 0;
}
