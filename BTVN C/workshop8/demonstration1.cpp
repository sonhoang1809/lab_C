/* demonstration 1*/
#include <stdio.h>
#include <ctype.h>
#define TRUE 1
#define FALSE 0
/* check whether the fine existed or not */
int exist (char* filename)
{
	int existed = FALSE ;
	/* try opening it for reading */
	FILE *f= fopen(filename,"r");
	if (f!=NULL)
	{
		existed = TRUE;
		fclose(f);
	}
	return existed;
}
/* write a file from a character inputted until Ctrl+Z is pressed */
int writeFile(char* filename){
	char c; /*inputted character */
	int CTRL_Z = -1;
	if(exist (filename)== TRUE){
		printf("the file %s existed. Override it Y/N?: ",filename);
		if( toupper(getchar())=='N') return FALSE;
		
	}
/* open file for writting */
	FILE *f= fopen(filename,"w");
	fflush(stdin); /* clear input buffer*/
	
	do{
		c= getchar(); /* get a character*/
		if( c!= CTRL_Z) fputc(c,f); /* write it to file */
		
	}
	while(c!=CTRL_Z);
	fclose(f);
	return TRUE;	
}
int main(int argCount, char* args[]){
	if (argCount!=2) printf("syntax: copy_con filename.txt\n");
	else if(writeFile(args[1])==TRUE)
	printf("Writing the file %s : done\n",args[1]);
	else printf("Can not write the file %s\n",args[1]);
	return 0;
}
/* function for printing the content of a text file */
int printFile(char* filename){
	char c; /* input character */
	if( exist(filename)== FALSE){
		printf(" the file %s does not exist. \n",filename);
		return FALSE;
	}
/* open file for reading */
	FILE *f= fopen(filename,"r");
/* when data can be read from the file to variable, process variable */
	while ((c=fgetc(f))!=EOF) putchar(c);
	fclose(f);
	return TRUE;	
}
