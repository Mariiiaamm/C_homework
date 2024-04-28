#include <stdio.h>
int main(void)
{
    int n, i, k, P;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    P=1; k=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2!=0) 
        {
            k++;
            P*=a[i];
        }
    }
    printf("%d %d\n", k, P);
    return 0;
}