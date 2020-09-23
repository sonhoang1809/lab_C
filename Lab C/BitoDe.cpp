#include <stdio.h>
#include <math.h>
int ConvertBinaryToDecimal(long long n);
int main()
{
    long long n;
    printf("Nh?p v�o s? nh? ph�n c?n chuy?n: ");
    scanf("%lld", &n);
    printf("S? nh? ph�n: %lld = %d trong th?p ph�n.", n, ConvertBinaryToDecimal(n));
    return 0;
}
int ConvertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
