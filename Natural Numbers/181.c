#include <stdio.h>
#include <stdbool.h>
int main(void) 
{
    int i, n;
    bool t=false;
    printf("Input a natural number: ");
    scanf("%d", &n);
    i=1;
    while(i<=n) 
    {
        if(n==i) 
        {
            t=true;
            break;
        }
        i*=3;
    }
    
    printf(t? "true\n" : "false\n");
    return 0;
}
