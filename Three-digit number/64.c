#include<stdio.h>
int main(void)
{
    int N, x, y, z, max;
    printf("Input a three-digit number: ");
    scanf("%d", &N);
    x=N/100;
    y=(N/10)%10;
    z=N%10;
    while (N<100 || N>999);
         if(x>=y)
             if(x>=z) max=x; else max=z;
             else if(y>=z) max=y; else max=z;
             printf("Max=%d\n", max);
    return 0;
}