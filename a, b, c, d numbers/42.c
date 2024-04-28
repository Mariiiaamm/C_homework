#include <stdio.h>
int main(void)
{
    float a, b, c, d, min;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if(a<b)
         if(a<c)
             if(a<d) min=a; else min=d;
         else if(c<d) min=c; else min=d;
    else if(b<c)
             if(b<d) min=b; else min=d;
         else if(c<d) min=c; else min=d;
    printf("Min=%.1f\n", min);
    return 0;
}