#include <stdio.h>
#include <math.h>
int sumDigits (int n);
int main()
{

//Suggested algorithm (logical order of verbs)
	int S,n;
	
    do 
    {  printf("enter n= ");scanf("%d",&n);
       if (n>=0) 
          {   S = sumDigits(n);
              printf("S = %d \n",sumDigits(n));
          }
    }
    while (n>=0);
}
int sumDigits (int n)
{   int sum=0; /* initialize sum of digits */
     do
        {  int remainder = n%10 ; /* Get a digit at unit position */
      n = n/10;
      sum += remainder;
   }
while (n>0);
return sum;
}

