#include <stdio.h>
int main(void)
{
    float a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if(a==b+c+d || b==a+c+d || c==a+b+d || d==a+b+c) printf("true\n");
    else printf("false\n");
    return 0;
}