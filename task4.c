#include <stdio.h>

int is_sum(int n)
{
    int sum = 0;
    
    for(int i = 1; i <= n; i++)
        sum += i;
    return sum;
}  

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", is_sum(n));
    
    return 0;
}