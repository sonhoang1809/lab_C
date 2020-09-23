#include <stdio.h>
int main()
{
int x = 2, y = 0;
int z = (++y) ? 2 : y == 1 && x;
printf("%d\n", z);
return 0;
}
