#include <stdio.h>
int main(void) 
{
    int N;
    printf("Input the number of elements: ");
    scanf("%d", &N);
    int X[N];
    printf("Input %d elements:\n", N);
    for (int *ptr = &X[0]; ptr < &X[N]; ptr++)
        scanf("%d", ptr);
    int count = 0;
    for (int *ptri = &X[0]; ptri < &X[N]; ptri++) {
        int is_unique = 1;
        for (int *ptrj = &X[0]; ptrj < &X[N] && is_unique; ptrj++)
            if (ptri != ptrj && *ptri == *ptrj) is_unique = 0;
        if (is_unique) count++;
    }
    printf("Number of unique elements: %d\n", count);
    return 0;
}