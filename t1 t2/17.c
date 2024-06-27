#include <stdio.h>
#include <ctype.h>
#define DOT '.'
#define SPACE ' '

int main()
{
    int i,j,k,e=0,max=0,n=-1;
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
    for(i=0;i<=n;i++)
    {
        k=0;
        while(a[i]!=SPACE &&a[i]!=DOT)
        {
            if(isalpha(a[i]))
            {
                int f=0;
                switch(a[i])
                {
                    case'A':case'a':
                    case'E':case'e':
                    case'I':case'i':
                    case'O':case'o':
                    case'U':case'u':
                    f=1;
                    break;
                }
                if(f==1) k++;
            }
            i++;
        }
        if(k>max) max=k;
    }
    for(i=0;i<=n;i++)
    {
        if(a[i]!=SPACE){
            j=i;
            k=0;
            while(a[i]!=SPACE && a[i]!=DOT) 
            {
                if(isalpha(a[i]))
                {
                    int f=0;
                    switch(a[i])
                    {
                        case'A':case'a':
                        case'E':case'e':
                        case'I':case'i':
                        case'O':case'o':
                        case'U':case'u':
                        f=1;
                        break;
                    }
                    if(f==1) k++;
                }
                i++;
            }
            if(k==max)
            {
               e++;
               printf("%d:",e);
               for(int p=j;p<i;p++) printf("%c",a[p]);
               printf("\n");
            }
        }
    }
    return 0;
}