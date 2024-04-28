#include <stdio.h>
int main(void)
{
    int n, i, k;
    printf("Input the number of elements and the value of k: ");
    scanf("%d %d", &n, &k);
    int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(i=0; i<n; i++)
        if(a[i]%k!=2) printf("%d ", a[i]);
    return 0;
}