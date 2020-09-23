#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n;
	int count=0;
	int i=2;
	scanf("%d",&n);
	while(count<n){
		int d=0;
	for(int j=2;j<=sqrt(i);j++)
		if(i%j==0){
			d++;
			break;
		}	
		if(d==0){
			printf("%5d",i);
			count++;
		}
		i++;	
	}
	return 0;
}
