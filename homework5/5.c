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
    int Y = 0;
    int m = 0;
    for (int i = 0; i < N; i++)
        if (X[i] < 0) {
            m = i;
            break;
        }
    if (m != 0) 
    {
        Y = 1;
        for (int i = 0; i <= m; i++)
            Y *= X[i];
    }
    printf("Value of the expression Y: %d\n", Y);
    return 0;
}