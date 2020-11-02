#include <stdio.h>

int main(void)
{
    int n,y;
    int i,j,k;

    scanf("%d %d", &n, &y);

    i = 0;
    while (i <= n)
    {
        j = 0;
        while (j <= n - i)
        {
            k = 0;
            while (k <= n - (i + j))
            {
                if (10000*i + 5000*j + 1000*k == y)
                {
                    if (i + j + k == n)
                    {
                        printf("%d %d %d\n", i, j, k);
                        return (0);
                    }
                }
                k++;
            }
            j++;
        }
        i++;
    }
    printf("-1 -1 -1\n");
}
