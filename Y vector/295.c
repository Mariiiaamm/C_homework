#include <stdio.h>
int main(void)
{
    int n, i, p;
    printf("Input the number of elements and the value of p: ");
    scanf("%d %d", &n, &p);
    int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        if(a[i]%p==0) printf("%d ", a[i]);
    return 0;
}