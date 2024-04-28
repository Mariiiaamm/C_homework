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
        if(i%3==0) x=log(i); else x=3;
        if(i%7==0) y=log(i)/(float)log(3); else y=3;
        S+=x-y;
        i++;
    }
    printf("%f\n", S);
    return 0;
}