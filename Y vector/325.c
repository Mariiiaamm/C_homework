#include <stdio.h>
int main(void)
{
    int n, b, i, k;
    printf("Input the number of elements of vector and the value of b:\n");
    scanf("%d %d", &n, &b);
    int x[n]; k=0;
    printf("Input the elements: ");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    for(i=0; i<n; i++)
        if(x[i]<b) k++;
    if(k>=1) 
    {
        for(i=0; i<n; i++)
            if(x[i]>0) printf("%d ", x[i]);
    }
    else if(k==0) 
    {
        for(i=0; i<n; i++)
            if(x[i]<0) printf("%d ", x[i]);
    }
    return 0;
}