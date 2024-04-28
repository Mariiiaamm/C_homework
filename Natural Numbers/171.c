#include <stdio.h>
int main(void)
{
    int n, i, S;
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; i=1;
    for(i=1; i<=n; i++)
    { 
        if(n%i==0) S+=i; 
    }
    printf("%d\n", S);
    return 0;
}