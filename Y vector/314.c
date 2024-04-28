#include <stdio.h>
int main(void)
{
    int n, p;
    printf("Input the value of n: ");
    scanf("%d", &n);
    for(p=1; p<=n-2; p++)
        if(n%p==2) printf("%d ", p);
    return 0;
}