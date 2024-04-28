#include <stdio.h>
int main(void)
{
    int p;
    for(p=10; p<=99; p++)
        if(p%2!=0 && p%3!=0) printf("%d ", p);
    return 0;
}