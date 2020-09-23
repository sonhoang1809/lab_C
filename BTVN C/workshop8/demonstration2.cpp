#include<stdio.h>
#include <conio.h>
#include<string.h>
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
int writeFile(char* filename){

	if(exist (filename)== 1){
		printf("the file %s existed. Override it Y/N?: ",filename);
		if( toupper(getchar())=='N') return 0;
		
	}
	char line[201]; /* input string */
	int length=0; /* length of inputted line */
	
/* open file for writting */
	FILE *f= fopen(filename,"w");
	fflush(stdin); /* clear input buffer*/
	
	do{
		gets(line); /* get a line - if user presses ENTER only -> length=0 */
		length = strlen(line);
		if(length>2){
			fputs(line,f); /* write the line to file */
			/* fputs() does not write  the new line automatically*/
			fputs("\n",f);
			
		}
	}while(length>0);
	fclose(f);
	return 1;
	}
	
int printFile(char* filename){
	char c; /* input character */
	if( exist(filename)== 0){
		printf(" the file %s does not exist. \n",filename);
		return 0;
	}
/* open file for reading */
	FILE *f= fopen(filename,"r");
/* when data can be read from the file to variable, process variable */
	while (!feof(f)) putchar(c);
	fclose(f);
	return 1;	
}
int main(int argCount, char* args[]){
	char filename[81];
	printf("program for writing then reading a file \n");
	printf("enter a filename: ");
	FILE *f=fopen(filename,"r");
	gets(filename);
	printf("write file: \n");
	if( writeFile(filename)==1){
		printf("data in file %s: \n",filename);
		if(printFile (filename)==0) printf("file error!\n");
		
	}
	else printf("writing file fail!\n",filename);
	getchar();
	return 0;
}
