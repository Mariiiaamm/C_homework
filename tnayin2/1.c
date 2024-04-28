#include <stdio.h>
int main(void) 
{
    int n, i, q;
    printf("Input a whole number: ");
    scanf("%d", &n);
    q=0;
    for(i=8; i<=12; i++)
        if(n&(1<<i)) q++;
    printf("Number of ones from 8th to 12th orders: %d\n", q);
    return 0;
}
