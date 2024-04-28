#include <stdio.h>
int main(void)
{
    int n, i, y;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    i=0;
    while(i<n)
    {
        y=0;
        if(x[i]>0) printf("%d %d ", x[i], y); else printf("%d ", x[i]);
        i++;
    }
    return 0;
}