#include <stdio.h>
int main(void)
{
    int n, i, S, q; float P;
    printf("Input the number of elements:");
    scanf("%d", &n);
    S=0; q=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2!=0) 
        {
            S+=a[i];
            q++;
        }
    }
    if(q!=0) 
    {
        P=S/(float)q;
        printf("%f\n", P);
    }
    return 0;
}