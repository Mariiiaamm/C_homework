#include <stdio.h>
int main(void)
{
    int N, a, b, c, d; float y;
    printf("Input a four-digit number: ");
    scanf("%d", &N);
    a=N/1000;
    b=(N/100)%10;
    c=(N/10)%10;
    d=N%10;
    while(N<1000 || N>9999 || d+b==0);
    if(N<5000) y=N/(float)(d+b); else y=N/(float)(c+a);
    printf("%f\n", y);
    return 0;
}