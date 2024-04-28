#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i, q, S; float P;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    S=0; q=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%5==0)
        {
            S+=a[i]*a[i];
            q++;
        }
    }
    if(q>0)
    {
        P=sqrt(S/(float)q);
        printf("%f\n", P);
    }
    return 0;
}