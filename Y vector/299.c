#include <stdio.h>
int main(void)
{
    int n, i, j; float c, d;
    printf("Input the number of elements and the values of c, d: ");
    scanf("%d %f %f", &n, &c, &d);
    int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
    {  
        j=a[i]*a[i];
        if(j>c && j<d) printf("%d ", a[i]);
    }
    return 0;
}