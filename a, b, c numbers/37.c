#include<stdio.h>

int main(void)
{
    float a, b, c;
    printf("Input three different numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    while (a==b || a==c || b==c);
         if((a==(b+c)/2) || (b==(a+c)/2) || (c==(a+b)/2)) printf("true\n");
         else printf("false\n");
    return 0;
}