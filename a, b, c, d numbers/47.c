#include <stdio.h>
int main(void)
{
    float a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if((b==(a+c)/2 && c==(b+d)/2) || (c==(a+b)/2 && b==(c+d)/2) || (c==(a+d)/2 && d==(c+b)/2)
    || (d==(a+b)/2 && b==(c+d)/2) || (d==(a+c)/2 && c==(b+d)/2) || (b==(a+d)/2 && d==(c+b)/2) 
    || (a==(b+c)/2 && c==(a+d)/2) || (c==(a+b)/2 && a==(c+d)/2) || (c==(b+d)/2 && d==(a+c)/2) 
    || (d==(a+b)/2 && a==(c+d)/2) || (d==(c+b)/2 && c==(a+d)/2) || (a==(b+d)/2 && d==(a+c)/2)
    || (a==(b+c)/2 && b==(a+d)/2) || (b==(c+d)/2 && d==(a+b)/2) || (d==(c+b)/2 && b==(a+d)/2)
    || (d==(a+c)/2 && a==(b+d)/2) || (d==(a+c)/2 && a==(b+d)/2) || (b==(a+c)/2 && a==(b+d)/2)
    || (a==(b+d)/2 && b==(a+c)/2) || (a==(c+d)/2 && c==(a+b)/2) || (b==(a+d)/2 && a==(b+c)/2)
    || (b==(c+d)/2 && c==(a+b)/2) || (c==(a+d)/2 && a==(b+c)/2) || (c==(b+d)/2 && b==(a+c)/2))
    printf("true\n"); else printf("false\n");
    //abcd acbd acdb adbc adcb abdc bacd bcad bcda bdac bdca badc cabd cbda cdba cdab cdab cbad  dabc dacb dbac dbca dcab dcba//
    return 0;
}
