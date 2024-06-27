#include <stdio.h>
#include <ctype.h>
#define DOT '.'
#define SPACE ' '

int main()
{
    int i,k,j,n=-1;
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
        if(a[i]!=SPACE && a[i]!=DOT)
        {
            j=i;
            int d=0;
            while(a[i]!=SPACE && a[i]!=DOT) i++;
            int start=j,end=i-1;
            while(start<end && d==0) 
            {
                if(a[start]!=a[end]) d=1;
                start++;
                end--;
            }
            if(d==0) 
            {
                for(int p=j;p<i;p++) printf("%c",a[p]);
                printf("\n");
            }
        }
    }
    return 0;
}