#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char string[100];
	do{
	printf("nhap: ");
	fflush(stdin);
	getchar(string);
	
	}while(*string == '@', '#', '!', '[', ']', '{', '}', '(', ')');
	puts(string);
	}
	
