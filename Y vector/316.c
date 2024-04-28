#include <stdio.h>
int main(void)
{
    int p, k, g;
    for(p=10; p<=99; p++)
    {
        k=p/10;
        g=p%10;
        if((k+g)>5) printf("%d ", p);
    }
    return 0;
}