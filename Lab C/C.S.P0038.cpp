#include<stdlib.h>
#include<stdio.h>
#include<string.h>

void Read(char c[],char s){
	
	FILE *f=fopen(c,"r");
	
	if(f==NULL){
		printf("ERROR!!\n");
		exit(0);
	}
	else{
		s=fgetc(f);
		do{
			printf("%c",s);
			s=fgetc(f);
		}while(s!=EOF);
	}
	//or
//	else{
//		while(!feof(f)){
//			fgets(s,255,f);
//			printf("%s",s);
//		}
//	}
	fclose(f);
}

int main(){
	char s;
	char sc; 
	do{
		char c[100];
		printf("File name: ");
		gets(c);
		FILE *f=fopen(c,"r");
		Read(c,s);
		printf("\nEnter ESC to exit!!\n");
		fflush(stdin);
		scanf("%c",&sc);
		
	}while(sc!=10);
}
