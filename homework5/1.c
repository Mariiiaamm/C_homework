#include <stdio.h>
int main(void)
{
    int N, i, max, min, index_max = 0, index_min = 0;
    printf("Input the number of elements: ");
    scanf("%d", &N);
    int X[N];
    printf("Input %d elements:\n", N);
    for (int *ptr = &X[0]; ptr < &X[N]; ptr++)
        scanf("%d", ptr);
    max = X[0];
    min = X[0];
    for (int *ptri = &X[1]; ptri < &X[N]; ptri++)
    {
        if (*ptri > max)
        {
            max = *ptri;
            index_max = ptri - &X[0];
        }
        if (*ptri <= min)
        {
            min = *ptri;
            index_min = ptri - &X[0];
        }
    }
    for (int *ptr = &X[0]; ptr < &X[N]; ptr++)
    {
        if (ptr - &X[0] != index_max && ptr - &X[0] != index_min)
            printf("%d\n", *ptr);
    }
    return 0;
}