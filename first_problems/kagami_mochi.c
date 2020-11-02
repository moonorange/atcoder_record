#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int*)b - *(int*)a;
}

int main(void)
{
    int n;
    int i;
    int layer = 1;
    int buffer;

    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    qsort(array, n, 4, compare);
    buffer = array[0];
    for (i = 0; i < n; i++)
    {
        if (array[i] != buffer)
        {
            layer++;
            buffer = array[i];
        }
    }
    printf("%d\n", layer);
}
