#include <stdio.h>
int main(void)
{
    int n, i, P;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    P=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if((a[i]+i)%3==0) P+=a[i]*a[i];
    }
    printf("%d\n", P);
    return 0;
}