#include <stdio.h>
#define DOT '.'

int main() {
    int i=0,k=0,n=-1;
    char x,a[50];
    while((x=getchar())!='\n')
    {
        n++;
        a[n]=x;
    }
    while(i<=n && a[i]!=DOT) i++;
    if(i<n)
    {
        int j=n-1;
        while(j>=i && a[j]!=DOT) j++;
        if(j>i)
        {
            
            for(int p=i;p<j;p++)
            {
                switch(a[p])
                {
                    case'A':case'a':
                    case'E':case'e':
                    case'I':case'i':
                    case'O':case'o':
                    case'U':case'u':
                    k++;
                    break;
                }
            } 
            printf("k=%d\n",k);
        }
        else printf("There are no vowels.");
    }
    return 0;
}