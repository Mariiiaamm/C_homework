#include <stdio.h>

int main (void)
{
    float a, b, c;
    printf ("Input three different numbers:");
    scanf ("%f %f %f", &a, &b, &c);
    while (a==b || a==c || b==c);
         if ((a==2 && b==2 && c!=2) || (a==2 && c==2 && b!=2) || (b==2 && c==2 && a!=2)) printf("true\n");
         else printf ("false\n");
    return 0;
}