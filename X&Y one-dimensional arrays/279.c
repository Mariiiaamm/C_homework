#include <stdio.h>
int main(void)
{
    int n, i, S, P, G;
    printf("Input the number of elements of the arrays X and Y: ");
    scanf("%d", &n);
    S=0; P=0; int a[n];
    printf("Input %d elements of X:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i%2==0) S+=a[i];
    }
    printf("Input %d elements of Y:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i%2!=0) P+=a[i];
    }
    G=S+P;
    printf("%d\n", G);
    return 0;
}