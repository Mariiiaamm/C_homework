#include <stdio.h>
int main(void)
{
    int n, i; float S, y; 
    printf("Input the value of n: ");
    scanf("%d", &n);
    S=0; y=1; i=1;
    while (i<=n)
    {
        S+=1/(float)y;
        y*=i;
        i++;
    }
    printf("%f\n", S);
    return 0;
}