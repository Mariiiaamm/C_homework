#include <stdio.h>
int main(void)
{
    int n, i, S; float a, b;
    printf("Input the number of elements and the values of a and b: ");
    scanf("%d %f %f", &n, &a, &b);
    S=0; int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
        if(x[i]>=a && x[i]<=b) S+=x[i];
    }
    printf("%d\n", S);
    return 0;
}