#include<stdio.h>
#include<string.h>
//@, #, !, [, ], {, }, (, )//
int check(char a[]){
	int count=0;
	for (int i=0;i<strlen(a);i++){
		switch(a[i]){
			case '@':
				count++;
				break;
			case '#':
				count++;
				break;
			case '!':
				count++;
				break;
			case '[':
				count++;
				break;
			case ']':
				count++;
				break;
			case '{':
				count++;
				break;
			case '}':
				count++;
				break;
			case '(':
				count++;
				break;
			case ')':
				count++;
				break;
		}
	}
	return count;
}

void remove(char a[]){
	int count=0;
	int pos;
	for(int i=0;i<strlen(a);i++){
			if((a[i]==' '&&i==0)||(a[i]==' '&&a[i+1]==' ')){
			strcpy(&a[i],&a[i+1]);
			i--;
			}
	}
	puts(a);
}
int main(){
	char a[100];
	char cnt;
	int c=0;
	do{
	do{
	printf("enter string: ");
	fflush(stdin);
	gets(a);	
	c=check(a);
	}while(c>0);
	remove(a);
	printf("Continue to run program if press enter, Esc to exit: ");
	fflush(stdin);
	scanf("%c",&cnt);
	
	}while(cnt==13);
	return 0;
}
