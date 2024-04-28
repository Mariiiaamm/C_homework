#include<stdio.h>

int main(void)
{
    float a, b, c, min;
    printf("Input three different numbers :");
    scanf("%f %f %f", &a, &b, &c);
    min=a;
    while (a==b || a==c || b==c);
         if(b<min) min=b;
         if(c<min) min=c;
         printf("Min=%.1f\n", min);
    return 0;
}