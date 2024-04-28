#include<stdio.h>
int main(void)
{
    int N, x, y, z, min;
    printf("Input a three-digit number: ");
    scanf("%d", &N);
    x=N/100;
    y=(N/10)%10;
    z=N%10;
    min=x;
    while (N<100 || N>999);
         if(y<min) min=y;
         if(z<min) min=z;
         printf("Min=%d\n", min);
    return 0;
}