#include <stdio.h>
#include <math.h>
int main(void)
{
    unsigned int n, z, S; float m;
    S=0;
    for(n=2; n<=29; n++)
    {
        m=sqrt(n); z=2;
        while ((z<=m) && (n%z!=0)) z++;
            if(z>m) S+=n;
    }
    printf("%d\n", S);
    return 0;
}