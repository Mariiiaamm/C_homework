#include <stdio.h>
#include <math.h>
int main(void)
{
    int i; float x, y, P;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    P=1; i=1;
    while(i<=10)
    {
        if(i%5==0) x=i; else x=i*i;
        if(i%3==0) y=i*i*i; else y=6;
        P*=x*y;
        i++;
    }
    printf("%f\n", P);
    return 0;
}