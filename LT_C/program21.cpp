#include <stdio.h>
 
int main()
{
    int i, x = 2;
    for (i = 1; i <= 10; ++i)
    {
        printf("%d.Nguyen Van Quan\n", i);
    }
    printf("%d", ++x + ++x + x++);
    return 0;
}
