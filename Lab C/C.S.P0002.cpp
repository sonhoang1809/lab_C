#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//void kt(int n){
//	int k;
//	int m=0;
//	int count=0;
//	if(n>10){
//		k=n/10;
//		count++;
//		while(k>10){
//			k=k/10;
//			count++;
//		}
//		if(count==2){
//			m=n-k*pow(10,count);
//			switch(k){
//				
//				case 1:{
//					printf("one ");
//					printf("\n");
//					break;
//				} 
//				case 2:{
//					printf("two ");
//					printf("\n");
//					break;
//				} 
//				case 3:{
//					printf("three ");
//					printf("\n");
//					break;
//				} 
//				case 4:{
//					printf("four ");
//					printf("\n");
//					break;
//				} 
//				case 5:{
//					printf("five ");
//					printf("\n");
//					break;
//				} 
//				case 6:{
//					printf("six ");
//					printf("\n");
//					break;
//				} 
//				case 7:{
//					printf("seven ");
//					printf("\n");
//					break;
//				} 
//				case 8:{
//					printf("eight ");
//					printf("\n");
//					break;
//				} 
//				case 9:{
//					printf("nine ");
//					printf("\n");
//					break;
//				} 
//			}
//			printf("hundred \n");
//			chuc(m);
//		}
//		}
//	}
//}
void dv(int n) {
	switch(n%10){
			case 1:{
				printf("one ");
				printf("\n");
				break;
			} 
			case 2:{
				printf("two ");
				printf("\n");
				break;
			} 
			case 3:{
				printf("three ");
				printf("\n");
				break;
			} 
			case 4:{
				printf("four ");
				printf("\n");
				break;
			} 
			case 5:{
				printf("five ");
				printf("\n");
				break;
			} 
			case 6:{
				printf("six ");
				printf("\n");
				break;
			} 
			case 7:{
				printf("seven ");
				printf("\n");
				break;
			} 
			case 8:{
				printf("eight ");
				printf("\n");
				break;
			} 
			case 9:{
				printf("nine ");
				printf("\n");
				break;
			} 
	}
}
void chuc(int n){
	int m;
	if(10<=n<100){
		if(n/10==1){
			switch(n%10){
				case 1:{
					printf("eleven ");
					printf("\n");
					break;
				} 
				case 2:{
					printf("twelve ");
					printf("\n");
					break;
				} 
				case 3:{
					printf("thirteen ");
					printf("\n");
					break;
				} 
				case 4:{
					printf("fourteen ");
					printf("\n");
					break;
				} 
				case 5:{
					printf("fifteen ");
					printf("\n");
					break;
				} 
				case 6:{
					printf("sixteen ");
					printf("\n");
					break;
				} 
				case 7:{
					printf("seventeen ");
					printf("\n");
					break;
				} 
				case 8:{
					printf("eighteen ");
					printf("\n");
					break;
				} 
				case 9:{
					printf("nineteen ");
					printf("\n");
					break;
				} 
			}
		}
		if(n%10==0)
			switch(n/10) {
			
				case 2:{
					printf("twenty ");
					printf("\n");
					break;
				} 
				case 3:{
					printf("thirty ");
					printf("\n");
					break;
				} 
				case 4:{
					printf("forty ");
					printf("\n");
					break;
				} 
				case 5:{
					printf("fifty ");
					printf("\n");
					break;
				} 
				case 6:{
					printf("sixty ");
					printf("\n");
					break;
				} 
				case 7:{
					printf("seventy ");
					printf("\n");
					break;
				} 
				case 8:{
					printf("eighty ");
					printf("\n");
					break;
				} 
				case 9:{
					printf("ninety ");
					printf("\n");
					break;
				} 
			}
		else
			switch(n/10){
			
				case 2:{
					printf("twenty ");
					break;
				} 
				case 3:{
					printf("thirty ");
					break;
				} 
				case 4:{
					printf("forty ");
					break;
				} 
				case 5:{
					printf("fifty ");
					break;
				} 
				case 6:{
					printf("sixty ");
					break;
				} 
				case 7:{
					printf("seventy ");
					break;
				} 
				case 8:{
					printf("eighty ");
					break;
				} 
				case 9:{
					printf("ninety ");
					break;
				} 
			}
		}
		if(n>20 || n<10) dv(n);
		
}

void check(int n){
		
	int count=0;
		int m=0;
		m=n/10;
		
//	if(m/10>=10){
//		do{
//			count++;
//			m=m/10;
//		}while(m>=10);
//	}
//	if(count==2) printf("Hundred.");
	
	chuc(n);

}
int main()
		
{

	int n=0;
	do{
	
	printf("Input number: n = ");
	scanf("%d",&n);
	check(n);
		
		}while(n!=0);
	
}
