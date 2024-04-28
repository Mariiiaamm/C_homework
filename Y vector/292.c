#include <stdio.h>
int main(void)
{
    int n, i;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        if(a[i]!=0) printf("%d ", a[i]);
    return 0;
}