#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//function check number is prime or not use sqrt
int checkPrime(int primeNum)
{ 
	int i, dem = 0;
	if (primeNum == 1 || primeNum == 0) 
	{
		return 0;
	}
	for(i = 1; i <= sqrt(primeNum); i++)
	{
	  if(primeNum % i == 0)
	  {
	  	dem = dem + 1;
	  }
	}
 	if (dem == 1)
 	{
		return 1; 
	}
	else 
	{
		return 0;
	}
	
}


int main(int argc, char *argv[]) {
	float num;
	printf("==Check Prime Program==\n");
	printf("Input Integer number for checking : ");
	scanf("%f", &num);	

//check the integer number is prime number or not use function checkPrime		
//if input is not integer number, enter again
	if (num > 0 && num == (int)num  )
		{
			if( checkPrime(num) == 1) printf("YES! This number is a Prime \n =====Exit Success=====");
			else printf("NO! This number is not a Prime \n =====Exit Success====="); 
		}
	else
		{
			do 
			{	
				printf("Error, Input again");	
				printf("\nInput Integer number for checking : ");
				fflush(stdin);	
				scanf("%f", &num);		
				if (num > 0 && num == (int)num)
				{
					if(checkPrime(num) == 1) printf("YES! This number is a Prime \n =====Exit Success=====");
					else printf("NO! This number is not a Prime \n =====Exit Success====="); 
				}
			}
			while ( num <= 0 || num != (int)num );
		}
return 0;
}
