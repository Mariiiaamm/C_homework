#include <stdio.h>
int main(void)
{
    int N, a, b, c, d;
    printf("Input a four-digit number: ");
    scanf("%d", &N);
    a=N/1000;
    b=(N/100)%10;
    c=(N/10)%10;
    d=N%10;
    while(N<1000 || N>9999);
    if(a==1 || b==1 || c==1 || d==1) printf("1\n"); else printf("0\n");
    return 0;
}