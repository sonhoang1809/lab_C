#include <stdio.h>
int main(){
	int n;
	int m;
	int d;
	int count=0;
	do{
	count=0;
	printf("n= "); scanf("%d",&n);
	
	m=n%10;
	d=n/10;
	printf("%d so du: %d , thuong: %d\n",m,d);
do{
	
	if(d>=10){
		count++;
		d=n/10;
	}
}while(d>=10);
}while(m!=0);
return 0;
}
