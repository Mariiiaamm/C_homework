#include<stdio.h>
int main(void)
{
    int N, x, y, z; float g;
    printf("Input a three-digit number: ");
    scanf("%d", &N);
    x=N/100;
    y=(N/10)%10;
    z=N%10;
    while(N<100 || N>999);
    g=(z>y) ? (x+y+z)/(float)N : N;
    printf("%f\n", g);
    return 0;
}