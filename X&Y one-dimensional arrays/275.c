#include <stdio.h>
int main(void)
{
    int n, i, S, P; float G;
    printf("Input the number of elements of the arrays X and Y: ");
    scanf("%d", &n);
    S=0; P=1; int a[n];
    printf("Input %d elements of X:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        S+=a[i];
    }
    printf("Input %d elements of Y:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]!=0) P*=a[i];
    }
    G=S/(float)P;
    printf("%f\n", G);
    return 0;
}