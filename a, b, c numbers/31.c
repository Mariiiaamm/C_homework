#include<stdio.h>

int main(void)
{
    float a, b, c, max;
    printf("Input three different numbers :");
    scanf("%f %f %f", &a, &b, &c);
    while (a==b || a==c || b==c);
    if (a>b)
         if (a>c) max=a; else max=c;
         else if(b>c) max=b; else max=c;
         printf("Max=%.1f\n", max) ; 
    return 0;
}