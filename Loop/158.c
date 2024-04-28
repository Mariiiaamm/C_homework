#include <stdio.h>
int main(void)
{
    int i, j; float f, S; double Y;
    printf("Input the value of f: ");
    scanf("%f", &f);
    Y=1;
    for(i=1; i<=12; i++)
    { 
        S=0;
        {
            for(j=1; j<=7; j++) S+=(f*i+j*j)*(f*i+j*j);
        } Y*=(i+1)*S;
    } printf("%Lf\n", Y);
    return 0;
}