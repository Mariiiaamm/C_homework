#include <stdio.h>
int main(void)
{
    float a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if(a==1 || b==1 || c==1 || d==1) printf("true\n"); 
    else printf("false\n");
    return 0;
}