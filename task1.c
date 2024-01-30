#include <stdio.h>

unsigned long long int quantity(int n)
{
    unsigned long long mult = 1, step = 2;

    for(int i = step; i <= n; i++)
        mult *= step;
    return mult;
}  

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%llu", quantity(n));
    
    return 0;
}