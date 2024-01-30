#include <stdio.h>

int is_happy_number(int a)
{
    int sum = 0, mult = 1;

    while (a > 0)
    {
        sum += a % 10;
        mult *= a % 10;
        a /= 10;
        
    }
    
    if(sum == mult)
      return 1;
    return 0;
    
}  

int main(void)
{
    int a;

    scanf("%d", &a);
    printf(is_happy_number(a) ? "YES" : "NO");
    
    return 0;
}