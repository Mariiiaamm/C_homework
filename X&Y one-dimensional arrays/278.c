#include <stdio.h>
int main(void)
{
    int n, i, k, q, p, l;
    printf("Input the number of elements of the arrays X, Y and the value of k: ");
    scanf("%d %d", &n, &k);
    q=0; p=0; int a[n];
    printf("Input %d elements of X:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%k==0) q++;
    }
    printf("Input %d elements of Y:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%k==0) p++;
    }
    l=q+p;
    printf("%d\n", l);
    return 0;
}