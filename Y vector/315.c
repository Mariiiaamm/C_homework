#include <stdio.h>
int main(void)
{
    int p;
    for(p=1000; p<=9999; p++)
        if(p%15==0) printf("%d ", p);
    return 0;
}