#include <stdio.h> 
int main(void)
{
    int n, i, max, p;
    printf("Input the number of elements of vector: ");
    scanf("%d", &n);
    int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &x[i]);
    max=x[0]; p=0;
    for(i=1; i<n; i++)
        if(x[i]>max) 
        {
            max=x[i];
            p=i;
        }
    for(i=0; i<n; i++)
        if((i%2==0) && (i<p)) printf("%d ", x[i]+max);
    return 0;
}