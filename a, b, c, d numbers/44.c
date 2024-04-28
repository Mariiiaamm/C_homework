#include <stdio.h>
int main(void)
{
    float a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if(a+b==c+d || a+c==b+d || a+d==b+c) printf("true\n");
    else printf("false\n");
    return 0;
}