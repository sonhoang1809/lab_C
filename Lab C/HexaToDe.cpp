#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char s[100];
    //do{
    	printf("Enter your number in Hex: ");
    	scanf("%x", &n);
    	s = (str)n;
    	printf("%s", s);
	//}while()
    printf("Number in Oct: %o\n", n);
    printf("Number in Dec: %d\n", n);
    return 0;
}
