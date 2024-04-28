#include <stdio.h>
int main(void)
{
    int n, i, l, k;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    l=1; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if((a[i]*i)%3==2) l*=a[i];
    }
    printf("%d\n", l);
    return 0;
}