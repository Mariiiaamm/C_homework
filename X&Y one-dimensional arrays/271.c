#include <stdio.h>
int main(void)
{
    int n, i, q, k; float S, M, G;
    printf("Input the number of elements of the arrays X and Y: ");
    scanf("%d", &n);
    S=0; q=0; M=0; k=0; int a[n];
    printf("Input %d elements of X:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        S+=a[i];
        q++;
    }  
    if(q!=0) S=S/(float)q;
    printf("Input %d elements of Y:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        M+=a[i];
        k++;
    }
    if(k!=0) M=M/(float)k;
    G=S*M;
    printf("%f\n", G);
    return 0;
}