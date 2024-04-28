#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    printf("Input four different numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    while(a==b || b==c || a==c || a==d || b==d || c==d);
    if((a%2!=0 && b%2!=0) || (a%2!=0 && c%2!=0) || (a%2!=0 && d%2!=0) || (b%2!=0 && c%2!=0) || (b%2!=0 && d%2!=0) || (c%2!=0 && d%2!=0))
    printf("1\n"); else printf("2\n");
    return 0;
}