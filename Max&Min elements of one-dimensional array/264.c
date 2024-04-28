#include <stdio.h>
int main(void)
{
    int n, i, P;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    int max=a[0];
    for(i=1; i<n; i++)
        if(a[i]>max) max=a[i];
    int min=a[0];
    for(i=1; i<n; i++)
        if(a[i]<min) min=a[i];
    P=max*min;
    printf("%d\n", P);
    return 0;
}