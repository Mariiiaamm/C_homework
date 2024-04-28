#include <stdio.h>
int main(void)
{
    int n, i, j, S;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements:\n", n);
    for(i=1; i<=n; i++)
        scanf("%d", &a[i]);
    i=1;
    for(j=2; j<=n; j++)
        if(a[j]>a[i]) i=j;
    S=a[i]+i;
    printf("%d\n", S);
    return 0;
}