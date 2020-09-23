#include <stdio.h>
#include <math.h>
int isFibonacci (int n);
int main()
{
	//Suggested algorithm (logical order of verbs)

	int n;
     do {
           printf("enter n= ");scanf("%d",&n);
     }
     while (n<1);
     if ( isFibonacci(n)==1) printf("It is a Fibonacci element.");
     else printf("It is not a Fibonacci element.");
}
int isFibonacci (int n) 
{    int t1=1, t2=1, f=1;
   if (n==1) return 1; /* n belongs to the Fibonacci sequence*/
   while (f<n)           /* Find out the Fibo number f to n */
   {   f= t1 + t2;
       t1=t2;
       t2=f;
   }  
   return n==f;  /* if n==f ' n is Fibo element ' return 1 */
}

