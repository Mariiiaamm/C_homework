#include <stdio.h>
#include <stdbool.h>
#include <math.h>
int main(void)
{
    unsigned int n, z; float m; bool p;
    printf("Input a natural number: ");
    scanf("%d", &n);
    m=sqrt(n); z=2;
    while ((n>1) && (z<=m) && (n%z!=0)) z++;
        if(z>m) p=true; else p=false;
    printf("%s\n", p? "true" : "false" );
    return 0;
}