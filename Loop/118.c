#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y, i, n, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=1; y=1; i=n;
    while(i<=2*n)
    {
        S+=x+y*y;
        x=5*(fabs(x+3));
        y=5*y+2;
        i++;
    }
    printf("%d\n", S);
    return 0;
}