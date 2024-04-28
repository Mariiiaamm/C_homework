#include <stdio.h>
#include <math.h>
int main(void)
{
    int i; float x, y, S;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    S=0; i=1;
    while(i<=10)
    {
        if(i%2==1) {x=exp(i-4); y=tan(x)*tan(x);} else {x=i*i-i; y=0;}
        S+=x*x-y*y;
        i++;
    }
    printf("%f\n", S);
    return 0;
}