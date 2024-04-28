#include <stdio.h>
int main(void)
{
    int n, i, j;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements:\n", n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    i=1;
    for(j=2; j<=n; j++)
        if(a[j]>=a[i]) i=j;
    printf("%d\n", i);
    return 0;
}