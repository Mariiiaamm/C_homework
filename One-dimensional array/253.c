#include <stdio.h>
int main(void)
{
    int n, i, l, t;
    printf("Input the number of elements and the value of t: ");
    scanf("%d %d", &n, &t);
    l=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%t==0) l++;
    }
    printf("%d\n", l);
    return 0;
}