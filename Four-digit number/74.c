#include <stdio.h>
int main(void)
{
    int N, a, b, c, d, K;
    printf("Input a four-digit number: ");
    scanf("%d", &N);
    a=N/1000;
    b=(N/100)%10;
    c=(N/10)%10;
    d=N%10;
    while(N<1000 || N>9999);
    K=d*1000+b*100+c*10+a;
    printf("%d\n", K);
    return 0;
}