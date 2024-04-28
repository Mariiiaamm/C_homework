#include <stdio.h>
int main(void)
{
    int n, i; float a, b;
    printf("Input the number of elements and the values of a, b: ");
    scanf("%d %f %f", &n, &a, &b);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    for(i=0; i<n; i++)
        if(x[i]>=a && x[i]<=b) printf("%d ", x[i]);
    return 0;
}