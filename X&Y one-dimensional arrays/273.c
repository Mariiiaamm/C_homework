#include <stdio.h>
int main(void)
{
    int n, i, k, p, l;
    printf("Input the number of elements of the arrays X and Y: ");
    scanf("%d", &n);
    k=0; p=0; int a[n];
    printf("Input %d elements of X:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>0) k++;
    }
    printf("Input %d elements of Y:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0) p++;
    }
    l=k+p;
    printf("%d\n", l);
    return 0;
}