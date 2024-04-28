#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i, max, min;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    max=x[0]; min=x[0];
    for(i=1; i<n; i++)
        if(x[i]>max) max=x[i];
        else if(x[i]<min) min=x[i];
    for(i=0; i<n; i++)
        if(fabs(x[i])<((max+min)/(float)2)) printf("%d ", x[i]);
    return 0;
}