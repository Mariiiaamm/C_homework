#include <stdio.h>
int main(void)
{
    int n, i;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=1; i<=n; i++)
        scanf("%d", &x[i]);
    for(i=n; i>=1; i--)
        printf("%d ", x[i]);
    return 0;
}