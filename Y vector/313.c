#include <stdio.h>
int main(void)
{
    int n, p;
    printf("Input the value of n: ");
    scanf("%d", &n);
    for(p=1; p<=n; p++)
        if(n%p==0) printf("%d ", p);
    return 0;
}