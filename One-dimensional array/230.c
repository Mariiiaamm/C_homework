#include <stdio.h>
int main(void)
{
    int n, i, m, p;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    m=0; p=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>0) m++;
        else if(a[i]<0) p++;
    }
    printf("%d %d\n", m, p);
    return 0;
}