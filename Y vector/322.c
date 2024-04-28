#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    i=0;
    while(i<n-1)
    {
        if((fabs(x[i]))>(fabs(x[i+1]))) printf("%d ", x[i]); else printf("%d ", x[i+1]);
        i+=2;
    }
    return 0;
}