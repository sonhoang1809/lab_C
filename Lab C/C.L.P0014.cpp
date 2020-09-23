#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getUserChoice(){
	int choice;
	printf("\nWelcome to Casino. Here are your choice\n");
	printf("1) Buy chips\n");
	printf("2) Sell chips\n");
	printf("3) Play Craps\n");
	printf("4) Play Arup's Game of Dice\n");
	printf("5) Status Report\n");
	printf("6) Quit\n");
	
	do{
	printf("choose an operation: "); scanf("%d",&choice);
	}while(choice<1||choice>6);
	return choice;
}

int buyChips(float *money,float *chip){
	if(*money<11){
		printf("sorry you don't have enough money to buy\n");
	}
	else{
	
		float m;
		float r;
		do{	
			printf("How much cash do you want to spend for chips?\n");
			scanf("%f",&m);
			if(m<11){
				printf("you must waste $11 for buy a chip!!\n");
			}
		}while(m<11);
		if(m>*money){
			printf("Sorry, you don't have enough money. No chips bought!!\n");
		}
		
		else{
			(*money)=(*money)-m;
			(*chip)=(*chip)+m/11;
			
			int d=*chip;
			r=(*chip)-d;
			if(r!=0){
				(*money)=(*money)+r*11;
				(*chip)=d;
			}
		}
		
		printf("money : %.0f\n",*money);
		printf("chips: %.0f\n",*chip);
	}
}

int sellChips(float *money, float *chip){
	if(*chip==0){
		printf("you dont have any chip to sell!!\n");
	}
	else{
		float c;
		printf("how many chips you want to sell?\n");
		scanf("%f",&c);
		if(c>*chip){
			printf("you dont have enough %.0f chip",c);	
		}
		else{
			(*money)=(*money)+c*10;
			(*chip)=(*chip)-c;
			printf("money : %.0f\n",*money);
			printf("chips: %.0f\n",*chip);
		}
	}
}

int random(int minN, int maxN){
    return minN + rand() % (maxN + 1 - minN);
}

void playCraps(float *chip){
	if(*chip==0){
		printf("sorry you have to buy more chips to play\n");
	}
	else{
	
		float p;
		printf("how many chips you want to bet?\n");
		scanf("%f",&p);
		if(p<1){
			printf("Sorry, that is not allow. No game played!!\n");
		}
		else if(p>*chip){
			printf("you dont have enough chip to play!!\n");
		}
		else{
			(*chip)=(*chip)-p;
			char r;
			fflush(stdin);
			do{
				printf("press 'r' and hit enter to roll\n ");
				scanf("%c",&r);
			}while(r!='r');
				int a,b;
				srand((unsigned) time(0));
				a = random(1,6);
				b = random(1,6);
				int k=a+b;
				printf("you roll a %d\n",k);
				if(k==7||k==11){
					printf("you win!!\n");
					(*chip)=(*chip)+2*p;
				}
				else if(k==2||k==3||k==12){
					printf("Sorry you lost!!\n");
				}
				else{
					int c;
					do{
						do{
							fflush(stdin);
							printf("press 'r' and hit enter to roll\n ");						
							scanf("%c",&r);
						}while(r!='r');
						a = random(1,6);
						b = random(1,6);
						c = a+b;
						printf("you roll a %d\n",c);
						if(c==k){
							printf("you win!!\n");
							(*chip)=(*chip)+2*p;
						}
						else if(c==7){
							printf("you lose!!\n");
						}
					}while(c!=k && c!=7);		
				}
	}	}
}

void playArup(float *chip){
	if(*chip==0){
		printf("sorry you have to buy more chips to play\n");
	}
	else{
		
		float p;
		printf("how many chips you want to bet?\n");
		scanf("%f",&p);
		if(p<1){
			printf("Sorry, that is not allow. No game played!!\n");
		}
		else if(p>*chip){
			printf("you dont have enough chip to play!!\n");
		}
		else{
			(*chip)=(*chip)-p;
			char r;
			fflush(stdin);
			do{
				printf("press 'r' and hit enter to roll\n ");
				scanf("%c",&r);
			}while(r!='r');
				int a,b;
				srand((unsigned) time(0));
				a = random(1,6);
				b = random(1,6);
				int k=a+b;
				printf("you roll a %d\n",k);
				if(k==12||k==11){
					printf("you win!!\n");
					(*chip)=(*chip)+2*p;
				}
				else if(k==2){
					printf("Sorry you lost!!\n");
				}
				else{
					int c;
						do{
							fflush(stdin);
							printf("press 'r' and hit enter to roll\n ");						
							scanf("%c",&r);
						}while(r!='r');
						a = random(1,6);
						b = random(1,6);
						c = a+b;
						printf("you roll a %d\n",c);
						if(c>k){
							printf("you win!!\n");
							(*chip)=(*chip)+2*p;
						}
						else if(c<k||c==k){
							printf("you lose!!\n");
						}	
				}
		}
	}
}

void report(float money, float chip){
	printf("Your currently have $%.0f left and %.0f chips\n",money,chip);
}


int main(){
	int choice;
	float money=1000;
	float chip=0;
	do{
		choice= getUserChoice();
		switch(choice){
			case 1:{
				buyChips(&money,&chip);
				break;
			}
			case 2:{
				sellChips(&money,&chip);
				break;
			}
			case 3:{
				playCraps(&chip);
				break;
			}
			case 4:{
				playArup(&chip);
				break;
			}
			case 5:{
				report(money,chip);
				break;
			}
			case 6:{
				
				break;
			}
		}
	}while(choice!=6);
	return 0;
}
