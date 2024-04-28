#include <stdio.h>
int main(void)
{
    int n, i, S, q, k; float P;
    printf("Input the number of elements and the value of k: ");
    scanf("%d %d", &n, &k);
    S=0; q=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(i%k==0) 
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