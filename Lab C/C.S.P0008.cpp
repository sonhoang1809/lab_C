#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<conio.h>

void check(char a[]){
	int count[100];
	for(int i=0;i<strlen(a)-1;i++){
		count[i]=0;
		for(int j=0;j<strlen(a);j++){
			if(a[i]==a[j]){
				count[i]++;
			}
		}
		if(count[i]==0) printf("%s",a[i]);
	}
}
	

int main(){
	char a[100];
	printf("Enter a string: ");gets(a);
	puts(a);
//	printf("%s",a);
	check(a);
	return 0;
}
