#include <stdio.h>
int main(void)
{
    int n, S;
    S=0; n=10; 
    while(n<=99)
    {
        if(n%15==0) S+=n; 
        n++;
    }
    printf("%d\n", S);
    return 0;
}