#include <stdio.h>

unsigned int count_digits(unsigned int num)
{
    int digit = 1;

    while (num /= 10)
        digit++;
    return (digit);
}

int main(void)
{
    int a,b;

    scanf("%d\n%d", &a, &b);
    printf("%d\n", count_digits(a) * count_digits(b));
}
