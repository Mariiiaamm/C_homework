#include <stdio.h>
#include <math.h>
int main(void)
{
    int i; float x, y, P;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    P=1; i=2;
    while(i<=18)
    {
        if(i%2==1) x=pow(2, (i-4)); else x=i*i+2;
        y=i*i+2;
        P*=x*y;
        i++;
    }
    printf("%f\n", P);
    return 0;
}