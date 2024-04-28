#include<stdio.h>
int main(void)
{
    int N, x, y, z; float k, g;
    printf("Input a three-digit number and the value of k: ");
    scanf("%d %f", &N, &k);
    x=N/100;
    y=(N/10)%10;
    z=N%10;
    while (N<100 || N>999);
         if(N>k) g=N/(float)(x+y+z); else g=z/(float)N;
         printf("%f\n", g);
    return 0;
}