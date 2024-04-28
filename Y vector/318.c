#include <stdio.h>
int main(void)
{
    int p, k;
    printf("Input the value of k: ");
    scanf("%d", &k);
    for(p=10; p<=999; p++)
        if(p%k==0) printf("%d ", p);
    return 0;
}