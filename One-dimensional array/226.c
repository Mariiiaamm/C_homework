#include <stdio.h>
int main(void)
{
    int n, i, P;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    P=1; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i%2==0) P*=a[i];
    }
    printf("%d\n", P);
    return 0;
}