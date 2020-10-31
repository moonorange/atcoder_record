#include <stdio.h>

#define ABS(num) (num >= 0 ? num : -num)

int main(void)
{
    int x,y,n;

    scanf("%d %d\n%d", &x, &y, &n);

    printf("%d\n", x + y - ABS((n - y)));
}
