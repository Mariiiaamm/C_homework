#include <stdio.h>
int main(void)
{
    int N, x, y, z; char a, b;
    printf("Input a three-digit number: ");
    scanf("%d", &N);
    x=N/100;
    y=(N/10)%10;
    z=N%10;
    while(N<100 || N>999);
         if(y+x<5) printf("%c\n", 'a'); else printf("%c\n", 'b');
    return 0;
}