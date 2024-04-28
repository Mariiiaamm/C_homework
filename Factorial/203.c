#include <stdio.h>
int main(void)
{
    int n, i; float S, y; 
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; y=1; i=1;
    while (i<=n)
    {
        y*=i;
        S+=y;
        i++;
    }
    printf("%f\n", S);
    return 0;
}