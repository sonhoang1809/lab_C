#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fio "save.txt"

int getUserChoice(){
	int choice;
	printf("\n--MENU--\n");
	printf("1- Play the slot machine.\n");
	printf("2- Save game\n");
	printf("3- Cash out\n");
	do{
	printf("choose an operation: "); scanf("%d",&choice);
	}while(choice<1||choice>3);
	return choice;
}

void play(int a[],float *money){
	if((*money)==0){
		printf("Sorry you dont have enough money to play!!");
	}else{
		float m=0.25;
		float bm=10;
		(*money)= (*money)-m;
		srand((unsigned) time(0));
		printf("The slot machine show: ");
		for( int i = 0 ; i < 3 ; i++ ) {
			a[i]=(rand()%9);
		    printf("%d", a[i]);		      
		}
		printf("\n");
			if(a[0]==a[1] || a[1]==a[2] || a[0]==a[2]){
				if(a[0]==a[1]&&a[0]==a[2]&&a[1]==a[2]){
					if(a[0]==0&&a[1]==0&&a[2]==0){
						printf("you win the big price: %.2f\n",bm);
						(*money)=(*money)+bm;
						
					}
					else{
						printf("you win the big price: %.2f\n",bm);
						(*money)=(*money)+bm;
						
					}
				}
				else if( a[0]==0&&a[1]==0 || a[0]==0&&a[2]==0 || a[1]==0&&a[2]==0){
					printf("you win 50 cent\n");
					(*money)=(*money)+0.5;
				}
				else{
					printf("you win 50 cent\n");
					(*money)=(*money)+0.5;
				}
			}
			else{
				printf("sorry you don't win anything!!\n");
			}
 	}
 	printf("you have: %.2f",*money);
}

void save(float money){
	
	FILE *f=fopen(fio,"w");
	if(f!=NULL) {
		fprintf(f,"%f",money);
		printf("You money have saved!!\n");
	}
	fclose(f);
}

void load(float *money){
	int choose;
	printf("1 - New game. \n");
	printf("2 - Load game. \n");
	do{
		printf("Select an operation: ");scanf("%d",&choose);
	}while(choose<1||choose>2);
	if(choose == 1){
		(*money)=10;
	}
	else if(choose==2){
		FILE *f=fopen(fio,"r");
		if(f!=NULL) 
		{
			fscanf(f,"%f",money);
		}
		fclose(f);
	}
}

void cashOut(float money){
	printf("Thank for playing! you end with $ %.2f \n",money);
}

int main(){
	int choice;
	float money;
	int a[4];
	load(&money);
	do{

		choice = getUserChoice();
		switch(choice){
			case 1:{
				
				play(a,&money);
				break;
			}
			case 2:{
				save(money);
				break;
			}
			case 3:{
				cashOut(money);
				break;
			}
		
		}
	}while(choice!=3);
	
}
