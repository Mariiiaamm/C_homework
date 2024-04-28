#include <stdio.h>
int main(void)
{
    int n, i, P; float c, d;
    printf("Input the number of elements and the values of c and d: ");
    scanf("%d %f %f", &n, &c, &d);
    P=1; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]>=c && a[i]<d) P*=a[i];
    }
    printf("%d", P);
    return 0;
}