#include <stdio.h>
#include <math.h>
int main(void)
{
    int i; float x, y, P;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    P=1; i=1;
    while(i<=14)
    {
        if(i%2==0) x=exp(3*i-4); else x=i*i-i;
        y=(i-1)*(i-1);
        P*=x*y*y;
        i++;
    }
    printf("%f\n", P);
    return 0;
}