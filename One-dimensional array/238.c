#include <stdio.h>
int main(void)
{
    int n, i, S, k;
    printf("Input the number of elements and the value of k: ");
    scanf("%d %d", &n, &k);
    S=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i%k==0) S+=a[i];
    }
    printf("%d\n", S);
    return 0;
}