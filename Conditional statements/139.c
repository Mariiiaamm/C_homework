#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, k; float x, y, S;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    S=0; i=1; k=sqrt(i);
    while(i<=16)
    {
        if(k%1==0) x=tan(i); else x=1/(float)tan(i);
        y=exp(i-4);
        S+=x*y-i;
        i++;
    }
    printf("%f\n", S);
    return 0;
}