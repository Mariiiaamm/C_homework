#include <stdio.h>
int main(void)
{
    int n, i; float S, x, y; 
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; y=1; i=1;
    while (i<=n)
    {
        S+=y;
        y*=(-x);
        i++;
    }
    printf("%f\n", S);
    return 0;
}