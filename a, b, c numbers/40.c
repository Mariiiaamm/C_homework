#include<stdio.h>
int main(void)
{
    float a, b, c;
    printf("Input three different numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    while(a==b || b==c || a==c);
    if(a>b)
         if(a>c)
             if(b>c) printf("%f %f %f", a, b, c);
             else printf("%f %f %f", a, c, b);
         else printf("%f %f %f", c, a, b);
     else if(a>c) printf("%f %f %f", b, a, c);
             else if(b>c) printf("%f %f %f", b, c, a);
             else printf("%f %f %f", c, b, a);
    return 0;
}