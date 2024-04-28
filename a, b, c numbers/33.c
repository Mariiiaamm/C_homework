#include <stdio.h>

int main (void)
{
    float a, b, c;
    printf ("Input three different numbers:");
    scanf ("%f %f %f", &a, &b, &c);
    while (a==b || a==c || b==c);
         if (a==1 || b==1 || c==1) printf ("true\n");
         else printf ("false\n");
    return 0;
}
