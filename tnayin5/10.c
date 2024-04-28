#include <stdio.h>
int main(void) 
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int X[N];
    int *ptr = X;
    int i;
    printf("Enter %d elements of vector X in descending order (except one): ", N);
    for (i = 0; i < N; i++)
        scanf("%d", ptr + i);
    int *ptri = X;
    for (i = 0; i < N - 1; i++)
        if (*(ptri + i) < *(ptri + i + 1)) 
        {
            int temp = *(ptri + i);
            *(ptri + i) = *(ptri + i + 1);
            *(ptri + i + 1) = temp;
            break;
        }
    printf("Sorted array:\n");
    for (i = 0; i < N; i++)
        printf("%d ", *(ptri + i));
    printf("\n");
    return 0;
}
