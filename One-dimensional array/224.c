#include <stdio.h>
int main(void)
{
    int i, n, q; float P, S;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    P=0; q=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]<0)
        {
            P+=a[i];
            q++;
        }
    }
    if(q!=0)
    {
        S=P/(float)q;
        printf("%f\n", S);
    }
    return 0;
}