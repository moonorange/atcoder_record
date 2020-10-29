#include <stdio.h>

void    sort_list(int *num_list, int len)
{
    int i;
    int j;
    int tmp;

    for (i = 0; i < len; i++)
    {
        for (j = len - 1; j > i; j--)
        {
            if (num_list[j] > num_list[j - 1])
            {
                tmp = num_list[j];
                num_list[j] = num_list[j - 1];
                num_list[j - 1] = tmp;
            }
        }
    }
}

int     main(void)
{
    int n;

    scanf("%d", &n);
    int a[n];
    int i,j;
    int ali = 0;
    int bob = 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    sort_list(a, n);
    for (j = 0; j < n; j++)
    {
        if (j % 2 == 0)
            ali += a[j];
        else
            bob += a[j];
    }
    printf("%d\n", ali - bob);
}
