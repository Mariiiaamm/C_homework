#include <stdio.h>
int main(void)
{
    int n, i, k; float a, b;
    printf("Input the number of elements and the values of a and b: ");
    scanf("%d %f %f", &n, &a, &b);
    k=0; int x[n];
    printf("Input the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
        if(x[i]>a && x[i]<b) k++;
    }
    printf("%d\n", k);
    return 0;
}