#include <stdio.h>
int main(void)
{ 
    int n, i, j;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements:\n", n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    i=0;
    for(j=1; j<n; j++)
        if(a[j]<a[i]) i=j;
    printf("Min=%d\n", a[i]);
    return 0;
}