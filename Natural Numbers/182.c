#include <stdio.h>
int main(void) 
{
    int i, n;
    printf("Input a natural number: ");
    scanf("%d", &n);
    i=1;
    while(i<=n) 
        i*=2;
    printf("%d", i);
    return 0;
}
