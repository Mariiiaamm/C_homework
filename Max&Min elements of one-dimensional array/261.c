#include <stdio.h>

int main() 
{
    int n, i;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input %d elements:\n", n);
    for (i=0; i<n; i++) 
        scanf("%d", &a[i]);
    int max=a[0];
    for (i=1; i<n; i++) 
        if (a[i]>max) max= a[i];
    printf("Max=%d\n", max);
    return 0;
}
