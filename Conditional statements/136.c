#include <stdio.h>
#include <math.h>
int main(void)
{
    int i; float x, y, S;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    S=0; i=1;
    while(i<=16)
    {
        if(i%5==0) x=i; else x=0;
        if(i%7==0) y=i*i; else y=i;
        S+=x-y;
        i++;
    }
    printf("%f\n", S);
    return 0;
}