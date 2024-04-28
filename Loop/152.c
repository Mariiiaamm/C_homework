#include <stdio.h>
int main(void)
{
    int k, m; float a, W;
    printf("Input the value of a: ");
    scanf("%f", &a);
    W=0;
    for(k=1; k<=9; k++)
    {
         for(m=1; m<=5; m++) W+=a*m*m+k*k;
    } printf("%f\n", W);
    return 0;
}