#include <stdio.h>
int main(void)
{
    int n, i;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    for(i=0; i<n; i++)
        if(x[i]<0) printf("%d ", x[i]);
    for(i=0; i<n; i++)
        if(x[i]==0) printf("%d ", x[i]);
    for(i=0; i<n; i++)
        if(x[i]>0) printf("%d ", x[i]);
    return 0;
}