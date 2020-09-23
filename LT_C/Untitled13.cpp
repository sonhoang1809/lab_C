#include <stdio.h>
int main()
{
int x = 2, y = 1;
int z = y && (y |= 10);
int t= (y|=10);
printf("%d\n", t);
return 0;
}
