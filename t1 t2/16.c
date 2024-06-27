#include <stdio.h>
#include <ctype.h>
#define DOT '.'
#define SPACE ' '

int main()
{
    int i,j,k=0,n=-1;
    char x,a[50];
    while((x=getchar())!=DOT)
    {
        n++;
        a[n]=x;
    }
    n++;
    a[n]=DOT;
    n++;
    a[n]='\0';
    i=0;
    while(i<=n)
    {
        if(a[i]==SPACE) k++;
        i++;
    }
    if(k>=2)
    {
        i=0;
        while(i<=n && k!=1)
        {            if(a[i]==SPACE){
                for(j=i;j<n;j++) a[j]=a[j+1];
                n--;
                k--;
            }
            if(k!=1){
                if(a[n-i]==SPACE)
                {
                    for(j=n-i;j<n;j++) a[j]=a[j+1];
                    n--;
                    k--;
                }
            }
            i++;
        }
        a[n+1]='\0';
        printf("%s",a);
    }
    else printf("%s",a);
    return 0;
}