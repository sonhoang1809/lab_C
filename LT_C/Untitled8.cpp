#include <stdio.h>
int x = 0;
int f();
int g();
int main()
{
int i = (f() + g()) || g();
int j = g() || (f() + g());
}
int f()
{
if (x == 0)
return x + 1;
else
return x - 1;
}
int g()
{
return x++;
}
