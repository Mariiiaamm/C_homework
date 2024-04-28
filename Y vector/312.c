#include <stdio.h>
int main(void)
{
    int p;
    for(p=100; p<=999; p++)
        if(p%5==2) printf("%d ", p);
}