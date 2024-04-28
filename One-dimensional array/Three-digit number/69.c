#include<stdio.h>
int main(void)
{
    int N, x, y, z;
    printf("Input a three-digit number: ");
    scanf("%d", &N);
    x=N/100;
    y=(N/10)%10;
    z=N%10;
    while (N<100 || N>999);
    if(x<=y)
         if(x<=z)
             if(y<=z) printf("%d %d %d", x, y, z);
             else printf("%d %d %d", x, z, y);
         else printf("%d %d %d", z, x, y);
     else if(x<=z) printf("%d %d %d", y, x, z);
             else if(y<=z) printf("%d %d %d", y, z, x);
             else printf("%d %d %d", z, y, x);
    return 0;
}