#include <stdio.h>
int main(void) 
{
    int k, n;
    printf("Input a natural number: ");
    scanf("%d", &n);
    if(n>1) 
    {
        k=1; 
        while(k<=n) 
        {
        if(3*k>n) 
            {printf("%d", k); break;}
          k++; 
        }
    }
    return 0;
}
