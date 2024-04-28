#include <stdio.h>
int main(void)
{
    int n, i, S;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    S=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i%2==0) S+=a[i];
    }
    printf("%d\n", S);
    return 0;
}