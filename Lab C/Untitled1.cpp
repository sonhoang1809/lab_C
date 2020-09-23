#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//strcpy, strncpy, strnset, strstr, strchr 
int getUserChoice(){
	int choice;
	printf("\n1-myStrcat\n");
	printf("2-myStrcmp\n");
	printf("3-myStrcpy\n");
	printf("4-myStrncpy\n");
	printf("5-myStrnset\n");
	printf("6-myStrstr\n");
	printf("7-myStrchr\n");
	printf("8-Quit\n");
	do{
		printf("choose an operation: ");scanf("%d",&choice);
	}while(choice<1||choice>8);
	return choice;
}

void myStrcat(char s1[],char s2[]){
	printf("s1: ");
	fflush(stdin);
	gets(s1);
	printf("s2: ");
	fflush(stdin);
	gets(s2);
	
	if(s2[0]!=NULL){
		char c;
		int n=0;
		do{
			c=s2[n];
			n++;
		}while(c!=NULL);
		
		for(int i=n;i>=0;i--){
			s2[i+1]=s2[i];
		
		}
		s2[0]=' ';
		printf("Result is: ");
		printf("%s",s1);
		printf("%s",s2);
	}
}

int myStrcmp(char s1[],char s2[]){
	printf("s1: ");
	fflush(stdin);
	gets(s1);
	printf("s2: ");
	fflush(stdin);
	gets(s2);
	
	int i=0;
	do{
		if(s1[i]>s2[i]) return 1;
		else if(s1[i]<s2[i]) return -1;
		i++;
	}while(s1[i]!=NULL||s2[i]!=NULL);
	return 0;
}

void myStrcpy(char s1[],char s2[]){
	printf("s1: ");
	fflush(stdin);
	gets(s1);
	printf("s2: ");
	fflush(stdin);
	gets(s2);

	printf("Result is:");
	int i=0;
	do{
		s1[i]=s2[i];
		i++;
	}while(s2[i]!=NULL||s1[i]!=NULL);
	printf("%s",s1);
}
	


int main(){
	int choice;
	char s1[100];
	char s2[100];
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:{
				myStrcat(s1,s2);
				break;
			}
			case 2:{
				int a=myStrcmp(s1,s2);
				printf("result is: ");
				if(a<0) printf("s1<s2\n");
				else if(a>0) printf("s1>s2\n");
				else printf("s1=s2");
				break;
			}
			case 3:{
				myStrcpy(s1,s2);
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				
				break;
			}
			case 8:{
				
				break;
			}
		}
	}while(choice!=8);
	return 0;
}
