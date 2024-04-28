#include <stdio.h>
#include <math.h>
int main(void)
{
    int i, j; float x, y, S;
    printf("Input the values of x and y: ");
    scanf("%f %f", &x, &y);
    S=0;
    for(i=1; i<=7; i++)
    {
        for(j=1; j<=8; j++) S+=y*(pow(x, (i-j)));
    } printf("%f\n", S);
    return 0;
}