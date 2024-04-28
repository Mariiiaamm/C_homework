#include <stdio.h>
#include <math.h>
int main(void)
{
    int x, y, i, n, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; x=1; y=2; i=1;
    while(i<=n)
    {
        S+=pow((x+y), 2);
        x=2*(fabs(x+3));
        y=y*y-4;
        i++;
    }
    printf("%d\n", S);
    return 0;
}