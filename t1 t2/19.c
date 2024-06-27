#include <stdio.h>
#include <ctype.h>
#define DOT '.'
#define SPACE ' '

int main()
{
    int i,k,n=-1;
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
    for(i=0;i<n;i++)
    {
        k=0;
        while(a[i]!=SPACE && a[i]!=DOT)
        {
            k++;
            i++;
        }
        if(k>0)
        {
            int count=0;
            while(k>0) 
            {
                int m=k%10;
                for(int p=n;p>i;p--) a[p]=a[p-1];
                a[i]='0'+m;
                n++;
                k/=10;
                count++;
            }
            i+=count;
        }
    }
    printf("%s",a);
    return 0;
}