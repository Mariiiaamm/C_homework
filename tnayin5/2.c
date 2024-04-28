#include <stdio.h>
int main(void) 
{
    int N;
    printf("Input the number of elements: ");
    scanf("%d", &N);
    int A[N];
    int B[N];
    printf("Input %d elements:\n", N);
    for (int *ptr = &A[0]; ptr < &A[N]; ptr++)
        scanf("%d", ptr);
    int *ptrB = &B[0];
    *ptrB = A[0];
    ptrB++;
    for (int *ptri = &A[1]; ptri < &A[N]; ptri++) 
    {
        *ptrB = *(ptrB - 1) + *ptri;
        ptrB++;
    }
    printf("Vector B:\n");
    for (int *ptr = &B[0]; ptr < &B[N]; ptr++)
        printf("%d\n", *ptr);
    return 0;
}