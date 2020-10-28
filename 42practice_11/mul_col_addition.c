#include <stdio.h>

unsigned int count_digits(unsigned int num)
{
    unsigned int digits = 1;

    while (num /= 10)
        digits++;
    return (digits);
}

int main(void)
{
    int a,b;

    scanf("%d\n%d", &a, &b);
    printf("%d\n", count_digits(a) * count_digits(b));
}
