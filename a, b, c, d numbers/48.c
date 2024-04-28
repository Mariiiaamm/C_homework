#include <stdio.h>
int main(void)
{
    float a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if((b*b==a*c && c*c==b*d) || (c*c==a*b && b*b==c*d) || (c*c==a*d && d*d==c*b)
    || (d*d==a*b && b*b==d*c) || (d*d==a*c && c*c==d*b) || (b*b==a*d && d*d==b*c) 
    || (a*a==b*c && c*c==a*d) || (c*c==b*a && a*a==c*d) || (c*c==b*d && d*d==c*a) 
    || (d*d==c*a && d*d==c*a) || (d*d==b*a && a*a==d*c) || (d*d==b*c && c*c==d*a)
    || (a*a==b*d && d*d==a*c) || (a*a==c*b && b*b==a*d) || (b*b==c*d && d*d==b*a)
    || (d*d==c*b && b*b==d*a) || (d*d==c*a && a*a==d*b) || (b*b==c*a && a*a==b*d) 
    || (a*a==d*b && b*b==a*c) || (a*a==d*c && c*c==a*b) || (b*b==d*a && a*a==b*c) 
    || (b*b==d*c && c*c==b*a) || (c*c==d*a && a*a==c*b) || (c*c==d*b && b*b==c*a))
    printf("true\n"); else printf("false\n");
    //abcd acbd acdb adbc adcb abdc bacd bcad bcda bdac bdca badc cabd cbda cdba cdab cdab cbad  dabc dacb dbac dbca dcab dcba//
    return 0;
}
