#include <stdio.h>
int main(void)
{
    int k, p;
    printf("Input the value of k: ");
    scanf("%d", &k);
    for(p=10; p<=99; p++)
        if(p%k==0) printf("%d ", p);
    return 0;
}