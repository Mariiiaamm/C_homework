#include <stdio.h>
int main(void)
{
    float a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if(a<b)
         if(b<c)
             if(c<d) printf("%f %f %f %f", a, b, c, d); 
             else printf("%f %f %f %f", a, b, d, c);
         else if(a<c)
                 if(b<d) printf("%f %f %f %f", a, c, b, d);
                 else if(c<d) printf("%f %f %f %f", a, c, d, b);
                 else if(a<d) printf("%f %f %f %f", a, d, c, b);
                 else printf("%f %f %f %f", d, a, c, b);
        else if(b<d) printf("%f %f %f %f", c, a, b, d);
        else if(a<d) printf("%f %f %f %f", c, a, d, b);
        else if(c<d) printf("%f %f %f %f", c, d, a, b);
        else printf("%f %f %f %f", d, c, a, b);
    else if(b<c)
             if(a<c) 
                 if(c<d) printf("%f %f %f %f", b, a, c, d);
             else if(a<d) printf("%f %f %f %f", b, a, d, c);
             else if(b<d) printf("%f %f %f %f", b, d, a, c);
             else printf("%f %f %f %f", d, b, a, c);
    else if(a<d)
             if(a<c) printf("%f %f %f %f", b, a, c, d);
             else printf("%f %f %f %f", b, c, a, d);
    else if(b<d) printf("%f %f %f %f", c, b, d, a);
    else if(c<d) printf("%f %f %f %f", c, d, b, a);
    else printf("%f %f %f %f", d, c, b, a);
    return 0;
}