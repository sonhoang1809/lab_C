#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char s1[100];
	char s2[100];
	printf("s1: ");
	fflush(stdin);
	gets(s1);
	printf("s2: ");
	fflush(stdin);
	scanf("%s",&s2);

	strstr(s1,s2);
	printf("%s",s1);
	return 0;
}
