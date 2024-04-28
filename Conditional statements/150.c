#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=2; k<=10; k++)
    { 
        if(x>3 && x<5) Y=pow(x, (k+6)); 
        else if(x<=3) Y=x+k*k*k*k; else Y=pow(5, 6);
        printf("%f\n", Y);
    }
    return 0;
}