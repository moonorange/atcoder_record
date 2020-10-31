#include <stdio.h>

int main(void)
{
    int n,idx;
    int q,imp,ans,inp,tes;
    int sum, a_count = 0;

    scanf("%d", &n);
    for (idx=0; idx < n; idx++)
    {
        scanf("%d %d %d %d %d", &q, &imp, &ans, &inp, &tes);
        sum = q + imp + ans + inp + tes;
        if (0 <= sum && sum < 20)
            a_count++;
    }
    printf("%d\n", a_count);
}
