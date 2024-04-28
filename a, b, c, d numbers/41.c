#include <stdio.h>
int main(void)
{
    float a, b, c, d, max;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if(a>b)
         if(a>c)
             if(a>d) max=a; else max=d;
         else if(c>d) max=c; else max=d;
    else if(b>c)
             if(b>d) max=b; else max=d;
         else if(c>d) max=c; else max=d;
    printf("Max=%.1f\n", max);
    return 0;
}