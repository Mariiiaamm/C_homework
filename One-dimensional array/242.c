#include <stdio.h>
int main(void)
{
    int n, i, k;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    k=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0) k++;
    }
    printf("%d\n", k);
    return 0;
}