#include <stdio.h>
#include <ctype.h>
#define DOT '.'
#define SPACE ' '

int main()
{
    int i,j,n=-1;
    char x,m,a[50];
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
        if(a[i]!=SPACE && a[i]!=DOT)
        {
            j=i;
            while(a[i]!=SPACE && a[i]!=DOT) i++;
            int start=j,end=i-1;
            while(start<end) 
            {
                m=a[start];
                a[start]=a[end];
                a[end]=m;
                start++;
                end--;
            }
        }
    }
    printf("%s",a);
    return 0;
}