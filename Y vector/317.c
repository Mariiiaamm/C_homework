#include <stdio.h>
int main(void)
{
    int p, k, g, q;
    for(p=100; p<=999; p++)
    {
        k=p/100;
        g=(p/10)%10;
        q=p%10;
        if((k+g+q)==9) printf("%d ", p);
    }
        
    return 0;
}