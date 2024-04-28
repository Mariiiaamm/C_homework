#include <stdio.h>
#include <math.h>
int main(void)
{
    float x, Y; int k;
    printf("Input the value of x: ");
    scanf("%f", &x);
    for(k=1; k<=10; k++)
    { 
        if(x>2 && x<6) Y=log(x)/(float)log(4)+log(k); 
        else Y=4*pow((x+k), 8);
        printf("%f\n", Y);
    }
    return 0;
}