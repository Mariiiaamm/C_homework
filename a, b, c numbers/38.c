#include<stdio.h>

int main(void)
{
    float a, b, c;
    printf("Input three different numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    while (a==b || a==c || b==c);
         if((a*a==b*c) || (b*b==a*c) || (c*c==a*b)) printf("true\n");
         else printf("false\n");
    return 0;
}