#include <stdio.h>
int main(void)
{
    int n, i, l, m;
    printf("Input the number of elements and the value of m: ");
    scanf("%d %d", &n, &m);
    l=1; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%m==0) l*=a[i];
    }
    printf("%d\n", l);
    return 0;
}