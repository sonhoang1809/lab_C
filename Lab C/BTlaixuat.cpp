#include<stdio.h>

float tong(int money,float rate,int month){
	if(month==1) return (money*(rate+1));
	else 	
		return tong(money,rate,month-1)*(rate+1);
}

int main(){
	int money;
	float rate;
	int month;
	do{
	printf("money: "); scanf("%d",&money);
	printf("rate: ");scanf("%f",&rate);
	printf("month: ");scanf("%d",&month);
	float d;
	d=tong(money,rate,month);
	printf("tong tien: %f",d);
	printf("\n");
	}while(true);
}
