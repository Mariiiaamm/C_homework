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
    if(a>b)
        if(b>c)
             if(c>d) K=d*1000+b*100+c*10+a; 
             else K=c*1000+b*100+a*10+d;
         else if(a>c) 
                 if(b>d) K=d*1000+b*100+c*10+a;
                 else if(c>d) K=a*1000+d*100+c*10+b;
                 else if(a>d) K=b*1000+a*100+c*10+d;
                 else K=a*1000+d*100+c*10+b;
             else if(b>d) K=a*1000+b*100+d*10+c;
                 else if(a>d) K=a*1000+c*100+b*10+d;
                  else if(c>d) K=a*1000+c*100+b*10+d;
                  else K=a*1000+d*100+c*10+b;
    else if(b>c)
             if(a>c)
                 if(c>d) K=a*1000+d*100+c*10+b;
                 else if(a<d) K=a*1000+c*100+b*10+d;
                 else if(b<d) K=a*1000+c*100+b*10+d;
                 else K=a*1000+b*100+d*10+c;
             else if(a<d) K=a*1000+d*100+c*10+b;
             else if(c<d) K=b*1000+a*100+c*10+d;
             else if(b<d) K=b*1000+a*100+c*10+d;
             else K=d*1000+b*100+c*10+a;
    else if(c<d) K=d*1000+b*100+c*10+a;
         else if(b<d) K=c*1000+b*100+a*10+d;
         else if(a<d) K=c*1000+b*100+a*10+d;
         else K=a*1000+b*100+d*10+c;
         printf("%d\n", K);
    return 0;
}