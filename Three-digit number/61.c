#include<stdio.h>
#include<stdbool.h>
int main(void)
{
    int N, x, y, z; bool t;
        printf("Input a three-digit number: ");
        scanf("%d", &N);
        x=N/100;
        y=(N/10)%10;
        z=N%10;
        while (N<100 || N>999);
             if (z==x+y) t=true;
             else t=false;
             printf("%s\n", t ? "true" : "false");
    return 0;
}