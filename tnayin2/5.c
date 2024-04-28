#include <stdio.h>
int main(void) 
{
    int n, i, j, q;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    int a[n];
    printf("Input the elements:\n");
    for(j=0; j<n; j++)
        scanf("%d", &a[j]);
    for(j=0; j<n; j++) 
    {
        q=0;
        for(i=8; i<=12; i++)
            if(a[j] & (1<<i)) q++;
        if(q>2) printf("%d ", a[j]);
    }
    return 0;
}
