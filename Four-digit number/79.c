#include <stdio.h>
int main(void)
{
    int N, a, b, c, d, K;
    printf("Input a four-digit number: ");
    scanf("%d", &N);
    a=N/1000;
    b=(N/100)%10;
    c=(N/10)%10;
    d=N%10;
    while(N<1000 || N>9999);
    if(a<b)
         if(a<c)
             if(a<d) K=b*100+c*10+d; else K=a*100+b*10+c;
         else if(c<d) K=a*100+b*10+d; else K=a*100+b*10+c;
    else if(b<c)
             if(b<d) K=a*100+c*10+d; else K=a*100+b*10+c;
         else if(c<d) K=a*100+b*10+d; else K=a*100+b*10+c;
         printf("%d\n", K);
    return 0;
}