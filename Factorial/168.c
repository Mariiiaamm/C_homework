#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, n; float S, x, y, p;
    printf("Input the values of x and n: ");
    scanf("%f %d", &x, &n);
    S=0; y=1; p=x; i=1;
    while (i<=n)
    {
        y*=i;
        S+=1/(float)y+sin(i+x)/(float)p;
        p*=x;
        i++;
    }
    printf("%f\n", S);
    return 0;
}