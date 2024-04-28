#include <stdio.h>
int main(void)
{
    int n, i, P, S;
    printf("Input the number of elements: ");
    scanf("%d", &n);
    P=1; S=0; int a[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i]%2==0) 
        {
            P*=a[i];
            S+=a[i];
    }
    printf("%d %d\n", P, S);
    return 0;
}