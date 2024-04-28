#include <stdio.h>
int main(void)
{
    int N, a, b, c, d, y;
    printf("Input a four-digit number: ");
    scanf("%d", &N);
    a=N/1000;
    b=(N/100)%10;
    c=(N/10)%10;
    d=N%10;
    while(N<1000 || N>9999);
    if(d>c) y=d*b; else y=1; printf("%d\n", y);
    return 0;
}