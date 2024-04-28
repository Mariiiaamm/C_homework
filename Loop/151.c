#include <stdio.h>
#include <math.h>
int main(void)
{
    int m, n; float a, S, W;
    printf("Input the value of a: ");
    scanf("%f", &a);
    W=1;
    for(m=0; m<=5; m++)
    {
        S=0;
        {
            for(n=0; n<=6; n++)  S+=pow(a, (m+n));
        } W*=S;
    } printf("%f\n", W);
    return 0;
}