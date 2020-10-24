#include <stdio.h>

int     rec_sum_digits(int num)
{
    if (num < 10)
        return num;
    return (num % 10 + rec_sum_digits(num / 10));
}

int     main(void)
{
    int n;
    int a;
    int b;
    int i = 1;
    int sum = 0;
    int sum_digits;

    scanf("%d %d %d", &n, &a, &b);

    for (; i <= n; i++)
    {
        sum_digits = rec_sum_digits(i);
        if (a <= sum_digits && sum_digits <= b)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
}
