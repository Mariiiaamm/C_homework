#include <stdio.h>
int main(void) 
{
    int p, n; float k;
    printf("Input a natural number: ");
    scanf("%d", &n);
    p=1;
    while(p<=n) 
    {
        if(n==p) 
        {
            k=n/(float)2; 
            printf("%f", k); 
        }
            p*=2;
    }
    return 0;
}
