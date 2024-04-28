#include <stdio.h>
int main(void)
{
    int n, i, max;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n]; max=x[1];
    printf("Input the elements:\n");
    for(i=1; i<=n; i++)
        scanf("%d", &x[i]);
    for(i=2; i<=n; i++)
        if(x[i]>max) max=x[i];
    for(i=1; i<=n; i++)
        if(i%3!=0) printf("%d ", x[i]+max); else printf("0 ");
    return 0;
}