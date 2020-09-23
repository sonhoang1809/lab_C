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
//noi chuoi
void myStrcat(char s1[],char s2[]){
	char c;
	int i=0;
	do{
		
		c=s1[i];
		i++;
	}while(c!=NULL);

	if(s2[0]!=' '){
			int n=0;
			do{
				c=s2[n];
				n++;
			}while(c!=NULL);
			for(int j=n;j>=0;j--){
				s2[j+1]=s2[j];
			}
		s2[0]=' ';
	}
	int j=0;

	do{
		c=s2[j];
		s1[i-1]=c;
		i++;
		j++;
	}while(c!=NULL);
	
}

//so sanh chuoi
int myStrcmp(char s1[],char s2[]){
	
	int i=0;
	do{
		if(s1[i]>s2[i]) return 1;
		else if(s1[i]<s2[i]) return -1;
		i++;
	}while(s1[i]!=NULL||s2[i]!=NULL);
	return 0;
}

//copy chuoi s2 qua s1
void myStrcpy(char s1[],char s2[]){
	printf("Result is: s1:");
	int i=0;
	do{
		s1[i]=s2[i];
		i++;
	}while(s2[i]!=NULL||s1[i]!=NULL);
	
}

//copy n ky tu tu chuoi s2 qua s1
void myStrncpy(char s1[],char s2[],int n){
	int i=0;
	printf("result is: \ns1:");
	int m=0;
	char t;
	do{
		t=s1[m];
		m++;
	}while(t!=NULL);
	
	do{
		
		s1[i]=s2[i];
		if(i>=n) s1[i]=NULL;
		i++;
		
	}while(i<m);

}

//sua n ky tu cua s1 thanh ky tu c
void myStrnset(char s1[],char c,int n){
	int m=0;
	char t;
	do{
		t=s1[m];
		m++;
	}while(t!=NULL);
	if(n>m) n=m;
	int i=0;
	do{
		s1[i]=c;
		i++;
	}while(i<n);
}

char * myStrstr(char *s1,char *s2){
	char c;
	char *result;
	int n1=0;
	do{
		c=s1[n1];
		n1++;
	}while(c!=NULL);
	int n2=0;
	do{
		c=s2[n2];
		n2++;
	}while(c!=NULL);
	result=(char*)malloc(n2*sizeof(char));
	int pos=0;
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++){
			if(s1[j]==s2[i]){
				if(i==0){
					pos=j;
					break;
				}
				break;
			}else{
				
				break;
			}
		}	
	}
	int k=0;
	for(int i=pos;i<n1;i++){
		result[k]=s1[i];
		k++;
	}

	return result;
}

int main(){
	int choice;
	char s1[100];
	char s2[100];
	do{
		choice=getUserChoice();
		switch(choice){
			case 1:{
				printf("s1: ");
				fflush(stdin);
				gets(s1);
				printf("s2: ");
				fflush(stdin);
				gets(s2);
				myStrcat(s1,s2);
				printf("Result: %s",s1);
				break;
			}
			case 2:{
				printf("s1: ");
				fflush(stdin);
				gets(s1);
				printf("s2: ");
				fflush(stdin);
				gets(s2);
				int a=myStrcmp(s1,s2);
				printf("result is: ");
				if(a<0) printf("s1<s2\n");
				else if(a>0) printf("s1>s2\n");
				else printf("s1=s2");
				break;
			}
			case 3:{
				printf("s1: ");
				fflush(stdin);
				gets(s1);
				printf("s2: ");
				fflush(stdin);
				gets(s2);
				myStrcpy(s1,s2);
				printf("%s",s1);
				break;
			}
			case 4:{
				int n;
				printf("s1: ");
				fflush(stdin);
				gets(s1);
				printf("s2: ");
				fflush(stdin);
				gets(s2);
				do{
					printf("n= ");scanf("%d",&n);
				}while(n<0);
				myStrncpy(s1,s2,n);
				printf("%s",s1);
				break;
			}
			case 5:{
				int n;
				char c;
				printf("s1: ");
				fflush(stdin);
				gets(s1);
				printf("c: ");
				fflush(stdin);
				scanf("%c",&c);
				printf("n= ");scanf("%d",&n);
				myStrnset(s1,c,n);
				printf("result: %s",s1);
				break;
			}
			case 6:{
				printf("s1: ");
				fflush(stdin);
				gets(s1);
				printf("s2: ");
				fflush(stdin);
				gets(s2);
				printf("result: %s",myStrstr(s1,s2));
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
