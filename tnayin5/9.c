#include <stdio.h>
int main(void) 
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int X[N];
    int *ptr = X;
    int i;
    printf("Enter %d elements of vector X: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", ptr + i);
    }
    int check[N];
    int *ptri = check;
    for (i = 0; i < N; i++)
        *(ptri + i) = 0;
    for (i = 0; i < N; i++)
        if (*(ptr + i) >= 1 && *(ptr + i) <= N)
            *(ptri + (*(ptr + i) - 1)) = 1;
    int containsAll = 1;
    for (i = 0; i < N; i++)
        if (*(ptri + i) == 0) 
        {
            containsAll = 0;
            break;
        }
    printf("%d\n", containsAll);
    return 0;
}
