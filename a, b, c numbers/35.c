#include<stdio.h>

int main(void) 
{
    float a, b, c, y;
    printf("Input three different numbers:");
    scanf("%f %f %f", &a, &b, &c);
    while (a==b || a==c || b==c);
         if ((a<b+c) && (b<a+c) && (c<a+b)) printf("y=1\n");
         else printf ("y=2\n");
    return 0;
}