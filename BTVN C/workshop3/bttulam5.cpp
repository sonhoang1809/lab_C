#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double fibo ( int n);
int main(){
	int n;
	do{
       	printf("Input integer number: ");
       	scanf("%d", &n);
    }while (n < 1);
    printf("The value at the nth position in Fibonacci sequence is %.4f", fibo(n));

	
}
double fibo ( int n) {
    int t1 = 1, t2 = 1, f = 1, i ;
   for ( i = 3; i <= n; i++) {
      f = t1 + t2;
      t1 = t2;
      t2 = f;
   }
   return f;
} 

