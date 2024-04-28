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
    i=1;
    while(i<=n)
    {
        printf("%d %d ", x[i+1], x[i]);
        i+=2;
    }
    return 0;
}